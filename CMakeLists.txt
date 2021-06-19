cmake_minimum_required(VERSION 3.5)

if (ANDROID_BUILD)
  set(ANDROID_ABI arm64-v8a)
  set(CMAKE_TOOLCHAIN_FILE /opt/android/ndk/22.0.7026061/build/cmake/android.toolchain.cmake)
else()
  set(CMAKE_TOOLCHAIN_FILE toolchains/aarch64-linux-gcc.cmake)
endif()

project(optimizations LANGUAGES CXX ASM)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(googlebenchmark)

include_directories(src)
add_subdirectory(src)

add_subdirectory(tests)

add_subdirectory(benchmarks)
