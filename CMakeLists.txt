cmake_minimum_required(VERSION 3.6)
project(yukicoder-study)

set(CMAKE_CXX_FLAGS "-std=c++11 -O2 -g -Wall ${CMAKE_CXX_FLAGS} ")

# add all directories in this project to add_subdirectory
set(current_dir ${CMAKE_CURRENT_SOURCE_DIR})
file(GLOB children RELATIVE ${current_dir} ${current_dir}/*)
MESSAGE(STATUS "children : " ${children})

foreach (child ${children})
    if (IS_DIRECTORY ${current_dir}/${child})
        if (EXISTS ${current_dir}/${child}/CMakeLists.txt)
            MESSAGE(STATUS "add as a subdirectory : " ${child})
            add_subdirectory(${child})
        endif ()
    endif ()
endforeach ()

