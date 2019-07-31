cmake_minimum_required(VERSION 3.0.0)
project(SCNetDesktopClient VERSION 0.1.0 LANGUAGES C CXX)

set(THE_TARGET SCNetDesktopClient)
include(CTest)
enable_testing()

add_executable(SCNetDesktopClient src/main.cpp)

set_target_properties(SCNetDesktopClient PROPERTIES COMPILE_FLAGS "`pkg-config gtkmm-3.0 --cflags --libs`")
set_target_properties(SCNetDesktopClient PROPERTIES LINK_FLAGS "`pkg-config gtkmm-3.0 --cflags --libs`")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
