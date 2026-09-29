# C Modular Calculator

A simple calculator written in C as a practice project for learning **multi-file C programming** and code organization.

## Project Structure

```text
c-modular-calculator/
├── main.c
├── calculator.c
├── calculator.h
└── README.md
```

### Files

* `main.c` — Handles the main program flow and user interaction.
* `calculator.c` — Contains the calculator functions.
* `calculator.h` — Contains the function declarations shared between the source files.

## What I Practiced

* Splitting a C program across multiple `.c` files
* Creating and using header files
* Function declarations and definitions
* Compiling multiple C source files together
* Using GCC from the terminal
* Organizing code into separate responsibilities

## Compilation

Using GCC:

```bash
gcc main.c calculator.c -o main
```

Then run:

```bash
./main
```

On Windows:

```powershell
.\main.exe
```

## Purpose

This project is part of my ongoing journey learning C and understanding how larger programs are structured.

The goal wasn't to build a complex calculator, but to understand how different parts of a C program can work together while remaining separated into their own files.
