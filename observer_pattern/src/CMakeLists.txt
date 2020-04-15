
set(SOURCES
    coronaDataCenter.hpp
    coronaDataCenter.cpp
    coronaDataObserver.hpp
    coronaDataObserver.cpp
)

# add a library
add_library(corona_observer_pattern_lib ${SOURCES})
# interface visibility 
target_include_directories(corona_observer_pattern_lib PRIVATE interfaces)