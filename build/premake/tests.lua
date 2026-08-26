--------------------------------------------------------
-- Test applications
--------------------------------------------------------

-- test dafif library functionality
project "testDafif"
<<<<<<< HEAD
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
>>>>>>> d91383e8
   targetname "testDafif"
   targetdir "../../testDafif"
   debugdir "../../testDafif"
   files {
<<<<<<< HEAD
      "../../testDafif/**"
=======
      "../../testDafif/**.h*",
      "../../testDafif/**.cpp",
      "../../testDafif/**.cxx",
      "../../testDafif/**.epp",
      "../../testDafif/**.edl"
>>>>>>> d91383e8
   }
   includedirs { MIXR_IncPath, MIXR_3rdPartyIncPath }
   libdirs     { MIXR_LibPath, MIXR_3rdPartyLibPath }
   filter "configurations:Release"
<<<<<<< HEAD
      links {"mixr_models_jsbsim", "mixr_models", "mixr_simulation", "mixr_terrain", "mixr_dafif", "mixr_base"}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_models_jsbsim_d", "mixr_models_d", "mixr_simulation_d", "mixr_terrain_d", "mixr_dafif_d", "mixr_base_d"}
=======
      links {"mixr_models", "mixr_simulation", "mixr_terrain", "mixr_dafif", "mixr_base"}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_models_d", "mixr_simulation_d", "mixr_terrain_d", "mixr_dafif_d", "mixr_base_d"}
>>>>>>> d91383e8
      links {LibWindows}

-- testEvents: test of event passing
project "testEvents"
<<<<<<< HEAD
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
>>>>>>> d91383e8
   targetname "testEvents"
   targetdir "../../testEvents"
   debugdir "../../testEvents"
   files {
<<<<<<< HEAD
      "../../testEvents/**"
=======
      "../../testEvents/**.h*",
      "../../testEvents/**.cpp",
      "../../testEvents/**.epp",
      "../../testEvents/**.edl"
>>>>>>> d91383e8
   }
   includedirs { MIXR_IncPath, MIXR_3rdPartyIncPath }
   libdirs     { MIXR_LibPath, MIXR_3rdPartyLibPath }
   filter "configurations:Release"
      links {"mixr_ui_glut", "mixr_graphics", "mixr_base"}
      links {LibFtgl, LibFreetype, LibGlut, LibGLU, LibGL}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_ui_glut_d", "mixr_graphics_d", "mixr_base_d"}
      links {LibFtgl_d, LibFreetype_d, LibGlut_d, LibGLU, LibGL}
      links {LibWindows}

-- testGraphics : test of basic graphics
project "testGraphics"
<<<<<<< HEAD
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
>>>>>>> d91383e8
   targetname "testGraphics"
   targetdir "../../testGraphics"
   debugdir "../../testGraphics"
   files {
<<<<<<< HEAD
      "../../testGraphics/**"
=======
      "../../testGraphics/**.h*",
      "../../testGraphics/**.cpp",
      "../../testGraphics/**.epp",
      "../../testGraphics/**.edl"
>>>>>>> d91383e8
   }
   includedirs { MIXR_IncPath, MIXR_3rdPartyIncPath }
   libdirs     { MIXR_LibPath, MIXR_3rdPartyLibPath }
   filter "configurations:Release"
      links {"mixr_ui_glut", "mixr_graphics", "mixr_base"}
      links {LibFtgl, LibFreetype, LibGlut, LibGLU, LibGL}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_ui_glut_d", "mixr_graphics_d", "mixr_base_d"}
      links {LibFtgl_d, LibFreetype_d, LibGlut_d, LibGLU, LibGL}
      links {LibWindows}

