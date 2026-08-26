
<<<<<<< HEAD
#ifndef __TestDisplay_HPP__
#define __TestDisplay_HPP__

#include "mixr/ui/glut/IGlutDisplay.hpp"
#include <array>

namespace mixr {
namespace models { class IPlayer; }
namespace simulation { class ISimulation; class IStation; }
=======
#ifndef __TestDisplay_H__
#define __TestDisplay_H__

#include "mixr/ui/glut/GlutDisplay.hpp"
#include <array>

namespace mixr {
namespace models { class Missile; class Player; }
namespace simulation { class Simulation; class Station; }
>>>>>>> d91383e8
namespace graphics { class SymbolLoader; }
}

//------------------------------------------------------------------------------
// Class: TestDisplay
//
// Factory name: TestDisplay
//
// Events: (all keyboard events)
//   'r' or 'R'   -- Reset simulation
//   'f' or 'F'   -- Toggle simulation freeze
//   'l' or 'L'   -- Launch Missile
//   'p' or 'P'   -- Prelaunch weapon
//   's' or 'S'   -- Target step
//   'i' or 'I'   -- Increase Range
//   'd' or 'D'   -- Decrease Range
//------------------------------------------------------------------------------
<<<<<<< HEAD
class TestDisplay final: public mixr::glut::IGlutDisplay
{
    DECLARE_SUBCLASS(TestDisplay, mixr::glut::IGlutDisplay)
=======
class TestDisplay final: public mixr::glut::GlutDisplay
{
    DECLARE_SUBCLASS(TestDisplay, mixr::glut::GlutDisplay)
>>>>>>> d91383e8

public:
    TestDisplay();

<<<<<<< HEAD
    mixr::models::IPlayer* getOwnship();
    mixr::simulation::ISimulation* getSimulation();
    mixr::simulation::IStation* getStation();

    void maintainAirTrackSymbols(mixr::graphics::SymbolLoader* loader, const double rng);

    bool event(const int event, mixr::base::IObject* const obj = nullptr) final;
=======
    mixr::models::Player* getOwnship();
    mixr::simulation::Simulation* getSimulation();
    mixr::simulation::Station* getStation();

    void maintainAirTrackSymbols(mixr::graphics::SymbolLoader* loader, const double rng);

    bool event(const int event, mixr::base::Object* const obj = nullptr) final;
>>>>>>> d91383e8
    void updateData(const double dt = 0.0) final;

private:
    // Key event handlers
    bool onToggleTimeKey();
    bool onResetKey();
    bool onFreezeKey();
    bool onWpnRelKey();
    bool onPreRelKey();
    bool onIncRngKey();
    bool onDecRngKey();
    bool onStepOwnshipKey();

    double range{40.0};          // SD range

    SendData headingSD;
    SendData rangeSD;

<<<<<<< HEAD
    mixr::base::safe_ptr<mixr::simulation::IStation> myStation;

    static const int MAX_TRACKS{200};
    std::array<mixr::models::IPlayer*, MAX_TRACKS> tracks{};  // players that we're displaying
    std::array<int, MAX_TRACKS> trkIdx{};                     // Index of track symbols
=======
    mixr::base::safe_ptr<mixr::simulation::Station> myStation;

    static const int MAX_TRACKS{200};
    std::array<mixr::models::Player*, MAX_TRACKS> tracks{};  // players that we're displaying
    std::array<int, MAX_TRACKS> trkIdx{};                    // Index of track symbols
>>>>>>> d91383e8
};

#endif
