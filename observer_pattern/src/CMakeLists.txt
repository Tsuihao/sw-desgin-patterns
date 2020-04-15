
set(SOURCES
    coronaDataCenter.hpp
    coronaDataCenter.cpp
    coronaDataObserver.hpp
    coronaDataObserver.cpp
    main.cpp
)

add_executable(${CMAKE_PROJECT_NAME}_impl ${SOURCES})
# Interface visibility to executable
target_include_directories(${CMAKE_PROJECT_NAME}_impl PRIVATE interfaces)
