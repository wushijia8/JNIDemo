cmake_minimum_required(VERSION 3.10.2)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/jniLibs/${ANDROID_ABI})

add_library(
        native-lib
        SHARED
        src/main/cpp/native-lib.cpp
)