cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

project(folf-namespace)

# use C++20 standard if none was given
if (NOT CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 20
            CACHE STRING "C++ standard" FORCE)
endif ()
set(CMAKE_CXX_STANDARD_REQUIRED on)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# create a variable for FOLF's sources
set(folf-source
        folf-namespace/consoleOperations.cpp
        folf-namespace/legacy.cpp
        folf-namespace/numberOperations.cpp
        folf-namespace/timeOperations.cpp
        folf-namespace/aboutFolf.cpp
        folf-namespace/algorithms.cpp)

find_package(OpenMP REQUIRED)

# create a compile target for FOLF
add_library(folf-namespace ${folf-source})
target_link_libraries(folf-namespace PRIVATE OpenMP::OpenMP_CXX)
target_include_directories(folf-namespace INTERFACE ${PROJECT_SOURCE_DIR})
set_target_properties(folf-namespace PROPERTIES
        PUBLIC_HEADER "folf-namespace/folf.hpp")

# add the example programs
add_subdirectory(examples)

# enable installing of the library and it's parts
install(TARGETS folf-namespace
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        PUBLIC_HEADER DESTINATION include/cpp-terminal)