-- testInfrared: IR test
project "testInfrared"
<<<<<<< HEAD
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
>>>>>>> d91383e8
   targetname "testInfrared"
   targetdir "../../testInfrared"
   debugdir "../../testInfrared"
   files {
<<<<<<< HEAD
      "../../testInfrared/**"
=======
      "../../testInfrared/**.h*",
      "../../testInfrared/**.cpp",
      "../../testInfrared/**.epp",
      "../../testInfrared/**.edl"
>>>>>>> d91383e8
   }
   includedirs { MIXR_IncPath, MIXR_3rdPartyIncPath }
   libdirs     { MIXR_LibPath, MIXR_3rdPartyLibPath }
   filter "configurations:Release"
<<<<<<< HEAD
      links {"mixr_models_jsbsim", "mixr_models", "JSBSim"}
      links {"mixr_ighost_cigi", LibCigi, "mixr_ighost_flightgear"}
=======
      links {"mixr_models", "JSBSim"}
      links {"mixr_ighost_cigi", "mixr_ighost_pov", LibCigi}
>>>>>>> d91383e8
      links {"mixr_interop_dis", "mixr_interop" }
      links {"mixr_simulation", "mixr_terrain"}
      links {"mixr_ui_glut", "mixr_instruments", "mixr_graphics", "mixr_base"}
      links {LibFtgl, LibFreetype, LibGlut, LibGLU, LibGL}
      links {LibWindows}
   filter "configurations:Debug"
<<<<<<< HEAD
      links {"mixr_models_jsbsim_d", "mixr_models_d", "JSBSim_d"}
      links {"mixr_ighost_cigi_d", LibCigi_d, "mixr_ighost_flightgear_d"}
=======
      links {"mixr_models_d", "JSBSim_d"}
      links {"mixr_ighost_cigi_d", "mixr_ighost_pov_d", LibCigi_d}
>>>>>>> d91383e8
      links {"mixr_interop_dis_d", "mixr_interop_d" }
      links {"mixr_simulation_d", "mixr_terrain_d"}
      links {"mixr_ui_glut_d", "mixr_instruments_d", "mixr_graphics_d", "mixr_base_d"}
      links {LibFtgl_d, LibFreetype_d, LibGlut_d, LibGLU, LibGL}
      links {LibWindows}

-- testLinearSys: test of linear system components
project "testLinearSys"
<<<<<<< HEAD
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
>>>>>>> d91383e8
   targetname "testLinearSys"
   targetdir "../../testLinearSys"
   debugdir "../../testLinearSys"
   files {
<<<<<<< HEAD
      "../../testLinearSys/**"
=======
      "../../testLinearSys/**.h*",
      "../../testLinearSys/**.cpp",
      "../../testLinearSys/**.epp",
      "../../testLinearSys/**.edl"
>>>>>>> d91383e8
   }
   includedirs { MIXR_IncPath }
   libdirs     { MIXR_LibPath }
   filter "configurations:Release"
<<<<<<< HEAD
      links {"mixr_base"}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_base_d"}
=======
      links {"mixr_linearsystem", "mixr_base"}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_linearsystem_d", "mixr_base_d"}
>>>>>>> d91383e8
      links {LibWindows}

-- testLinkage: linkage test
project "testLinkage"
<<<<<<< HEAD
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
>>>>>>> d91383e8
   targetname "testLinkage"
   targetdir "../../testLinkage"
   debugdir "../../testLinkage"
   files {
<<<<<<< HEAD
      "../../testLinkage/**"
=======
      "../../testLinkage/**.h*",
      "../../testLinkage/**.cpp",
      "../../testLinkage/**.epp",
      "../../testLinkage/**.edl"
>>>>>>> d91383e8
   }
   includedirs { MIXR_IncPath, MIXR_3rdPartyIncPath }
   libdirs     { MIXR_LibPath, MIXR_3rdPartyLibPath }
   filter "configurations:Release"
      links {"mixr_linkage", "mixr_ui_glut", "mixr_graphics", "mixr_base"}
      links {LibFtgl, LibFreetype, LibGlut, LibGLU, LibGL}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_linkage_d", "mixr_ui_glut_d", "mixr_graphics_d", "mixr_base_d"}
      links {LibFtgl_d, LibFreetype_d, LibGlut_d, LibGLU, LibGL}
      links {LibWindows}

