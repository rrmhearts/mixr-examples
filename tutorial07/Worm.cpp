
#include "Worm.hpp"
<<<<<<< HEAD

#include "mixr/base/numeric/INumber.hpp"
#include "mixr/base/qty/angles.hpp"
=======
#include "mixr/base/units/Angles.hpp"
>>>>>>> d91383e8

#include <cmath>

IMPLEMENT_SUBCLASS(Worm, "Worm")
EMPTY_DELETEDATA(Worm)

<<<<<<< HEAD
BEGIN_SLOTTABLE(Worm)
   "speed",            // 1: speed
   "startAngle",       // 2: starting angle (off X axis)
END_SLOTTABLE(Worm)

BEGIN_SLOT_MAP(Worm)
   ON_SLOT(1, setSlotSpeed, mixr::base::INumber)
   ON_SLOT(2, setSlotAngle, mixr::base::IAngle)
   ON_SLOT(2, setSlotAngle, mixr::base::INumber)
=======
// This creates an array of strings
BEGIN_SLOTTABLE(Worm)
   "speed",            // 1: speed
   "startAngle",       // 2: starting angle (off X axis)
// This macro closes the array and adds: Worm::nslots<int> and 
// Worm::slottable<function> which expands the "SlotTable"
END_SLOTTABLE(Worm)

// Used for parsing configuration file into the object's slots (properties)
BEGIN_SLOT_MAP(Worm)
   ON_SLOT(1, setSlotSpeed, mixr::base::Number)
   ON_SLOT(2, setSlotAngle, mixr::base::Angle)
   ON_SLOT(2, setSlotAngle, mixr::base::Number)
>>>>>>> d91383e8
END_SLOT_MAP()

BEGIN_EVENT_HANDLER(Worm)
END_EVENT_HANDLER()

Worm::Worm()
{
   STANDARD_CONSTRUCTOR()
   setSpeed(10.0);
}

void Worm::copyData(const Worm& org, const bool)
{
   BaseClass::copyData(org);

   if (iangle != nullptr) { iangle->unref(); iangle = nullptr; }
   if (org.iangle != nullptr) iangle = org.iangle->clone();

   left = org.left;
   right = org.right;
   bottom = org.bottom;
   top = org.top;
   xPos = org.xPos;
   yPos = org.yPos;
   xOld = org.xOld;
   yOld = org.yOld;
   dx = org.dx;
   dy = org.dy;
   speed = org.speed;
   sangle = org.sangle;
   nTrails = org.nTrails;
   index   = org.index;

   for (int i = 0; i < nTrails; i++) {
      trail[i] = org.trail[i];
   }
}

void Worm::reset()
{
   BaseClass::reset();

   xPos = 0;
   yPos =0;
   nTrails = 0;
   if (iangle != nullptr) {
<<<<<<< HEAD
      setStartAngle(iangle->getValueInRadians());
=======
      mixr::base::Radians radians;
      setStartAngle(static_cast<double>(radians.convert(*iangle)));
>>>>>>> d91383e8
   }
}

void Worm::setStartAngle(const double radians)
{
   sangle = radians;
   dx = std::cos(sangle) * speed;
   dy = std::sin(sangle) * speed;
}

void Worm::setSpeed(const double xx)
{
   speed = xx;
   dx = std::cos(sangle) * speed;
   dy = std::sin(sangle) * speed;
}

void Worm::updateTC(const double dt)
{
   // Update base classes stuff
   BaseClass::updateTC(dt);

   // ---
   // Move
   // ---

   xPos += dx*dt;
   if (xPos > right) {
      xPos = right - (xPos - right);
      dx = -dx;
   } else if (xPos < left) {
      xPos = left - (xPos - left);
      dx = -dx;
   }

   yPos += dy*dt;
   if (yPos > top) {
      yPos = top - (yPos - top);
      dy = -dy;
   } else if (yPos < bottom) {
      yPos = bottom - (yPos - bottom);
     dy = -dy;
   }
}

void Worm::updateData(const double dt)
{
   // Update base classes stuff
   BaseClass::updateData(dt);

   // ---
   // Save the point every pass (if it has changed)
   // ---
   if (nTrails == 0 || xPos != xOld || yPos != yOld) {
      trail[index++].set(xPos, yPos);
      if (index >= MAX_HIST) index = 0;
      if (nTrails < MAX_HIST) nTrails++;
      xOld = xPos;
      yOld = yPos;
   }
}

void Worm::drawFunc()
{
   glBegin(GL_LINE_STRIP);
   int idx{index - 1};
   for (int i = 0; i < nTrails; i++) {
      if (idx < 0) idx = MAX_HIST - 1;
      lcVertex2v(trail[idx--].ptr());
   }
   glEnd();
}

<<<<<<< HEAD
bool Worm::setSlotSpeed(const mixr::base::INumber* const rsobj)
{
   bool ok{};
   if (rsobj != nullptr) {
      setSpeed(rsobj->asDouble());
=======
bool Worm::setSlotSpeed(const mixr::base::Number* const rsobj)
{
   bool ok{};
   if (rsobj != nullptr) {
      setSpeed(rsobj->getReal());
>>>>>>> d91383e8
      ok = true;
   }
   return ok;
}

<<<<<<< HEAD
bool Worm::setSlotAngle(const mixr::base::IAngle* const x)
{
   bool ok{};
   if (x != nullptr) {
      setStartAngle(x->getValueInRadians());
      iangle = x;
=======
bool Worm::setSlotAngle(const mixr::base::Angle* const saobj)
{
   bool ok{};
   if (saobj != nullptr) {
      mixr::base::Radians radians;
      setStartAngle(static_cast<double>(radians.convert(*saobj)));
      iangle = saobj;
>>>>>>> d91383e8
      iangle->ref();
      ok = true;
   }
   return ok;
}

<<<<<<< HEAD
bool Worm::setSlotAngle(const mixr::base::INumber* const saobj)
{
   bool ok{};
   if (saobj != nullptr) {
      setStartAngle(saobj->asDouble());
=======
bool Worm::setSlotAngle(const mixr::base::Number* const saobj)
{
   bool ok{};
   if (saobj != nullptr) {
      setStartAngle(saobj->getReal());
>>>>>>> d91383e8
      ok = true;
   }
   return ok;
}
