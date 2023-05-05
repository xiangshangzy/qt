cmake_minimum_required(VERSION 3.14)

project(test VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_PREFIX_PATH E:/IDE/QT/6.2.4/mingw_64)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Quick)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Quick)
find_program(DEPLOYQT_EXECUTABLE NAMES windeployqt macdeployqt HINTS "${_qt_bin_dir}")
set(PROJECT_SOURCES main.cpp integrate.cpp qml.qrc)
qt_add_executable(test MANUAL_FINALIZATION ${PROJECT_SOURCES})
target_link_libraries(test PRIVATE Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Quick)