-- testMatrix
project "testMatrix"
<<<<<<< HEAD
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
>>>>>>> d91383e8
   targetname "testMatrix"
   targetdir "../../testMatrix"
   debugdir "../../testMatrix"
   files {
<<<<<<< HEAD
      "../../testMatrix/**"
=======
      "../../testMatrix/**.h*",
      "../../testMatrix/**.cpp",
      "../../testMatrix/**.epp",
      "../../testMatrix/**.edl"
>>>>>>> d91383e8
   }
   includedirs { MIXR_IncPath }
   libdirs     { MIXR_LibPath }
   filter "configurations:Release"
      links {"mixr_base"}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_base_d"}
      links {LibWindows}

-- testMetaObject
project "testMetaObject"
<<<<<<< HEAD
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
>>>>>>> d91383e8
   targetname "testMetaObject"
   targetdir "../../testMetaObject"
   debugdir "../../testMetaObject"
   files {
<<<<<<< HEAD
      "../../testMetaObject/**"
=======
      "../../testMetaObject/**.h*",
      "../../testMetaObject/**.cpp",
      "../../testMetaObject/**.epp",
      "../../testMetaObject/**.edl"
>>>>>>> d91383e8
   }
   includedirs { MIXR_IncPath }
   libdirs     { MIXR_LibPath }
   filter "configurations:Release"
      links {"mixr_base"}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_base_d"}
      links {LibWindows}

-- test navigation utility functions
project "testNavUtils"
<<<<<<< HEAD
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
>>>>>>> d91383e8
   targetname "testNavUtils"
   targetdir "../../testNavUtils"
   debugdir "../../testNavUtils"
   files {
<<<<<<< HEAD
      "../../testNavUtils/**"
=======
      "../../testNavUtils/**.h*",
      "../../testNavUtils/**.cpp",
      "../../testNavUtils/**.epp",
      "../../testNavUtils/**.edl"
>>>>>>> d91383e8
   }
   includedirs { MIXR_IncPath }
   libdirs     { MIXR_LibPath }
   filter "configurations:Release"
      links {"mixr_base"}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_base_d"}
      links {LibWindows}

-- testNetHandler
project "testNetHandler"
<<<<<<< HEAD
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
>>>>>>> d91383e8
   targetname "testNetHandler"
   targetdir "../../testNetHandler"
   debugdir "../../testNetHandler"
   files {
<<<<<<< HEAD
      "../../testNetHandler/**"
   }
   includedirs { MIXR_IncPath, MIXR_3rdPartyIncPath, MIXR_ExamplesIncPath }
   libdirs     { MIXR_LibPath, MIXR_3rdPartyLibPath, MIXR_ExamplesLibPath }
=======
      "../../testNetHandler/**.h*",
      "../../testNetHandler/**.cpp",
      "../../testNetHandler/**.epp",
      "../../testNetHandler/**.edl"
   }
   includedirs { MIXR_IncPath, MIXR_3rdPartyIncPath }
   libdirs     { MIXR_LibPath, MIXR_3rdPartyLibPath }
>>>>>>> d91383e8
   -- zeromq nethandlers
   defines { "ZMQ_STATIC" }
   links { "libxzmq" }
   filter "configurations:Release"
      links {"mixr_base", "libzmq" }
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_base_d", "libzmq_d" }
      links {LibWindows}

-- testRadar
project "testRadar"
<<<<<<< HEAD
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
>>>>>>> d91383e8
   targetname "testRadar"
   targetdir "../../testRadar"
   debugdir "../../testRadar"
   files {
<<<<<<< HEAD
      "../../testRadar/**"
=======
      "../../testRadar/**.h*",
      "../../testRadar/**.cpp",
      "../../testRadar/**.epp",
      "../../testRadar/**.edl"
>>>>>>> d91383e8
   }
   includedirs { MIXR_IncPath, MIXR_3rdPartyIncPath }
   libdirs     { MIXR_LibPath, MIXR_3rdPartyLibPath }
   filter "configurations:Release"
