cmake_minimum_required(VERSION 3.10)

project(ObserverPattern)

add_subdirectory(src)

set(SOURCES
    main.cpp)

add_executable(${CMAKE_PROJECT_NAME}_impl ${SOURCES})
# link to under libraries defined in src-folder
target_link_libraries(${CMAKE_PROJECT_NAME}_impl corona_observer_pattern_lib)
# visibility to the headers in src-folder
target_include_directories(${CMAKE_PROJECT_NAME}_impl PRIVATE src)
