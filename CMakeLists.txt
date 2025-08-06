cmake_minimum_required(VERSION 3.31)

project(cmake-uuid-example)

add_library(example)
target_sources(example
  PRIVATE
    src/lib.cpp

  INTERFACE
    FILE_SET HEADERS
    BASE_DIRS
      src
    FILES
      src/lib.hpp
)
target_link_libraries(example
  PUBLIC
    uuid
)

add_executable(example-test)
target_sources(example-test
  PRIVATE
    test/test.cpp
)
target_link_libraries(example-test
  PRIVATE
    example
)

enable_testing()
add_test(NAME example-test COMMAND example-test)
