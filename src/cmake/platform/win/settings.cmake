add_definitions(-D_WIN32_WINNT=0x0601)
add_definitions(-DWIN32_LEAN_AND_MEAN)
add_definitions(-DNOMINMAX)

# Package overloads
set(ACE_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/deps/acelite)
set(ACE_LIBRARY "ace")

if (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
  include(${CMAKE_SOURCE_DIR}/src/cmake/compiler/msvc/settings.cmake)
elseif (CMAKE_CXX_PLATFORM_ID MATCHES "MinGW")
  include(${CMAKE_SOURCE_DIR}/src/cmake/compiler/mingw/settings.cmake)
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
  include(${CMAKE_SOURCE_DIR}/src/cmake/compiler/clang/settings.cmake)
endif()
