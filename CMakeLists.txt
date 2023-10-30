cmake_minimum_required(VERSION 3.26)
project(repo C)


set(CMAKE_C_STANDARD 11)

add_executable(repo
        tut-2/Task3_examples.c
        tut-2/Task3_exploits.c
        tut-2/makroTask.c)
add_compile_options(-o0g)