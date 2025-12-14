cmake_minimum_required(VERSION 3.5)

project(h6a LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Lisätty jotta signal/slot toimii
set(CMAKE_AUTOMOC ON)

# Lisätty Qt6 Core -kirjasto QObject, signal/slot ja qDebug toimintoihin
find_package(Qt6 REQUIRED COMPONENTS Core)

add_executable(h6a main.cpp
    myclass.h myclass.cpp) #tämä on siis valmiina

# Linkittää Qt6 Core -kirjaston suoritettavaan tiedostoon
target_link_libraries(h6a
    Qt6::Core
)

include(GNUInstallDirs)
install(TARGETS h6a
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
