cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project( uart)

#set(CMAKE_CXX_STANDARD 11) 
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall" )

set(COMMON_LIBS rt dl pthread)
message(STATUS "COMMON_LIBS=${COMMON_LIBS}")

#--------------------------------------------------------------------------------------

add_executable( uart
  uart.c
)
#target_include_directories( uart
#  PUBLIC ${SPINNAKER_INCLUDE_DIR}
#)
#target_link_libraries( uart
#  PRIVATE ${OpenCV_LIBS}
#  ${SPINNAKER_LIBS}
#)