<<<<<<< HEAD
      links {"mixr_models_jsbsim", "mixr_models", "JSBSim"}
=======
      links {"mixr_models", "JSBSim"}
>>>>>>> d91383e8
      links {"mixr_interop_dis", "mixr_interop", "mixr_linkage"}
      links {"mixr_simulation", "mixr_terrain"}
      links {"mixr_ui_glut", "mixr_instruments", "mixr_graphics", "mixr_base"}
      links {LibFtgl, LibFreetype, LibGlut, LibGLU, LibGL}
      links {LibWindows}
   filter "configurations:Debug"
<<<<<<< HEAD
      links {"mixr_models_jsbsim_d", "mixr_models_d", "JSBSim_d"}
=======
      links {"mixr_models_d", "JSBSim_d"}
>>>>>>> d91383e8
      links {"mixr_interop_dis_d", "mixr_interop_d", "mixr_linkage_d"}
      links {"mixr_simulation_d", "mixr_terrain_d"}
      links {"mixr_ui_glut_d", "mixr_instruments_d", "mixr_graphics_d", "mixr_base_d"}
      links {LibFtgl_d, LibFreetype_d, LibGlut_d, LibGLU, LibGL}
      links {LibWindows}

-- testRecordData
project "testRecordData"
<<<<<<< HEAD
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
>>>>>>> d91383e8
   targetname "testRecordData"
   targetdir "../../testRecordData"
   debugdir "../../testRecordData"
   files {
<<<<<<< HEAD
      "../../testRecordData/**"
=======
      "../../testRecordData/**.h*",
      "../../testRecordData/**.cpp",
      "../../testRecordData/**.epp",
      "../../testRecordData/**.edl"
>>>>>>> d91383e8
   }
   includedirs { MIXR_IncPath, MIXR_3rdPartyIncPath, MIXR_ExamplesIncPath }
   libdirs     { MIXR_LibPath, MIXR_3rdPartyLibPath, MIXR_ExamplesLibPath }
   links       { "libxrecorder", "libxpanel" }
   filter "configurations:Release"
<<<<<<< HEAD
      links {"mixr_models_jsbsim", "mixr_models", "JSBSim" }
      links {"mixr_ighost_cigi", LibCigi, "mixr_ighost_flightgear" }
=======
      links {"mixr_models", "JSBSim" }
      links {"mixr_ighost_cigi", "mixr_ighost_pov", LibCigi }
>>>>>>> d91383e8
      links {"mixr_interop_dis", "mixr_interop", "mixr_recorder", "mixr_linkage" }
      links {"mixr_simulation", "mixr_terrain" }
      links {"mixr_ui_glut", "mixr_instruments", "mixr_graphics", "mixr_base" }
      links {LibFtgl, LibFreetype, LibGlut, LibGLU, LibGL}
      links {"libprotobuf" }
      links {LibWindows}
   filter "configurations:Debug"
<<<<<<< HEAD
      links {"mixr_models_jsbsim_d", "mixr_models_d", "JSBSim_d" }
      links {"mixr_ighost_cigi_d", LibCigi_d, "mixr_ighost_flightgear_d" }
=======
      links {"mixr_models_d", "JSBSim_d" }
      links {"mixr_ighost_cigi_d", "mixr_ighost_pov_d", LibCigi_d }
>>>>>>> d91383e8
      links {"mixr_interop_dis_d", "mixr_interop_d", "mixr_recorder_d", "mixr_linkage_d" }
      links {"mixr_simulation_d", "mixr_terrain_d" }
      links {"mixr_ui_glut_d", "mixr_instruments_d", "mixr_graphics_d", "mixr_base_d" }
      links {LibFtgl_d, LibFreetype_d, LibGlut_d, LibGLU, LibGL}
      links {"libprotobuf_d" }
      links {LibWindows}

