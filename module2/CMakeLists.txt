CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(module2)

SET(COMMON_SRC ../common/common.c)
SET(INCLUDE_DIR ../include/)
INCLUDE_DIRECTORIES("${INCLUDE_DIR}")
SET(SOURCES module2.c ${COMMON_SRC})


add_compile_definitions(TYPE=module2_t)

add_executable(main ${SOURCES})

