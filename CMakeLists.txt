cmake_minimum_required(VERSION 3.10)
project(DatabaseCloneValidator)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

message("QT CMAKE DIR....")
message("$ENV{QT_DIR}")

set(CMAKE_PREFIX_PATH $ENV{QT_DIR})
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Widgets Sql REQUIRED)

file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp ${PROJECT_SOURCE_DIR}/src/*.h ${PROJECT_SOURCE_DIR}/src/*.qrc)

add_executable(DatabaseCloneValidator MACOSX_BUNDLE ${SRC_FILES})

target_link_libraries(DatabaseCloneValidator Qt5::Core Qt5::Widgets Qt5::Sql)