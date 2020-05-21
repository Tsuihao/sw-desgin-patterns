cmake_minimum_required(VERSION 3.10)

project(Singleton)

add_subdirectory(src)

set(SOURCES
    main.cpp)


add_executable(${CMAKE_PROJECT_NAME}_impl ${SOURCES})

# link singleton librariy
target_link_libraries(${CMAKE_PROJECT_NAME}_impl random_num_generator_lib)

# visibility to the header in src-folder
target_include_directories(${CMAKE_PROJECT_NAME}_impl PRIVATE src)