-- testRecorderRead
project "testRecorderRead"
<<<<<<< HEAD
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
>>>>>>> d91383e8
   targetname "testRecorderRead"
   targetdir "../../testRecorderRead"
   debugdir "../../testRecorderRead"
   files {
<<<<<<< HEAD
      "../../testRecorderRead/**"
=======
      "../../testRecorderRead/**.h*",
      "../../testRecorderRead/**.cpp",
      "../../testRecorderRead/**.epp",
      "../../testRecorderRead/**.edl"
>>>>>>> d91383e8
   }
   includedirs { MIXR_IncPath, MIXR_3rdPartyIncPath, MIXR_ExamplesIncPath }
   libdirs     { MIXR_LibPath, MIXR_3rdPartyLibPath, MIXR_ExamplesLibPath }
   links       { "libxrecorder" }
   filter "configurations:Release"
<<<<<<< HEAD
      links {"mixr_models_jsbsim", "mixr_models", "JSBSim" }
      links {"mixr_recorder", "mixr_simulation", "mixr_base", "libprotobuf"}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_models_jsbsim_d", "mixr_models_d", "JSBSim_d" }
=======
      links {"mixr_models", "JSBSim" }
      links {"mixr_recorder", "mixr_simulation", "mixr_base", "libprotobuf"}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_models_d", "JSBSim_d" }
>>>>>>> d91383e8
      links {"mixr_recorder_d", "mixr_simulation_d", "mixr_base_d", "libprotobuf_d" }
      links {LibWindows}

-- testRecorderWrite
project "testRecorderWrite"
<<<<<<< HEAD
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
>>>>>>> d91383e8
   targetname "testRecorderWrite"
   targetdir "../../testRecorderWrite"
   debugdir "../../testRecorderWrite"
   files {
<<<<<<< HEAD
      "../../testRecorderWrite/**"
=======
      "../../testRecorderWrite/**.h*",
      "../../testRecorderWrite/**.cpp",
      "../../testRecorderWrite/**.epp",
      "../../testRecorderWrite/**.edl"
>>>>>>> d91383e8
   }
   includedirs { MIXR_IncPath, MIXR_3rdPartyIncPath, MIXR_ExamplesIncPath }
   libdirs     { MIXR_LibPath, MIXR_3rdPartyLibPath, MIXR_ExamplesLibPath }
   links       { "libxrecorder" }
   filter "configurations:Release"
<<<<<<< HEAD
      links {"mixr_models_jsbsim", "mixr_models", "JSBSim" }
      links {"mixr_recorder", "mixr_simulation", "mixr_base", "libprotobuf"}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_models_jsbsim_d", "mixr_models_d", "JSBSim_d" }
=======
      links {"mixr_models", "JSBSim" }
      links {"mixr_recorder", "mixr_simulation", "mixr_base", "libprotobuf"}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_models_d", "JSBSim_d" }
>>>>>>> d91383e8
      links {"mixr_recorder_d", "mixr_simulation_d", "mixr_base_d", "libprotobuf_d" }
      links {LibWindows}

-- testSlots
project "testSlots"
<<<<<<< HEAD
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
>>>>>>> d91383e8
   targetname "testSlots"
   targetdir "../../testSlots"
   debugdir "../../testSlots"
   files {
<<<<<<< HEAD
      "../../testSlots/**"
=======
      "../../testSlots/**.h*",
      "../../testSlots/**.cpp",
      "../../testSlots/**.epp",
      "../../testSlots/**.edl"
>>>>>>> d91383e8
   }
   includedirs { MIXR_IncPath }
   libdirs     { MIXR_LibPath }
   filter "configurations:Release"
      links {"mixr_base"}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_base_d"}
      links {LibWindows}

-- testStateMach
project "testStateMach"
<<<<<<< HEAD
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
>>>>>>> d91383e8
   targetname "testStateMach"
   targetdir "../../testStateMach"
   debugdir "../../testStateMach"
   files {
<<<<<<< HEAD
      "../../testStateMach/**"
=======
      "../../testStateMach/**.h*",
      "../../testStateMach/**.cpp",
      "../../testStateMach/**.epp",
      "../../testStateMach/**.edl"
>>>>>>> d91383e8
   }
   includedirs { MIXR_IncPath }
   libdirs     { MIXR_LibPath }
   filter "configurations:Release"
      links {"mixr_base"}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_base_d"}
      links {LibWindows}

