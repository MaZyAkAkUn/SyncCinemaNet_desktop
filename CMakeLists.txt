cmake_minimum_required(VERSION 3.0.0)
project(SCNetDesktopClient VERSION 0.1.0 LANGUAGES C CXX)

#set(LIBS_FLAGS -lssl -lgthread-2.0 -pthread -lcrypto -lcurl -lgtk-3 -lgtkmm-3.0 -latkmm-1.6 -lgdkmm-3.0 -lgiomm-2.4 -lpangomm-1.4 -lglibmm-2.4 -lgtk-3 -lcairomm-1.0 -lsigc-2.0 -lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -lglib-2.0)
set(THE_TARGET SCNetDesktopClient)
include(CTest)
enable_testing()
#set(GCC_COVERAGE_LINKS_FLAGS ${LIBS_FLAGS})
add_executable(SCNetDesktopClient src/main.cpp)

#link_directories(/usr/local/lib)

#target_include_directories(SCNetDesktopClient PUBLIC /usr/include /usr/local/include /
#/usr/include/glibmm-2.4 /usr/lib/x86_64-linux-gnu/glibmm-2.4/include /
#/usr/include/glib-2.0 /usr/lib/x86_64-linux-gnu/glib-2.0/include /
#/usr/include/sigc++-2.0 / /usr/lib/x86_64-linux-gnu/sigc++-2.0/include /
#/usr/include/giomm-2.4 /usr/lib/x86_64-linux-gnu/giomm-2.4/include /
#/usr/lib/x86_64-linux-gnu/gdkmm-3.0/include /usr/include/gdkmm-3.0 /
#/usr/include/pangomm-1.4 /usr/lib/x86_64-linux-gnu/pangomm-1.4/include 
#/usr/include/gtk-3.0/gdk /usr/include/gtk-3.0 /usr/include/pango-1.0 /
#/usr/include/cairo /usr/include/gdk-pixbuf-2.0 /usr/include/cairomm-1.0 / 
#/usr/lib/x86_64-linux-gnu/cairomm-1.0/include /usr/include/freetype2 /
#/usr/include/gtkmm-3.0 /usr/lib/x86_64-linux-gnu/gtkmm-3.0/include /
#/usr/include/atkmm-1.6 /usr/include/atk-1.0 /usr/include/at-spi2-atk/2.0
#)


#get_target_property(TEMP ${THE_TARGET} LINK_FLAGS)
#if(TEMP STREQUAL "TEMP-NOTFOUND")
#  SET(TEMP "") # Set to empty string
#else()
#  SET(TEMP "${TEMP} ") # A space to cleanly separate from existing content
#endif()
# Append our values
#SET(TEMP "${TEMP}${LIBS_FLAGS}" )

#set_target_properties(SCNetDesktopClient PROPERTIES LINK_FLAGS "-lssl  -g -std=c++11 -lgthread-2.0 -pthread -lcrypto -lcurl -lgtk-3 -lgtkmm-3.0 -latkmm-1.6 -lgdkmm-3.0 -lgiomm-2.4 -lpangomm-1.4 -lglibmm-2.4 -lgtk-3 -lcairomm-1.0 -lsigc-2.0 -lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -lglib-2.0")
set_target_properties(SCNetDesktopClient PROPERTIES COMPILE_FLAGS "`pkg-config gtkmm-3.0 --cflags --libs`")
set_target_properties(SCNetDesktopClient PROPERTIES LINK_FLAGS "`pkg-config gtkmm-3.0 --cflags --libs`")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
