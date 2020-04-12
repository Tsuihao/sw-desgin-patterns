cmake_minimum_required(VERSION 3.10)

project(ObserverPattern)

set(SOURCES
    main.cpp
    coronaDataCenter.cpp
    coronaDataObserver.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})