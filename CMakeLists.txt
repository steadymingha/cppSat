cmake_minimum_required(VERSION 3.0.0)

project(cpp_pySat VERSION 0.1.0 LANGUAGES C CXX)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set(ROOT_DIR "C:/Users/mhlee/Desktop/src")
# set(ROOT_DIR "C:/Users/mingh/Desktop/Study/src")
#set(ROOT_DIR "G:/내 드라이브/src")
#set(ROOT_DIR "G:/My Drive/src") # office windows
set(ROOT_DIR "/root") # Mac docker

set(BOOST_ROOT "${ROOT_DIR}/lib/boost_1_83_0")
set(Boost_LIBRARY_DIR "${ROOT_DIR}/lib/boost_1_83_0/stage/lib")
set(Boost_INCLUDE_DIR ${BOOST_ROOT})
find_package(Boost 1.83.0 COMPONENTS)
include_directories(${Boost_INCLUDE_DIR})


include_directories("${ROOT_DIR}/lib/eigen-3.4.0/")
include_directories("${PROJECT_SOURCE_DIR}/inc")

link_directories(${Boost_LIBRARY_DIR})

#add_definitions( -DBOOST_ALL_NO_LIB )
set( Boost_USE_STATIC_LIBS ON )



enable_testing()


#add_executable(cpp_pySat main.cpp)# Astro/time_converter.cpp)# Setup.cpp Setup.h)
#target_link_libraries(cpp_pySat ${BOOST_LIBRARIES})


include_directories(${PROJECT_SOURCE_DIR}/inc)

file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS
        ${CMAKE_SOURCE_DIR}/src/*.cpp)


# SOURCE_FILES Find
message("Included source files:")
foreach(_source IN ITEMS ${SOURCE_FILES})
    message("${_source}")
endforeach()

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
