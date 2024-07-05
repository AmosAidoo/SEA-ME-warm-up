cmake_minimum_required(VERSION 3.5)

project(Exercise03 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Exercise03 main.cpp
    Phonebook.h Phonebook.cpp
    Contact.h Contact.cpp)

include(GNUInstallDirs)
install(TARGETS Exercise03
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
