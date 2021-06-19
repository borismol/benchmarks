add_executable(unit_tests test.cpp)
target_link_libraries(unit_tests PUBLIC
  optimizations
  gtest)

if (CMAKE_TOOLCHAIN_FILE MATCHES "linux")
  target_link_libraries(unit_tests PUBLIC pthread)
endif()
