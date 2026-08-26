
<<<<<<< HEAD
#ifndef __Echo_HPP__
#define __Echo_HPP__
=======
#ifndef __Echo_H__
#define __Echo_H__
>>>>>>> d91383e8

#include "Endpoint.hpp"

//------------------------------------------------------------------------------
// Class: Echo
//
// Factory name: Echo
//------------------------------------------------------------------------------
class Echo final: public Endpoint
{
   DECLARE_SUBCLASS(Echo, Endpoint)

public:
   Echo();

   void updateData(const double dt = 0.0) final;
   void reset() final;

private:
   int loopCounter {};
};

#endif
