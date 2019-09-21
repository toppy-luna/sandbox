cmake_minimum_required(VERSION 3.8)
project(helloworld_cpp)

## TODO: GTest make install on GitHub Actions env
#find_package(GTest REQUIRED)

add_executable(${PROJECT_NAME}
  src/main.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC
  include)

add_executable(test_calc
  test/test_main.cpp
  test/test_calc.cpp
  src/calc.cpp)
target_link_libraries(test_calc
  ${CMAKE_CURRENT_SOURCE_DIR}/third_party/googletest-release-1.8.1/build/googlemock/gtest/libgtest.a
  ${CMAKE_CURRENT_SOURCE_DIR}/third_party/googletest-release-1.8.1/build/googlemock/gtest/libgtest_main.a
  pthread)
target_include_directories(test_calc PUBLIC
  include
  ${CMAKE_CURRENT_SOURCE_DIR}/third_party/googletest-release-1.8.1/googletest/include)
# TODO: GTest make install on GitHub Actions env
#target_link_libraries(test_calc
#  ${GTEST_LIBRARIES}
#  pthread)
#target_include_directories(test_calc PUBLIC
#  include
#  ${GTEST_INCLUDE_DIRS})
