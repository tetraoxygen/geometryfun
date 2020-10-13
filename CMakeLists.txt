cmake_minimum_required(VERSION 3.16)

project(GeometryFun)

add_executable(GeometryFun main.cpp)

install(TARGETS GeometryFun)

enable_testing()
add_test(NAME GeometryFun COMMAND GeometryFun)


IF (WIN32 AND CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	target_link_libraries(GeometryFun -static)
ENDIF()