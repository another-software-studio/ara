cmake_minimum_required(VERSION 3.28)
file(READ "VERSION" ver)

project(Ara VERSION ${ver})
set(APP_NAME "webservice")

add_library (${PROJECT_NAME} STATIC src/Core.cpp)

add_executable(${APP_NAME} src/Main.cpp)

target_link_libraries(${APP_NAME} ${PROJECT_NAME})
