
<<<<<<< HEAD
#ifndef __Display_HPP__
#define __Display_HPP__

#include "mixr/ui/glut/IGlutDisplay.hpp"
#include "mixr/base/qty/util/length_utils.hpp"

namespace mixr {
namespace base { class IAngle; class Boolean; class Integer; class ILength; }
namespace terrain { class ITerrain; }
=======
#ifndef __Display_H__
#define __Display_H__

#include "mixr/ui/glut/GlutDisplay.hpp"
#include "mixr/base/units/distance_utils.hpp"

namespace mixr {
namespace base { class Angle; class Distance; class Number; }
namespace terrain { class Terrain; }
>>>>>>> d91383e8
}

class MainWindow;

// ----------------------------------------------------------------------------
// Display
//
// Description: Displays an image of a terrain database
//
// Factory name: TerrainDisplay
//
// Slots:
<<<<<<< HEAD
//    terrain        <terrain::ITerrain>    ! The terrain elevation database
//    minElevation   <Length>               ! Minimum elevation (Distance) (default: use database max value)
//    maxElevation   <Length>               ! Maximum elevation (Distance) (default: use database max value)
//    altitude       <Length>               ! Reference altitude (Distance) (default: 15000 feet)
//    lookAngle      <Angle>                ! Antenna look angle (Angle) (default: 0 degrees)
//    beamWidth      <Angle>                ! Antenna Beam Width (Angle) (default: 180 degrees)
//    colorScale     <Integer>              ! Color scale:  gray(0), color(1), green(2) (default: gray)
=======
//    terrain        <terrain::Terrain>     ! The terrain elevation database
//    minElevation   <Distance>             ! Minimum elevation (Distance) (default: use database max value)
//    maxElevation   <Distance>             ! Maximum elevation (Distance) (default: use database max value)
//    altitude       <Distance>             ! Reference altitude (Distance) (default: 15000 feet)
//    lookAngle      <Angle>                ! Antenna look angle (Angle) (default: 0 degrees)
//    beamWidth      <Angle>                ! Antenna Beam Width (Angle) (default: 180 degrees)
//    colorScale     <Number>               ! Color scale:  gray(0), color(1), green(2) (default: gray)
>>>>>>> d91383e8
//    interpolate    <Boolean>              ! Interpolate flag (default: false)
//    shadows        <Boolean>              ! Shadow test enabled
//    aac            <Boolean>              ! Aspect Angle test enabled
//    earthCurvature <Boolean>              ! Earth curvature test enabled
//    textureTest    <Boolean>              ! Texture test enabled
//
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
   enum class ColorDepth {GRAY=0, COLOR=1, GREEN=2};

public:
   Display();

<<<<<<< HEAD
   const mixr::terrain::ITerrain* getTerrain() const              { return terrain; }
=======
   const mixr::terrain::Terrain* getTerrain() const              { return terrain; }
>>>>>>> d91383e8

   bool isMinElevValid() const { return haveMinElev; }   // Ture if the min elevation is valid
   double getMinElevation() const { return minElev; }    // Returns the min elevation (meters)
   bool setMinElevation(const double elev);              // Sets the min elevation (meters)
   bool clearMinElevation();                             // Clears the min elevation (using datafile min elevation)

   bool isMaxElevValid() const { return haveMaxElev; }   // Ture if the max elevation is valid
   double getMaxElevation() const { return maxElev; }    // Returns the max elevation (meters)
   bool setMaxElevation(const double elev);              // Sets the max elevation (meters)
   bool clearMaxElevation();                             // Clears the max elevation (using datafile max elevation)

   void configure() final;
   void drawFunc() final;

   void reset() final;
   void updateData(const double dt = 0.0) final;

private:
   bool initImageMemory(const GLsizei width, const GLsizei height);
   bool copyImageMemory(const Display& org);
   void freeImageMemory();

<<<<<<< HEAD
   mixr::terrain::ITerrain* terrain{};                     // Terrain data

