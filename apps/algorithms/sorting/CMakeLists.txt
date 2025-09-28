cmake_minimum_required(VERSION 3.20)

project(
  "algorithms-sorting"
  VERSION 1.0
  LANGUAGES C)

add_compile_options(-Werror -Wall -Wextra -Wpedantic -std=c11)
add_compile_options(-g)
add_compile_definitions(-DDEBUG)

add_executable(bubble-sort bubble-sort.c)
add_executable(shaker-sort shaker-sort.c)
add_executable(shell-sort shell-sort.c)
add_executable(selection-sort selection-sort.c)
add_executable(heap-sort heap-sort.c)
add_executable(merge-sort merge-sort.c)
add_executable(quick-sort quick-sort.c)
