
<<<<<<< HEAD
#ifndef __Display_HPP__
#define __Display_HPP__

#include "mixr/ui/glut/IGlutDisplay.hpp"

namespace mixr {
namespace base { class Boolean; }
namespace models { class IPlayer; }
namespace simulation { class ISimulation; class IStation; }
=======
#ifndef __Display_H__
#define __Display_H__

#include "mixr/ui/glut/GlutDisplay.hpp"

namespace mixr {
namespace base { class Number; }
namespace models { class Player; }
namespace simulation { class Simulation; class Station; }
>>>>>>> d91383e8
}

// ----------------------------------------------------------------------------
// Class: Display
//
// Description: Displays an image of a radar beam return
//
// Factory name: RbrDisplay
//
// Slots:
//    textureTest <Boolean>   Texture test enabled
// ----------------------------------------------------------------------------
<<<<<<< HEAD
class Display final: public mixr::glut::IGlutDisplay
{
   DECLARE_SUBCLASS(Display, mixr::glut::IGlutDisplay)
=======
class Display final: public mixr::glut::GlutDisplay
{
   DECLARE_SUBCLASS(Display, mixr::glut::GlutDisplay)
>>>>>>> d91383e8

public:
   Display();

<<<<<<< HEAD
   mixr::models::IPlayer* getOwnship();
   mixr::simulation::ISimulation* getSimulation();
   mixr::simulation::IStation* getStation();
=======
   mixr::models::Player* getOwnship();
   mixr::simulation::Simulation* getSimulation();
   mixr::simulation::Station* getStation();
>>>>>>> d91383e8

   void configure() final;
   void drawFunc() final;

private:
<<<<<<< HEAD
   mixr::base::safe_ptr<mixr::simulation::IStation> myStation;
=======
   mixr::base::safe_ptr<mixr::simulation::Station> myStation;
>>>>>>> d91383e8

   bool testTexture{};      // Texture image test
   GLuint texture{};        // Texture

private:
   // slot table helper methods
<<<<<<< HEAD
   bool setSlotTextureTest(const mixr::base::Boolean* const);
=======
   bool setSlotTextureTest(const mixr::base::Number* const);
>>>>>>> d91383e8
};

#endif