   double maxElev{15000.0 * mixr::base::length::FT2M};     // Max elevation (meters)
   double minElev{};                                       // Min elevation (meters)
   double altitude{15000.0 * mixr::base::length::FT2M};    // Ref altitude (meters)
=======
   mixr::terrain::Terrain* terrain{};                      // Terrain data

   double maxElev{15000.0 * mixr::base::distance::FT2M};   // Max elevation (meters)
   double minElev{};                                       // Min elevation (meters)
   double altitude{15000.0 * mixr::base::distance::FT2M};  // Ref altitude (meters)
>>>>>>> d91383e8
   double lookAngle{};                                     // Antenna look angle (degs)
   double beamWidth{180.0};                                // Antenna beam width (degs)
   ColorDepth colorDepth{ColorDepth::GRAY};                // Color scale index; gray, color, green
   bool haveMaxElev{};                                     // Have a maximum elevation flag
   bool haveMinElev{};                                     // Have a maximum elevation flag
   bool interpolate{};                                     // Interpolate flag
   bool testShadows{};                                     // Shadow test enabled
   bool testAac{};                                         // AAC test enabled
   bool testEarthCurv{};                                   // Earth curvature test enabled
   bool testTexture{};                                     // Texture image test

   static const GLsizei MAX_IMAGE_WIDTH{2048};   // maximum image width
   static const GLsizei MAX_IMAGE_HEIGHT{2048};  // maximum image height
   static const GLsizei PIXEL_SIZE{3};           // pixel size in bytes { RGB }

   GLuint   texture{};           // Texture
   GLsizei  imgWidth{};          // Image width  (number of columns)
   GLsizei  imgHeight{};         // Image height (number of rows)
   GLubyte* image{};             // The image pixels
                                 //   -- access individual pixels by mainImage[icol*imgWidth*PIZEL_SIZE + irow*PIZEL_SIZE]
                                 //   --   irow : [ 0 ... (imgHeight-1) ]
                                 //   --   icol : [ 0 ... (imgWidth-1) ]

private:
   // slot table helper methods
<<<<<<< HEAD
   bool setSlotTerrain(mixr::terrain::ITerrain* const);
   bool setSlotMinElevation(const mixr::base::ILength* const);
   bool setSlotMaxElevation(const mixr::base::ILength* const);
   bool setSlotAltitude(const mixr::base::ILength* const);
   bool setSlotLookAngle(const mixr::base::IAngle* const);
   bool setSlotBeamWidth(const mixr::base::IAngle* const);
   bool setSlotColorScale(const mixr::base::Integer* const);
   bool setSlotInterpolate(const mixr::base::Boolean* const);
   bool setSlotShadowsTest(const mixr::base::Boolean* const);
   bool setSlotAacTest(const mixr::base::Boolean* const);
   bool setSlotEarthCurvatureTest(const mixr::base::Boolean* const);
   bool setSlotTextureTest(const mixr::base::Boolean* const);
=======
   bool setSlotTerrain(mixr::terrain::Terrain* const);
   bool setSlotMinElevation(const mixr::base::Distance* const);
   bool setSlotMaxElevation(const mixr::base::Distance* const);
   bool setSlotAltitude(const mixr::base::Distance* const);
   bool setSlotLookAngle(const mixr::base::Angle* const);
   bool setSlotBeamWidth(const mixr::base::Angle* const);
   bool setSlotColorScale(const mixr::base::Number* const);
   bool setSlotInterpolate(const mixr::base::Number* const);
   bool setSlotShadowsTest(const mixr::base::Number* const);
   bool setSlotAacTest(const mixr::base::Number* const);
   bool setSlotEarthCurvatureTest(const mixr::base::Number* const);
   bool setSlotTextureTest(const mixr::base::Number* const);
>>>>>>> d91383e8
};

#endif
