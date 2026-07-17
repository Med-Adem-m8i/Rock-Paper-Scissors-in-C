cmake_minimum_required(VERSION 3.26)
project(RockPaperScissors C)

set(CMAKE_C_STANDARD 11)

# Add all source files
add_executable(RockPaperScissors
        main.c
        game.c
)

# Optional: Add compiler warnings
target_compile_options(RockPaperScissors PRIVATE -Wall -Wextra)