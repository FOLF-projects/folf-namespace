# FOLF - a C++ library written by a fox and a wolf
FOLF is a namespace used by some perople to develop and test new algorithms. It features many benchmarking features and some small algorithms to make our life easier. Everything works on Windows and Linux. Other OSs might work as well, but we can't guarantee this or offer support for those OSs. 

# Why?
Because two friends want to do some C++ together.

# Use with CMake (recommended!)
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
Then you can just include it inside your code
```c++
// your.cpp
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

# Use without CMake (not recommended!)
Copy the contents of /folf-namespace/ into your projects or create a git sub module. Just don't forget to make sure to not run out of date to ensure of using always the latest version! After copying you just need to include all files into your source or compile it with your prefered build system, like Visual Studio Solutions (even though cmake can generate visual studio solutions for you). Now you should be ready to use FOLF!

NOTE: Using folf without CMake is not recommended and we don't accept pull-requests for adding other build systems. Thank you!

# Am I allowed to use it?
According to its license (MIT), everyone can use it under the terms of the license.

# License
FOLF is licensed under [MIT](https://github.com/FOLF-projects/folf-namespace/blob/master/LICENSE).