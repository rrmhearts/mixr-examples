//------------------------------------------------------------------------------
// Test template class creation and functionality
//------------------------------------------------------------------------------

#include <iostream>

#include "linked_list.hpp"
<<<<<<< HEAD
#include "mixr/base/colors/IColor.hpp"
=======
#include "mixr/base/colors/Color.hpp"
>>>>>>> d91383e8

int main(int argc, char**)
{
   std::cout << "Test templates" << std::endl;

<<<<<<< HEAD
   const auto colorList = new mixr::base::LinkedList<mixr::base::IColor>;
=======
   const auto colorList = new mixr::base::LinkedList<mixr::base::Color>;
>>>>>>> d91383e8

   if (colorList->isEmpty()) { std::cout << "List is empty\n"; }

   std::cout << "# entries : " << colorList->entries() << std::endl;

<<<<<<< HEAD
   const auto c1 = new mixr::base::IColor();
=======
   const auto c1 = new mixr::base::Color();
>>>>>>> d91383e8

   colorList->put(c1);

   std::cout << "# entries : " << colorList->entries() << std::endl;

   return 0;
}

