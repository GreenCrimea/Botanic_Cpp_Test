cmake_minimum_required(VERSION 3.0.0)
project(botanic++ VERSION 0.1.0)

include(CTest)
enable_testing()

find_package(cryptopp CONFIG REQUIRED)

add_executable(botanic++ src/main.cpp)

target_link_libraries(main PRIVATE cryptopp-static)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
 