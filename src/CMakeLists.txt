# FOLF files
set(FOLF-source
   ${CMAKE_CURRENT_SOURCE_DIR}/benchmarking.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/consoleUtils.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/legacyFunctions.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/prime.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/random.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/timeCalculation.cpp
   PARENT_SCOPE
)
# optional to precompile FOLF
set(FOLF-pch
   ${CMAKE_CURRENT_SOURCE_DIR}/folf.hpp
   PARENT_SCOPE
)
