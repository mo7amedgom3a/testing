
# Monty Bytecode Interpreter

## Table of Contents
- [Introduction](#introduction)
- [Compilation & Output](#compilation--output)
- [Tests](#tests)
- [The Monty Language](#the-monty-language)
- [Monty Bytecode Files](#monty-bytecode-files)
- [The Monty Program](#the-monty-program)

## Introduction

The Monty Bytecode Interpreter is a program that interprets Monty bytecode files. Monty is a scripting language that relies on a unique stack with specific instructions to manipulate it. The goal of this project is to create an interpreter that can execute Monty bytecodes.

## Compilation & Output

Your code will be compiled using the following command:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```

Any output must be printed on `stdout`, and any error message must be printed on `stderr`. You can refer to the [GitHub repository](https://github.com/holbertonschool/Monty/blob/master/README.md) for guidance on printing errors to `stderr`.

## Tests

It is strongly encouraged to work together on a set of tests to ensure the correctness and functionality of the interpreter.

## The Monty Language

Monty 0.98 is a scripting language that is first compiled into Monty byte codes, similar to Python. It relies on a unique stack with specific instructions to manipulate it.

## Monty Bytecode Files

Files containing Monty byte codes typically have the `.m` extension. Each instruction appears on a separate line. There can be any number of spaces before or after the opcode and its argument.

## The Monty Program

Usage: `monty file`

- `file` is the path to the file containing Monty byte code.

The Monty program runs the bytecodes line by line and stops if any of the following conditions are met:
- It executes every line of the file properly.
- It encounters an error in the file.
- An error occurs.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please feel free to contribute by creating a pull request.
