cmake_minimum_required(VERSION 3.10)
project(test VERSION 1.0.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCE_FILES
    src/binary_tree.c
    src/linked_list.c
    src/doubly_linked_list.c
    src/trie.c
    src/main.c
)

set(HEADER_FILES
    inc/binary_tree.h
    inc/linked_list.h
    inc/doubly_linked_list.h
    inc/trie.h
)

add_executable(test
    ${SOURCE_FILES}
    ${HEADER_FILES}
)

target_include_directories(test
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc
)
