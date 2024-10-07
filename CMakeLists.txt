cmake_minimum_required(VERSION 3.30)
project(FirecourtCubes)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/src/core)

# Qt5 settings
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
find_package(Qt5 COMPONENTS Widgets REQUIRED)

# Add source files
set(SOURCES
    src/main.cpp
    src/mainwindow.cpp
    src/project.cpp
    src/settingsdialog.cpp
    src/core/graphics_init.cpp
)

# Add header files
set(HEADERS
    include/mainwindow.h
    include/settingsdialog.h
    include/project.h
    include/graphics_init.h
)

# Add UI files
set(UIS
    include/mainwindow.ui
    include/settingsdialog.ui
)

# Add translations (if needed)
set(TRANSLATIONS
    FirecourtCubes_en_US.ts
)

# Create the executable
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} ${UIS})

# Link Qt5 libraries
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)

# Platform-specific libraries
if(APPLE)
    find_library(COREAUDIO_LIBRARY CoreAudio)
    target_link_libraries(${PROJECT_NAME} ${COREAUDIO_LIBRARY})
elseif(UNIX)

endif()

# Additional settings for Python AI module integration
add_subdirectory(ai_module)

# Additional target for the Renet sub-project
add_subdirectory(Renet)

# CMake build settings
set_property(TARGET ${PROJECT_NAME} PROPERTY RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
