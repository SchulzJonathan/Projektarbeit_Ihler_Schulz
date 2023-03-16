cmake_minimum_required(VERSION 3.20)

project(project_x VERSION 1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

add_compile_options(-Wall -Wextra -Werror -O0)

#make a library
add_library(developer STATIC src/developer.c src/developer_group.c)
target_include_directories(developer PUBLIC include)

#define the executable
add_executable(main src/main.c)
target_include_directories(main PUBLIC include)
#including the library
target_link_libraries(main PRIVATE developer)