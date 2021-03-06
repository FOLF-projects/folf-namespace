# FOLF-namespace - a C++ library written by a fox and a wolf

[![Release](https://img.shields.io/github/release/FOLF-Projects/folf-namespace.svg)](https://github.com/FOLF-projects/folf-namespace/releases/latest)
[![License](https://img.shields.io/github/license/FOLF-projects/folf-namespace.svg)](https://github.com/FOLF-projects/folf-namespace/blob/main/LICENSE)
![Maintained: No](https://img.shields.io/badge/Maintained%3F-no-red.svg)

[![linux-integration-testing](https://github.com/FOLF-projects/folf-namespace/workflows/linux-integration-testing/badge.svg)](https://github.com/FOLF-projects/folf-namespace/actions?query=workflow%3Alinux-integration-testing)
[![windows-integration-testing](https://github.com/FOLF-projects/folf-namespace/workflows/windows-integration-testing/badge.svg)](https://github.com/FOLF-projects/folf-namespace/actions?query=workflow%3Awindows-integration-testing)
[![macos-integration-testing](https://github.com/FOLF-projects/folf-namespace/workflows/macos-integration-testing/badge.svg)](https://github.com/FOLF-projects/folf-namespace/actions?query=workflow%3Amacos-integration-testing)
[![CodeQL](https://github.com/FOLF-projects/folf-namespace/workflows/CodeQL/badge.svg)](https://github.com/FOLF-projects/folf-namespace/actions?query=workflow%3ACodeQL)

![Language: C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)

[![Discord](https://img.shields.io/badge/Discord-7289DA?style=for-the-badge&logo=discord&logoColor=white)](https://discord.gg/beKQ7j9gRp)

# NOTE: Currently unmaintained
Folf-namespace is currently unmaintained and might stay like this for a longer time. The most important parts are forked into [foxspace](https://github.com/MCWertGaming/foxspace) and will be improved and maintained over there. This project will stay in an archived state until the development continues.

## Overview
1. [What is FOLF-namespace?](#1-what-is-folf-namespace)
2. [What systems are supported?](#2-what-systems-are-supported)
3. [How do I use FOLF-namespace?](#3-how-do-i-use-folf-namespace)
4. [Whose project is FOLF?](#4-whose-project-is-folf)
5. [Contact](#5-contact)
6. [Am I allowed to use it?](#6-am-i-allowed-to-use-it)
7. [Copyright and license](#7-copyright-and-license)

***

## 1. What is FOLF-namespace?
FOLF-namespace is part of FOLF. It is a library for C++ and includes algorithms for benchmarks, math and a lot more. Just check out the wiki pages! :)

## 2. What systems are supported?
This library supports the following systems:
- Linux (gcc, clang, full testing)
- MacOS (gcc, clang, full testing)
- Windows (MSVC only, only limited testing)
  - NOTE: Visual studio clang might not work at all

Only 64 bit compilation is tested and supported. Also the default C++ standard version is C++20. Using a lower standard is possible, but not tested nor supported.

## 3. How do I use FOLF-namespace?
We highly recommend using CMake. The most recent version of FOLF-namespace will be downloaded and added automatically.

### Using CMake:
```cmake
# disable not required FOLF targets
set(FOLF_BUILD_EXAMPLES OFF CACHE BOOL "don't build examples" FORCE)
set(FOLF_ENABLE_INSTALL OFF CACHE BOOL "disable install" FORCE)
set(FOLF_ENABLE_TESTING OFF CACHE BOOL "disable testing of folf" FORCE)
# enable cmake function
include(FetchContent)
set(FETCHCONTENT_UPDATES_DISCONNECTED TRUE)
# download folf-namespace library
FetchContent_Declare(folf_namespace
  GIT_REPOSITORY https://github.com/FOLF-projects/folf-namespace.git
  GIT_TAG main
)
FetchContent_GetProperties(folf_namespace)
if(NOT folf_namespace_POPULATED)
  FetchContent_Populate(folf_namespace)
  add_subdirectory(${folf_namespace_SOURCE_DIR} ${folf_namespace_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()
```
After that you just need to link the library to your target
```cmake
add_executable(TARGET path/to/source)
target_link_libraries(TARGET PRIVATE folf-namespace)
```
Add this to your code file's header:
```c++
// all headers of FOLF
#include <folf/info.hpp>
#include <folf/algorithms.hpp>
#include <folf/conTools.hpp>
#include <folf/calcTools.hpp>
#include <folf/timeTools.hpp>
```

If you want to check if everything works as expected:
```c++
#include <iostream>
// includes folf's features
#include <folf/algorithms.hpp>
#include <folf/conTools.hpp>
#include <folf/calcTools.hpp>
#include <folf/timeTools.hpp>
// includes folf's version and repo info
#include <folf/info.hpp>

int main()
{
    std::cout "Hello world!\n";
    std::cout "with FOLF version: " << FOLF_NAMESPACE_VERSION << "\n";
    
    return 0;
}
```

### Without CMake:
Copy the contents of /folf-namespace/ into your projects or create a git sub module. Just don't forget to make sure to not run an old version! After copying, you just need to include all files into your source or compile it with your preferred build system, like Visual Studio Solutions (even though CMake can generate Visual Studio Solutions for you). Now you should be ready to use FOLF-namespace!


## 4. Whose project is FOLF?
The founders of FOLF are Damon Leven and AdmiralEmser. We are two beginning developers. Our primary aim is to code - or how Damon would say: "[...] two friends want to do some C++ together."

## 5. Contact
You can contact us via [Discord](https://discord.gg/beKQ7j9gRp).


## 6. Am I allowed to use it?
Short version: Yes. But mind the license (see below)!


## 7. Copyright and license
© by FOLF-projects founded by Damon Leven and AdmiralEmser.
This project is licensed as MIT. For further information, check out the [license file](https://github.com/FOLF-projects/folf-namespace/blob/main/LICENSE) in this repository.
