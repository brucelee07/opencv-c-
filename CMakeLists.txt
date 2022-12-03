cmake_minimum_required(VERSION 3.8.2)

project(test)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# add opencv path
set(CMAKE_PREFIX_PATH "/home/bruce/miniconda3/envs/qt/lib/cmake/opencv4;/home/bruce/miniconda3/envs/qt/lib/cmake/Qt5")

#
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

if(WIN32)
  set(CMAKE_WIN32_EXECUTABLE ON)
endif()
find_package(Qt5 COMPONENTS Widgets)
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})


SET(SRCS
    main.cpp
)

SET(LIBS
    Qt5::Widgets
    Qt5::Gui
    Qt5::Core
)
add_executable(test ${SRCS})

target_link_libraries(test ${LIBS} ${OpenCV_LIBS})