-- testTables
project "testTables"
<<<<<<< HEAD
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
>>>>>>> d91383e8
   targetname "testTables"
   targetdir "../../testTables"
   debugdir "../../testTables"
   files {
<<<<<<< HEAD
      "../../testTables/**"
=======
      "../../testTables/**.h*",
      "../../testTables/**.cpp",
      "../../testTables/**.epp",
      "../../testTables/**.edl"
>>>>>>> d91383e8
   }
   includedirs { MIXR_IncPath }
   libdirs     { MIXR_LibPath }
   filter "configurations:Release"
      links {"mixr_base"}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_base_d"}
      links {LibWindows}

-- testTemplates
project "testTemplates"
<<<<<<< HEAD
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
>>>>>>> d91383e8
   targetname "testTemplates"
   targetdir "../../testTemplates"
   debugdir "../../testTemplates"
   files {
<<<<<<< HEAD
      "../../testTemplates/**"
=======
      "../../testTemplates/**.h*",
      "../../testTemplates/**.cpp",
      "../../testTemplates/**.epp",
      "../../testTemplates/**.edl"
>>>>>>> d91383e8
   }
   includedirs { MIXR_IncPath }
   libdirs     { MIXR_LibPath }
   filter "configurations:Release"
      links {"mixr_base"}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_base_d"}
      links {LibWindows}

-- testTimer
project "testTimer"
<<<<<<< HEAD
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
>>>>>>> d91383e8
   targetname "testTimer"
   targetdir "../../testTimer"
   debugdir "../../testTimer"
   files {
<<<<<<< HEAD
      "../../testTimer/**"
=======
      "../../testTimer/*.h*",
      "../../testTimer/*.cpp",
      "../../testTimer/*.edl"
>>>>>>> d91383e8
   }
   includedirs { MIXR_IncPath }
   libdirs     { MIXR_LibPath }
   filter "configurations:Release"
      links {"mixr_base"}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_base_d"}
      links {LibWindows}

<<<<<<< HEAD
-- test: general test of several base and graphics functionalities
project "test"
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
   targetname "test"
   targetdir "../../test"
   debugdir "../../test"
   files {
      "../../test/**"
   }
   includedirs { MIXR_IncPath, MIXR_3rdPartyIncPath }
   libdirs     { MIXR_LibPath, MIXR_3rdPartyLibPath }
   filter "configurations:Release"
      links {"mixr_base", "mixr_graphics"}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_base_d", "mixr_graphics_d"}
      links {LibWindows}

-- testVmap - test VMAP0 loader library
project "testVmap"
   location ("../" .. _ACTION .. "/examples/%{prj.name}")
=======
-- testVmap - test VMAP0 loader library
project "testVmap"
>>>>>>> d91383e8
   targetname "testVmap"
   targetdir "../../testVmap"
   debugdir "../../testVmap"
   files {
<<<<<<< HEAD
      "../../testVmap/**"
=======
      "../../testVmap/*.h*",
      "../../testVmap/*.cpp",
      "../../testVmap/*.edl"
>>>>>>> d91383e8
   }
   includedirs { MIXR_IncPath, MIXR_3rdPartyIncPath }
   libdirs     { MIXR_LibPath, MIXR_3rdPartyLibPath }
   filter "configurations:Release"
      links {"mixr_map_vpf", "mixr_instruments", "mixr_ui_glut", "mixr_graphics", "mixr_base"}
      links {LibFtgl, LibFreetype, LibGlut, LibGLU, LibGL}
      links {LibWindows}
   filter "configurations:Debug"
      links {"mixr_map_vpf_d", "mixr_instruments_d", "mixr_ui_glut_d", "mixr_graphics_d", "mixr_base_d"}
      links {LibFtgl_d, LibFreetype_d, LibGlut_d, LibGLU, LibGL}
      links {LibWindows}
