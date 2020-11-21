# FOLF files
set(FOLF-source
        ${CMAKE_CURRENT_SOURCE_DIR}/aboutFolf.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/consoleOperations.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/legacy.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/numberOperations.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/timeOperations.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/algorithms.cpp
        PARENT_SCOPE
        )
# optional: precompile FOLF
set(FOLF-pch
        ${CMAKE_CURRENT_SOURCE_DIR}/folf.hpp
        PARENT_SCOPE
        )
