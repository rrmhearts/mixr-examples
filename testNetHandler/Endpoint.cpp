
#include "Endpoint.hpp"

<<<<<<< HEAD
#include "mixr/base/network/INetHandler.hpp"
#include "mixr/base/numeric/Boolean.hpp"
#include "mixr/base/numeric/Integer.hpp"
=======
#include "mixr/base/network/TcpHandler.hpp"
#include "mixr/base/numeric/Number.hpp"
>>>>>>> d91383e8
#include <iostream>

using namespace mixr;

IMPLEMENT_SUBCLASS(Endpoint, "Endpoint")
EMPTY_DELETEDATA(Endpoint)

BEGIN_SLOTTABLE(Endpoint)
   "netHandler",           // 1) Network handler (input/output, or just output if netInput is defined)
   "netInput",             // 2) Optional input handler (otherwise 'netHandler' is used)
   "netOutput",            // 3) Alias for the 'netHandler' slot to be use when using the 'netInput' slot.
   "noWait",               // 4) No wait (unblocked) I/O flag (default: false -- blocked I/O)
   "loops",                // 5) Number of messages to send/recv before disconnecting and halting (default: infinite)
END_SLOTTABLE(Endpoint)

BEGIN_SLOT_MAP(Endpoint)
<<<<<<< HEAD
    ON_SLOT(1, setSlotNetwork,   mixr::base::INetHandler)
    ON_SLOT(2, setSlotNetInput,  mixr::base::INetHandler)
    ON_SLOT(3, setSlotNetwork,   mixr::base::INetHandler)
    ON_SLOT(4, setSlotNoWait,    mixr::base::Boolean)
    ON_SLOT(5, setSlotLoops,     mixr::base::Integer)
=======
    ON_SLOT(1, setSlotNetwork,   mixr::base::NetHandler)
    ON_SLOT(2, setSlotNetInput,  mixr::base::NetHandler)
    ON_SLOT(3, setSlotNetwork,   mixr::base::NetHandler)
    ON_SLOT(4, setSlotNoWait,    mixr::base::Number)
    ON_SLOT(5, setSlotLoops,     mixr::base::Number)
>>>>>>> d91383e8
END_SLOT_MAP()

Endpoint::Endpoint()
{
   STANDARD_CONSTRUCTOR()
}

void Endpoint::copyData(const Endpoint& org, const bool)
{
   BaseClass::copyData(org);

   noWaitFlag = org.noWaitFlag;
   loops = org.loops;

   // We need to init this ourselves, so
   netHandler = nullptr;
   netInput = nullptr;
   networkInitialized = false;
   networkInitFailed = false;
}

// reset vehicle
void Endpoint::reset()
{
   BaseClass::reset();

   // Initialize the networks
   if (!networkInitialized && !networkInitFailed) {
      networkInitialized = initNetworks();
      networkInitFailed = !networkInitialized;
   }
}

// init the networks
bool Endpoint::initNetworks()
{
    // Init the main net handler
    bool ok1{}; // (required)
    if (netHandler != nullptr) ok1 = netHandler->initNetwork(noWaitFlag);

    // Init the input net handler
    bool ok2{true}; // (optional)
    if (netInput != nullptr) ok2 = netInput->initNetwork(noWaitFlag);

    return (ok1 && ok2);
}

//------------------------------------------------------------------------------
// Send (transmit) our data buffer; returns true if successful.
// 'size' just be less than MAX_SIZE.
//------------------------------------------------------------------------------
bool Endpoint::sendData(const char* const msg, const unsigned int size)
{
   bool ok{};
   if (msg != nullptr && size > 0 && size < MAX_SIZE  && areNetworksEnabled()) {
      ok = netHandler->sendData(msg, size);
   } else {
      std::cerr << "NetTester::sendData(): unable to send data; ";
      if (msg == nullptr) std::cerr << "No message buffer.";
      if (size == 0 || size >= MAX_SIZE) std::cerr << "invalid message size.";
      if (!areNetworksEnabled()) std::cerr << "No network connection.";
      std::cerr << std::endl;
   }
   return ok;
}

//------------------------------------------------------------------------------
// Receive a data buffer; returns number of bytes received;
// 'maxsize' just be less than MAX_SIZE.
//------------------------------------------------------------------------------
int Endpoint::recvData(char* const msg, const unsigned int maxsize)
{
    int n{};
    if (msg != nullptr && maxsize > 0 && maxsize <= MAX_SIZE && areNetworksEnabled()) {
        char buffer[MAX_SIZE]{};
        int n0{};
        if (netInput != nullptr) {
            // use the optional 'netInput' handler
            n0 = static_cast<int>(netInput->recvData( buffer, MAX_SIZE ));
        } else {
            // default: use the 'netHandler'
            n0 = static_cast<int>(netHandler->recvData( buffer, MAX_SIZE ));
        }
        if (n0 > 0) {
            for (int i = 0; i < n0; i++) {
                msg[i] = buffer[i];
            }
            n = n0;
        }
    } else {
      std::cerr << "NetTester::recvData(): unable to receive data; ";
      if (msg == nullptr) std::cerr << "No message buffer.";
      if (maxsize == 0 || maxsize >= MAX_SIZE) std::cerr << "invalid max message size.";
      if (!areNetworksEnabled()) std::cerr << "No network connection.";
      std::cerr << std::endl;
    }
    return n;
}


//------------------------------------------------------------------------------
// Returns true if the networks are initialized and connected
//------------------------------------------------------------------------------
bool Endpoint::areNetworksEnabled() const
{
    bool ok{networkInitialized};
    if (ok && netHandler != nullptr) ok = netHandler->isConnected();
    if (ok && netInput != nullptr)   ok = netInput->isConnected();
    return ok;
}

//------------------------------------------------------------------------------
// close all network connections
//------------------------------------------------------------------------------
void Endpoint::closeConnections()
{
    if (netHandler != nullptr) netHandler->closeConnection();
    if (netInput != nullptr)   netInput->closeConnection();
}

// Network Handler
<<<<<<< HEAD
bool Endpoint::setSlotNetwork(mixr::base::INetHandler* const msg)
=======
bool Endpoint::setSlotNetwork(mixr::base::NetHandler* const msg)
>>>>>>> d91383e8
{
    netHandler = msg;
    return true;
}

// Input Handler
<<<<<<< HEAD
bool Endpoint::setSlotNetInput(mixr::base::INetHandler* const msg)
=======
bool Endpoint::setSlotNetInput(mixr::base::NetHandler* const msg)
>>>>>>> d91383e8
{
    netInput = msg;
    return true;
}

// No wait (unblocked) I/O flag
<<<<<<< HEAD
bool Endpoint::setSlotNoWait(mixr::base::Boolean* const msg)
{
    bool ok{};
    if (msg != nullptr) {
        noWaitFlag = msg->asBool();
=======
bool Endpoint::setSlotNoWait(mixr::base::Number* const msg)
{
    bool ok{};
    if (msg != nullptr) {
        noWaitFlag = msg->getBoolean();
>>>>>>> d91383e8
        ok = true;
    }
    return ok;
}

// Number of message loops
<<<<<<< HEAD
bool Endpoint::setSlotLoops(mixr::base::Integer* const msg)
{
    bool ok{};
    if (msg != nullptr) {
        const int ia{msg->asInt()};
=======
bool Endpoint::setSlotLoops(mixr::base::Number* const msg)
{
    bool ok{};
    if (msg != nullptr) {
        const int ia{msg->getInt()};
>>>>>>> d91383e8
        if (ia >= 0) {
            loops = ia;
            ok = true;
        }
    }
    return ok;
}

