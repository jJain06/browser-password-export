cmake_minimum_required(VERSION 3.16)
project(browser-password-export CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(browserpasswordexport
    src/main.cpp
    src/readers.cpp
    src/merge.cpp
    src/encrypt.cpp
    src/cli.cpp
)

target_include_directories(browserpasswordexport PRIVATE include)

if(WIN32)
    target_link_libraries(browserpasswordexport PRIVATE userenv)
endif()
