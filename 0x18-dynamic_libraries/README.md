# 0x18-dynamic_libraries 
## About
This is the first project to introduce the C Programming language, it includes:
- What is `main`
- How to print text using `printf`, `puts`, and `putchar`.
- How to get the size of a specific type using unary operator `sizeof`
- How to compile using `gcc`
- What is the default program name when compiling with gcc

## Requirements
- Ubuntu 20.04 LTS
- The first line of all your files should be exactly #!/bin/bash
- use `gcc`, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

## File Descriptions
[1-create_dynamic_lib.sh](https://github.com/szbrooks2017/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/1-create_dynamic_lib.sh) -  a bash script that runs a C file through the preprocessor and save the result into another file.

[inject.c](https://github.com/szbrooks2017/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/inject.c) - a bash script that compiles a C file but does not link.

[mathisdumb.c](https://github.com/szbrooks2017/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/mathisdumb.c) -  a bash script that generates the assembly code of a C code and save it in an output file.
