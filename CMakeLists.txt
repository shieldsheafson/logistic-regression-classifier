cmake_minimum_required(VERSION 3.16)
project(classifier VERSION 1.0)

add_executable(classifier)

target_sources(classifier PRIVATE
    src/driver.cpp
)

target_include_directories(classifier PRIVATE src)