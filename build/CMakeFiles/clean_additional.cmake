# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/FirecourtCubes_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/FirecourtCubes_autogen.dir/ParseCache.txt"
  "FirecourtCubes_autogen"
  )
endif()
