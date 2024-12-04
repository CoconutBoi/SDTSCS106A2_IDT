# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SDTS_IDTCS106A2FINAL_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SDTS_IDTCS106A2FINAL_autogen.dir\\ParseCache.txt"
  "SDTS_IDTCS106A2FINAL_autogen"
  )
endif()
