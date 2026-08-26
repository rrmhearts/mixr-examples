
<<<<<<< HEAD
#ifndef __Display_HPP__
#define __Display_HPP__

#include "mixr/ui/glut/IGlutDisplay.hpp"
=======
#ifndef __Display_H__
#define __Display_H__

#include "mixr/ui/glut/GlutDisplay.hpp"
>>>>>>> d91383e8

// -------------------------------------------------------------------------------
// Class: Display
//
// Description:
//      Derived Display that will make our map page move.
// -------------------------------------------------------------------------------
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

    void mouseMotionEvent(const int x, const int y) final;
    void mouseEvent(const int button, const int state, const int x, const int y) final;
    void passiveMotionEvent(const int x, const int y) final;
    void buttonEvent(const int b) final;
    void updateData(const double dt = 0.0) final;

private:
    int startX{};         // startX of our last mouse position
    int startY{};         // startY of our last mouse position
    bool dragging{};      // are we dragging the map?
    int range{};          // range of our map
    SendData rangeSD;
};

#endif
