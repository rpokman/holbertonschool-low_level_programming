# C - Pointers, Arrays and Strings

This repository contains my work and exercises on pointers, arrays, and strings in C, based on the curriculum from the Holberton School. The project is designed to help understand low-level memory manipulation and how C handles data structures and function calls.

## Learning Objectives

The goal of this project is to understand and apply the following key concepts:

- What are pointers and how they work
- How to use pointers to access and modify data
- How to declare and manipulate arrays
- How strings are represented in C
- Pointer arithmetic
- How arrays and pointers are different (and how they behave similarly)
- How to use `sizeof`, `&`, and `*` operators
- How to pass variables by reference to functions using pointers

## Files and Descriptions

| File Name            | Description                                                                 |
|----------------------|-----------------------------------------------------------------------------|
| `0-reset_to_98.c`     | Function that updates the value a pointer points to to 98.                 |
| `1-swap.c`            | Function that swaps the values of two integers.                            |
| `2-strlen.c`          | Function that returns the length of a string.                              |
| `3-puts.c`            | Function that prints a string followed by a new line.                      |
| `4-print_rev.c`       | Function that prints a string in reverse.                                  |
| `5-rev_string.c`      | Function that reverses a string.                                           |
| `6-puts2.c`           | Function that prints every other character of a string.                    |
| `7-puts_half.c`       | Function that prints the second half of a string.                          |
| `8-print_array.c`     | Function that prints `n` elements of an integer array.                     |
| `9-strcpy.c`          | Function that copies a string.                                             |
| `100-atoi.c`          | Function that converts a string to an integer (`atoi` implementation).     |
| `101-keygen.c`        | Program that generates random valid passwords for the program `101-crackme`.|

## Compilation

All C files are compiled using the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o my_program

