cmake_minimum_required(VERSION 3.30)
project(FirecourtCubes)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/src/core)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Enable Automoc and Autorcc
set(CMAKE_AUTOMOC ON)  # Automatically run MOC
set(CMAKE_AUTORCC ON)

# Find required Qt5 components
find_package(Qt5 COMPONENTS Widgets REQUIRED)

# Add source files
set(SOURCES
    src/main.cpp
    src/mainwindow.cpp
    src/project.cpp
    src/settingsdialog.cpp
    src/core/graphics_init.cpp
    src/effectsdialog.cpp
    src/eqdialog.cpp
    src/findreplacedialog.cpp
    src/instrumentsdialog.cpp
    src/templatesdialog.cpp
    src/terminaldialog.cpp
    src/track.cpp
    src/tutordialog.cpp
    src/group.cpp
    src/trackviewmode.cpp
    src/appearancesettingsdialog.cpp
    src/applicationmode.cpp
    src/customdialog.cpp
    src/layout.cpp
)

# Add header files
set(HEADERS
    include/effectsdialog.h
    include/eqdialog.h
    include/findreplacedialog.h
    include/graphics_init.h
    include/instrumentsdialog.h
    include/mainwindow.h
    include/project.h
    include/settingsdialog.h
    include/templatesdialog.h
    include/terminaldialog.h
    include/track.h
    include/tutordialog.h
    include/group.h
    include/trackviewmode.h
    include/appearancesettingsdialog.h
    include/applicationmode.h
    include/customdialog.h
    include/layout.h
)

# Add UI files if applicable
# set(UIS ...) # Uncomment and fill this if you have UI files
# qt5_wrap_ui(UIS_GENERATED_HEADERS ${UIS}) # Uncomment if you have UI files

# Create the executable
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS}) # Removed UIS as it was not defined

# Link Qt5 libraries
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)

# Platform-specific libraries
if(APPLE)
    find_library(COREAUDIO_LIBRARY CoreAudio)
    target_link_libraries(${PROJECT_NAME} ${COREAUDIO_LIBRARY})
elseif(UNIX)
    # Add any necessary UNIX libraries if needed
endif()

# Additional settings for Python AI module integration
add_subdirectory(ai_module)

# Additional target for the Renet sub-project
add_subdirectory(Renet)

# CMake build settings
set_property(TARGET ${PROJECT_NAME} PROPERTY RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

# Optional: Add translations if needed
set(TRANSLATIONS
    FirecourtCubes_en_US.ts
)

# Install target
install(TARGETS ${PROJECT_NAME} DESTINATION bin)
