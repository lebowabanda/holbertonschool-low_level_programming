cmake_minimum_required(VERSION 3.20)
# set(CMAKE_C_STANDARD 89)

#project name
project(low_level C)

#clangd as out formatter
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#enabling C and GNU extensions
set(CMAKE_C_EXTENSIONS ON)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Files become a shared library
file (GLOB SHARED_SRC

  "0-reset_to_98.c"
  "1-swap.c"
  "2-strlen.c"
  "3-puts.c"
  "4-print-rev.c"
  "5-rev_string.c"
  "6-puts2.c"
  "7-puts_half.c"
  "8-print_array.c"
  "9-strcpy.c"
  "100-atoi.c"
  

)
add_library(shared_lib STATIC ${SHARED_SRC})
# All main files needed
file(
  GLOB
  MAIN_FILES
 "*-main.c"
)
foreach(main_files ${MAIN_FILES})
  get_filename_component(target_name ${main_files} NAME_WE)
  add_executable(${target_name} ${main_files})

  target_link_libraries(${target_name} PRIVATE shared_lib)
  target_compile_options(${target_name} PRIVATE -Wall -pedantic -Werror -Wextra -g -std=gnu89 )
endforeach()
# target_include_directories(${PROJECT_NAME}PRIVATE ${CMAKE_SOURCE_DIR})
#compile flags for holberton requirements