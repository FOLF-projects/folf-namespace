# prime sum benchmark
add_executable(prime-sum-benchmark prime-sum-benchmark.cpp)
target_link_libraries(prime-sum-benchmark folf-namespace)

# console test
add_executable(console-utils-test console-utils-test.cpp)
target_link_libraries(console-utils-test folf-namespace)

# time operations
add_executable(time-operations time-operations.cpp)
target_link_libraries(time-operations folf-namespace)

# create a list of all targets
set(target-list prime-sum-benchmark console-utils-test time-operations)

# enable warnings and set compile features
foreach(target ${target-list})
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
endforeach(target ${target-list})
