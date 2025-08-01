cmake_minimum_required(VERSION 3.12)
project(see_defs C)

include(CheckFunctionExists)

#check_symbol_exists(snprintf stdio.h HAVE_SNPRINTF)
check_function_exists(snprintf HAVE_SNPRINTF)

add_executable(see_defs main.c)

