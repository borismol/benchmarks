set(BENCHMARK_SOURCES benchmark.cpp)

add_executable(benchmarks ${BENCHMARK_SOURCES})
target_link_libraries(benchmarks PUBLIC
  benchmark benchmark_main
  optimizations)

if (CMAKE_TOOLCHAIN_FILE MATCHES "linux")
  target_link_libraries(benchmarks PUBLIC pthread)
endif()
