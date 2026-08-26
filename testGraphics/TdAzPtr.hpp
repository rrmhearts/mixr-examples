
<<<<<<< HEAD
#ifndef __TdAzPtr_HPP__
#define __TdAzPtr_HPP__
=======
#ifndef __TdAzPtr_H__
#define __TdAzPtr_H__
>>>>>>> d91383e8

#include "mixr/graphics/Graphic.hpp"

//------------------------------------------------------------------------------
// Class: TdAzPtr
//
// Description: Test Display Azimuth Pointer
//------------------------------------------------------------------------------
class TdAzPtr final: public mixr::graphics::Graphic
{
    DECLARE_SUBCLASS(TdAzPtr, mixr::graphics::Graphic)

public:
    TdAzPtr();

<<<<<<< HEAD
    bool event(const int event, mixr::base::IObject* const obj = nullptr) final;
=======
    bool event(const int event, mixr::base::Object* const obj = nullptr) final;
>>>>>>> d91383e8
    void draw() final;

private:
    double azimuth{};
};

#endif
