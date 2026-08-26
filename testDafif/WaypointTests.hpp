
<<<<<<< HEAD
#ifndef __WaypointTests_HPP__
#define __WaypointTests_HPP__

#include <string>
=======
#ifndef __WaypointTests_H__
#define __WaypointTests_H__
>>>>>>> d91383e8

namespace mixr {
namespace dafif { class WaypointLoader; }
}
 
class WaypointTests final
{
public:
   WaypointTests(
<<<<<<< HEAD
      const std::string& country,
      const std::string& file = "FILE3",
      const std::string& path = "../../mixr-data/DAFIF/FULLALL/"
=======
      const char* country,
      const char* file = "FILE3",
      const char* path = "../../mixr-data/DAFIF/FULLALL/"
>>>>>>> d91383e8
   );
   ~WaypointTests();

   void dump();      // dump raw DAFIF records
   void func30();    // just loads records and prints
   void func31(const double acLat, const double acLon, const double acElev, const bool printData);    // test waypoint()
   void func32(const double acLat, const double acLon, const double acElev, const bool printData);    // test queryByIdent()
   void func35(const double acLat, const double acLon, const double acElev, const bool printData);    // test queryByRange()
   void func36(const double acLat, const double acLon, const double acElev, const bool printData);    // test queryByKey()
   void func3A();    // test ICAO sorted listing
   void func3B(const double acLat, const double acLon, const double acElev, const bool printData);    // test queryByIcao()

private:
   mixr::dafif::WaypointLoader* db{};
};

#endif

