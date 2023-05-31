CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(module1)

SET(COMMON_SRC ../common/common.c)
SET(INCLUDE_DIR ../include/)

INCLUDE_DIRECTORIES("${INCLUDE_DIR}")

SET(SOURCES module1.c ${COMMON_SRC})
add_compile_definitions(TYPE=module1_t)
add_executable(main1 ${SOURCES})

