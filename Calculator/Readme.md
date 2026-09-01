# 🧮 Simple Calculator (C)

A basic command-line calculator written in C. Takes two numbers and an
operator, then performs the corresponding arithmetic operation.

## Features
- Supports `+`, `-`, `*`, `/`
- Handles division-by-zero and invalid operator input
- Clean, beginner-friendly code

## Concepts Demonstrated
- Variables & data types (`double`, `char`)
- User input with `scanf()`
- Output with `printf()`
- Control flow with `switch`
- Basic arithmetic operators

## How to Run

```bash
gcc -o calculator calculator.c
./calculator
```

## Example

```
=== Simple Calculator ===
Enter first number: 5
Enter an operator (+, -, *, /): +
Enter second number: 3
5.00 + 3.00 = 8.00
```