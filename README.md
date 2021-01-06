# FOLF-namespace - a C++ library written by a fox and a wolf

![integration-tests](https://github.com/FOLF-projects/folf-namespace/workflows/integration-tests/badge.svg)

## Overview
1. [What is FOLF-namespace?](#1-what-is-folf-namespace)
2. [What systems are supported?](#2-what-systems-are-supported)
3. [How do I use FOLF-namespace?](#2-how-do-i-use-folf-namespace)
4. [Whose project is FOLF?](#3-whose-project-is-folf)
5. [Contact](#4-contact)
6. [Am I allowed to use it?](#5-am-i-allowed-to-use-it)
7. [Copyright and license](#6-copyright-and-license)

***

## 1. What is FOLF-namespace?
FOLF-namespace is part of FOLF. It is a library for C++ and includes algorithms for benchmarks, math and a lot more. Just check out the wiki pages! :)

## 2. What systems are supported?
This library supports the following systems:
- Linux (gcc, clang, full testing)
- MacOS (gcc, clang, full testing)
- Windows (MSVC only, only limited testing)
Only 64 bit compilation is tested and supported. Also the default C++ standard version is C++20. Using a lower standard is possible, but not tested nor supported.

## 3. How do I use FOLF-namespace?
We highly recommend using CMake. The most recent version of FOLF-namespace will be downloaded and added automatically.

### Using CMake:
```cmake
# disable not required things
set(FOLF_BUILD_EXAMPLES false)
set(FOLF_ENABLE_INSTALL false)
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
// includes folf's features
#include <folf-namespace/folf.hpp>
```

If you want to check if everything works as expected:
```c++
#include <iostream>
// includes folf's features
#include <folf-namespace/folf.hpp>
// includes folf's version and repo info
#include <folf-namespace/folf-info.hpp>

int main()
{
    std::cout "Hello world!\n";
    std::cout "with FOLF version: " << FOLF_NAMESPACE_VERSION << "\n";
    
    return 0;
}
```

### Without CMake:
Copy the contents of /folf-namespace/ into your projects or create a git sub module. Just don't forget to make sure to not run an old version! After copying, you just need to include all files into your source or compile it with your prefered build system, like Visual Studio Solutions (even though CMake can generate Visual Studio Solutions for you). Now you should be ready to use FOLF-namespace!


## 4. Whose project is FOLF?
The founders of FOLF are Damon Leven and AdmiralEmser. We are two beginning developers. Our primary aim is to code - or how Damon would say: "[...] two friends want to do some C++ together."


## 5. Contact
You can contact us via [Discord](https://discord.gg/beKQ7j9gRp).


## 6. Am I allowed to use it?
Short version: Yes. But mind the license (see below)!


## 7. Copyright and license
© by FOLF-projects founded by Damon Leven and AdmiralEmser.
This project is licensed as MIT. For further information, check out the [license file](https://github.com/FOLF-projects/folf-namespace/blob/main/LICENSE) in this repository.
