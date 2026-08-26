
<<<<<<< HEAD
#ifndef __SimpleIGen_HPP__
#define __SimpleIGen_HPP__

#include "mixr/ui/glut/IGlutDisplay.hpp"

#include "mixr/ighost/pov/Pov.hpp"
=======
#ifndef __SimpleIGen_H__
#define __SimpleIGen_H__

#include "mixr/ui/glut/GlutDisplay.hpp"

#include "mixr/ighost/pov/EntityState.hpp"
>>>>>>> d91383e8

#include <osgViewer/Viewer>
#include <osgDB/ReadFile>

namespace mixr {
<<<<<<< HEAD
namespace base { class INetHandler; class String; }
}

class SimpleIGen final: public ::mixr::glut::IGlutDisplay
{
   DECLARE_SUBCLASS(SimpleIGen, ::mixr::glut::IGlutDisplay)
=======
namespace base { class NetHandler; class String; }
}

class SimpleIGen final: public ::mixr::glut::GlutDisplay
{
   DECLARE_SUBCLASS(SimpleIGen, ::mixr::glut::GlutDisplay)
>>>>>>> d91383e8

public:
   SimpleIGen();

   // base::Component interface
   void updateData(const double dt = 0) final;

   // graphics::Page interface
   void draw() final;

   // graphics::Display interface
   void reshapeIt(int w, int h) final;

   // base::Component interface
<<<<<<< HEAD
   bool event(const int event, ::mixr::base::IObject* const obj = nullptr) final;
=======
   bool event(const int event, ::mixr::base::Object* const obj = nullptr) final;
>>>>>>> d91383e8

   // SimpleIGen interface
   bool onEntry() final;

   // initialize the network
<<<<<<< HEAD
   bool initNetwork();
=======
   bool initNetwork();      
>>>>>>> d91383e8
   // receive a buffer from the network
   int recv(char* buffer);

private:
   ::osg::ref_ptr<osgViewer::Viewer> viewer;
   ::osg::ref_ptr<::osg::Group> rootnode;
   ::osg::ref_ptr<::osg::Node> terrain;
   ::osg::ref_ptr<::osg::Light> light;
   ::osg::ref_ptr<::osg::LightSource> lightSource;
   ::osg::observer_ptr<osgViewer::GraphicsWindow> window;
<<<<<<< HEAD
   // data from simulation
   ::mixr::ighost::pov::Pov pov;
   // coord System Shift (Z Up)
=======
   // Attitude
   float yaw {}, pitch {}, roll {};
   // Position
   float x {}, y {}, z {6000.0};
   // Data from simulation
   ::mixr::pov::EntityState entityState;
   // Coord System Shift (Z Up)
>>>>>>> d91383e8
   ::osg::Matrix viewMatrix;
   ::osg::Matrix viewRotAndPosMatrix;
   ::osg::Matrix eyeMatrix;
   ::osg::Matrix translate;
   ::osg::Matrix rotate;
   std::string databasePath;                                    // database path
<<<<<<< HEAD
   ::mixr::base::safe_ptr<::mixr::base::INetHandler> netInput;  // Input network handler
=======
   ::mixr::base::safe_ptr<::mixr::base::NetHandler> netInput;   // Input network handler
>>>>>>> d91383e8
   bool netOk {};

private:
   // slot table helper methods
   bool setSlotDatabasePath(::mixr::base::String* const);
<<<<<<< HEAD
   bool setSlotNetInput(::mixr::base::INetHandler* const);
=======
   bool setSlotNetInput(::mixr::base::NetHandler* const);
>>>>>>> d91383e8
};

#endif

