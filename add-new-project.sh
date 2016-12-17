#!/usr/bin/env bash

if [ $# -ne 1 ]; then
    echo "Error!! Input one project name."
    exit;
fi

if [ -e $1 ]; then
    echo "Project \"$1\" already exists."
else
    echo "Project \"$1\" does not exist."
    mkdir $1
    echo "Create sample cpp file..."
    echo  -e "#include <iostream>\\n\\nint main() {\\n  std::cout << \"Hello World!\" << std::endl;\\n  return 0;\\n}" > $1/main.cpp
    echo "Create CMakeLists.txt..."
    echo -e "cmake_minimum_required(VERSION 3.6)\\nproject($1)\\n\\nset(CMAKE_CXX_FLAGS \"-std=c++11 -O2 -g -Wall \${CMAKE_CXX_FLAGS} \")\\n\\nset(SOURCE_FILES main.cpp)\\nadd_executable($1 \${SOURCE_FILES})" > $1/CMakeLists.txt
fi

