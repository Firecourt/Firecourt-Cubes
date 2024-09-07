cmake_minimum_required(VERSION 3.5)

project(FirecourtCubes VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Qt5 package
find_package(Qt5 REQUIRED COMPONENTS Widgets LinguistTools)

# Set TS files
set(TS_FILES FirecourtCubes_en_US.ts)

# Collect all source files
set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    project.cpp
    project.h
    mainwindow.h
    settingsdialog.cpp
    settingsdialog.h
    ${TS_FILES}
)

# Add the executable (Make sure this is only done once)
add_executable(FirecourtCubes
    ${PROJECT_SOURCES}
)

# Automatically handle MOC, UIC, and RCC
set_target_properties(FirecourtCubes PROPERTIES
    AUTOMOC ON
    AUTOUIC ON
    AUTORCC ON
)

# Link libraries
target_link_libraries(FirecourtCubes PRIVATE Qt5::Widgets)

# Install rules
include(GNUInstallDirs)
install(TARGETS FirecourtCubes
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Handle Qt 6 specific finalization (remove if using Qt 5)
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(FirecourtCubes)
endif()
