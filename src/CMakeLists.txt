cmake_minimum_required(VERSION 3.5)
project(coldstart CXX)
set(CMAKE_CXX_STANDARD 17)

find_package(Drogon CONFIG REQUIRED)
add_executable(coldstart main.cpp)
target_link_libraries(coldstart PRIVATE Drogon::Drogon)