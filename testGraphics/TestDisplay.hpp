
<<<<<<< HEAD
#ifndef __TestDisplay_HPP__
#define __TestDisplay_HPP__

#include "mixr/ui/glut/IGlutDisplay.hpp"
=======
#ifndef __TestDisplay_H__
#define __TestDisplay_H__

#include "mixr/ui/glut/GlutDisplay.hpp"
>>>>>>> d91383e8

namespace mixr {
   namespace graphics { class Graphic; }
}

//------------------------------------------------------------------------------
// TestDisplay
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

   void drawIt() final;
   void mouseEvent(const int button, const int state, const int x, const int y) final;
<<<<<<< HEAD
   bool event(const int event, mixr::base::IObject* const obj = nullptr) final;
=======
   bool event(const int event, mixr::base::Object* const obj = nullptr) final;
>>>>>>> d91383e8

   bool onFrameBufferKey();

private:
   // select/pick test
   mixr::graphics::Graphic* selected{};
};

#endif
