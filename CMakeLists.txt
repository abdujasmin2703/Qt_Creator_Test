cmake_minimum_required(VERSION 3.16)

project(Qt_Creator_Test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Qt_Creator_Test main.cpp
    berechnungen.h berechnungen.cpp)

include(GNUInstallDirs)
install(TARGETS Qt_Creator_Test
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
