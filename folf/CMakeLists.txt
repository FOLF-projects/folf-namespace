# create a variable for FOLF's sources
set(folf-source
        conTool.cpp
        numTool.cpp
        timeTool.cpp
        algorithms.cpp)

# prepare information header
configure_file(info.hpp.in info.hpp)

# enable threads library
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

# create a compile target for FOLF
add_library(folf-namespace ${folf-source})
target_link_libraries(folf-namespace PRIVATE Threads::Threads)
target_include_directories(folf-namespace INTERFACE ${PROJECT_SOURCE_DIR} ${PROJECT_BINARY_DIR})
set_target_properties(folf-namespace PROPERTIES
        PUBLIC_HEADER "folf/algorithms.hpp;
                       folf/folf-info.hpp;
                       folf/conTool.hpp;
                       folf/numTool.hpp;
                       folf/timeTool.hpp")
