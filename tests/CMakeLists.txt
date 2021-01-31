# include cmake modules
include(FetchContent)

# disable google-test targets
set(INSTALL_GTEST OFF CACHE BOOL "disable gtest install" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "disable gmock" FORCE)

# download google test
FetchContent_Declare(googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG master
)
FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
        FetchContent_Populate(googletest)
        add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()

# enable unit testing
enable_testing()

# get google test
include(GoogleTest)

set(testing-source algorithmsTest.cpp calcToolsTest.cpp timeToolsTest.cpp)

add_executable(testing-target ${testing-source})
target_link_libraries(testing-target PRIVATE gtest gtest_main folf-namespace)
