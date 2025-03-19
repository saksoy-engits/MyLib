cmake_minimum_required(VERSION 3.15)
project(MyLib CXX)

# If the special flag is enabled, add a compile definition.
if(DEFINED MYLIB_SPECIAL_FLAG AND MYLIB_SPECIAL_FLAG)
  add_compile_definitions(SPECIAL_FLAG_ENABLED)
endif()

# Create a static library target for MyLib
add_library(MyLib STATIC src/MyLib.cpp)

# Include the MyLib public headers
target_include_directories(MyLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Require C++17 (adjust as necessary)
target_compile_features(MyLib PRIVATE cxx_std_17)
