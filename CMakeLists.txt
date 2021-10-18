cmake_minimum_required(VERSION 3.20)
project(opencv_test)

set(CMAKE_CXX_STANDARD 20)

add_executable(opencv_test main.cpp)
# 设置OpenCV目录所在

set(OpenCV_DIR "E:\\Mingw-build")
# 搜索OpenCV目录
find_package(OpenCV REQUIRED)

# Set the include path
include_directories(
        ${OpenCV_INCLUDE_DIRS}
)
target_link_libraries (
        "${PROJECT_NAME}"
        ${OpenCV_LIBS}
)