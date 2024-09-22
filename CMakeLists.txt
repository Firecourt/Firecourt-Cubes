cmake_minimum_required(VERSION 3.5)

# Set the policy to avoid deprecated Python modules warning
cmake_policy(SET CMP0148 NEW)

project(FirecourtCubes VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Python and pybind11 packages
find_package(Python REQUIRED COMPONENTS Interpreter Development)
set(PYBIND11_FINDPYTHON ON)
find_package(pybind11 REQUIRED)

# Find Qt5 package
find_package(Qt5 REQUIRED COMPONENTS Widgets LinguistTools)

# Set TS files
set(TS_FILES FirecourtCubes_en_US.ts)

# Collect all source files
set(PROJECT_SOURCES
    src/main.cpp
    src/mainwindow.cpp
    src/project.cpp
    include/project.h
    include/mainwindow.h
    src/settingsdialog.cpp
    include/settingsdialog.h
    ${TS_FILES}
)

set(UI_FILES
    mainwindow.ui
    settingsdialog.ui
)

# Use qt5_wrap_ui to generate the header files from UI files
qt5_wrap_ui(UI_HEADERS ${UI_FILES})

# Add the executable with both sources and generated UI headers
add_executable(FirecourtCubes ${PROJECT_SOURCES} ${UI_HEADERS})

# Automatically handle MOC, UIC, and RCC
set_target_properties(FirecourtCubes PROPERTIES
    AUTOMOC ON
    AUTOUIC ON
    AUTORCC ON
)

# Link libraries
target_link_libraries(FirecourtCubes PRIVATE Qt5::Widgets pybind11::module)

# Install rules
include(GNUInstallDirs)
install(TARGETS FirecourtCubes
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Platform-specific configurations
if(APPLE)
    # macOS specific settings
    find_library(CORE_AUDIO_LIB CoreAudio)
    target_link_libraries(FirecourtCubes PRIVATE ${CORE_AUDIO_LIB})
elseif(UNIX)
    # Linux specific settings
    find_library(JACK_LIB jack)
    target_link_libraries(FirecourtCubes PRIVATE ${JACK_LIB})
endif()

# Vulkan support
find_package(Vulkan REQUIRED)
if(Vulkan_FOUND)
    target_link_libraries(FirecourtCubes PRIVATE Vulkan::Vulkan)
else()
    message(FATAL_ERROR "Vulkan not found")
endif()

# Handle Qt 6 specific finalization
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(FirecourtCubes)
endif()
