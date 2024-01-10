cmake_minimum_required(VERSION 3.0.0)

project(cpp_pySat VERSION 0.1.0 LANGUAGES C CXX)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(ROOT_DIR "C:\\Users\\mhlee\\Desktop\\src")

set(BOOST_ROOT "${ROOT_DIR}\\lib\\boost_1_83_0\\")
set(Boost_LIBRARY_DIR "${ROOT_DIR}\\lib\\boost_1_83_0\\stage\\lib")
set(Boost_INCLUDE_DIR ${BOOST_ROOT})


include(CTest)
find_package(Boost 1.83.0 COMPONENTS)
include_directories("${ROOT_DIR}\\lib\\eigen-3.4.0\\")
include_directories(${Boost_INCLUDE_DIR})

include_directories("${PROJECT_SOURCE_DIR}\\inc"})

link_directories(${Boost_LIBRARY_DIR})

add_definitions( -DBOOST_ALL_NO_LIB )
set( Boost_USE_STATIC_LIBS ON )



enable_testing()


add_executable(cpp_pySat main.cpp Astro/astro_definition.cpp inc/Astro/time_converter.hpp inc/frame_converter.hpp inc/Astro/frame_converter.hpp inc/Astro/planet_ephemeris.hpp)# Setup.cpp Setup.h)
target_link_libraries(cpp_pySat ${BOOST_LIBRARIES})


