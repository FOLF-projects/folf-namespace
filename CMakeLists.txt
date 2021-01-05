cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

project(folf-namespace
        VERSION 1.0.0
        DESCRIPTION "FOLF - A C++ library developed by a fox and a wolf for testing and making development easier!"
        HOMEPAGE_URL "https://github.com/FOLF-projects/folf-namespace"
        LANGUAGES CXX)

option(FOLF_BUILD_EXAMPLES "Set to ON to build examples" ON)
option(FOLF_ENABLE_INSTALL "Generate the install target" ON)

# use C++20 standard if none was given
if (NOT CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 20)
endif ()
set(CMAKE_CXX_STANDARD_REQUIRED on)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# create a variable for FOLF's sources
set(folf-source
        folf-namespace/consoleOperations.cpp
        folf-namespace/legacy.cpp
        folf-namespace/numberOperations.cpp
        folf-namespace/timeOperations.cpp
        folf-namespace/algorithms.cpp)

# prepare information header
configure_file(folf-namespace/folf-info.hpp.in folf-namespace/folf-info.hpp)

# enable threads library
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

# create a compile target for FOLF
add_library(folf-namespace ${folf-source})
target_link_libraries(folf-namespace PRIVATE Threads::Threads)
target_include_directories(folf-namespace INTERFACE ${PROJECT_SOURCE_DIR} ${PROJECT_BINARY_DIR})
set_target_properties(folf-namespace PROPERTIES
        PUBLIC_HEADER "folf-namespace/folf.hpp;folf-namespace/folf-info.hpp")

# enable warnings and set compile features
foreach(target folf-namespace)
        # Force Microsoft Visual Studio to decode sources files in UTF-8
        if (MSVC)
                target_compile_options(${target} PUBLIC "/utf-8")
        endif()
        # Add as many warning as possible:
        if (WIN32)
                if (MSVC)
                        target_compile_options(${target} PRIVATE "/W4")
                        target_compile_options(${target} PRIVATE "/WX")
                        target_compile_options(${target} PRIVATE "/wd4244")
                        target_compile_options(${target} PRIVATE "/wd4267")
                        target_compile_options(${target} PRIVATE "/D_CRT_SECURE_NO_WARNINGS")
                endif()
                # Force Win32 to UNICODE
                target_compile_definitions(${target} PRIVATE UNICODE _UNICODE)
        else()
                target_compile_options(${target} PRIVATE "-Wall")
                target_compile_options(${target} PRIVATE "-Wextra")
                target_compile_options(${target} PRIVATE "-pedantic")
                target_compile_options(${target} PRIVATE "-Werror")
                target_compile_options(${target} PRIVATE "-Wno-sign-compare")
        endif()
endforeach(target test)

# add the example programs
if (FOLF_BUILD_EXAMPLES)
        add_subdirectory(examples)
endif()

# enable installing of the library and it's parts
if (FOLF_ENABLE_INSTALL)
        install(TARGETS folf-namespace
                RUNTIME DESTINATION bin
                LIBRARY DESTINATION lib
                ARCHIVE DESTINATION lib
                PUBLIC_HEADER DESTINATION include/folf-namespace)
endif()
