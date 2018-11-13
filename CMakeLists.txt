cmake_minimum_required(VERSION 2.6)
set (PROJECT_NAME "kxwindows")
project(${PROJECT_NAME})

message(STATUS platform )
message(STATUS ${PLATFORM} )

set( SOURCE_ROOT "source" )

include_directories( "include" )

file( GLOB SOURCES "${SOURCE_ROOT}/*.cpp" )

add_library( 
	${PROJECT_NAME} STATIC 
	${SOURCES}
)

target_link_libraries(
	${PROJECT_NAME}
	kernel32.lib
	gdiplus.lib
)
