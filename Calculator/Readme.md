<div align="center">

# 🧮 Simple Calculator

### A command-line calculator built in C — clean, beginner-friendly, and fully documented.

</div>

---

## 📖 What It Does

Takes two numbers and an operator, then performs the corresponding
arithmetic operation — with proper error handling for invalid input and
division by zero.

## ✨ Features

| | |
|---|---|
| ➕➖✖️➗ | Supports `+`, `-`, `*`, `/` |
| 🛡️ | Handles division-by-zero gracefully |
| 🚫 | Rejects invalid operators without crashing |
| 🧹 | Clean, readable, beginner-friendly code |

## 🧠 Concepts Demonstrated

`Variables` · `Data Types` · `scanf()` · `printf()` · `switch` · `Operators`

## 🚀 How to Run

```bash
gcc -o calculator calculator.c
./calculator
```

## 💻 Example

```
=== Simple Calculator ===
Enter first number: 5
Enter an operator (+, -, *, /): +
Enter second number: 3
5.00 + 3.00 = 8.00
```

<img width="1920" height="1020" alt="calculator" src="https://github.com/user-attachments/assets/8d721283-e6fe-435b-9c90-f724511f5d74" />


---

## 🔍 How It Works

<details>
<summary><b>Variables & Data Types</b></summary>
<br>

```c
double num1, num2, result;
char op;
```

`double` stores decimal numbers (so `5 / 2` gives `2.50`, not `2`).
`char` stores a single character — here, the operator symbol.

</details>

<details>
<summary><b>Getting Input with scanf()</b></summary>
<br>

```c
scanf("%lf", &num1);
scanf(" %c", &op);
```

- `%lf` reads a `double`. `%c` reads a single character.
- The `&` before a variable name passes its *address* — `scanf` needs to
  know where in memory to store the value, not just its current value.
- The space before `%c` (`" %c"`) is a common gotcha: it tells `scanf` to
  skip any leftover whitespace (like the Enter key press) still sitting in
  the input buffer from the previous read. Without it, `op` can end up
  holding a stray newline instead of `+`.

</details>

<details>
<summary><b>Making Decisions with switch</b></summary>
<br>

```c
switch (op) {
    case '+': ... break;
    case '-': ... break;
    ...
    default: ...
}
```

`switch` compares one variable (`op`) against a list of possible values
and runs the matching block. It's a cleaner alternative to a long chain of
`if / else if` when checking one variable against many fixed options.
`break` stops execution from "falling through" into the next case.
`default` catches anything that didn't match.

</details>

<details>
<summary><b>Output with printf()</b></summary>
<br>

```c
printf("%.2f + %.2f = %.2f\n", num1, num2, result);
```

`%.2f` formats a float/double to 2 decimal places. `\n` moves to a new line.

</details>

<details>
<summary><b>Edge Case: Division by Zero</b></summary>
<br>

```c
if (num2 == 0) {
    printf("Error: Division by zero is not allowed.\n");
}
```

Dividing by zero is undefined behavior for integers and produces `inf` or
`nan` for floating point — neither is useful to show a user, so it's
checked explicitly before dividing.

</details>

---

## 🌱 Ideas to Extend This

- [ ] Add `%` modulus and `^` power operators
- [ ] Loop so the user can calculate repeatedly without restarting
- [ ] Validate input (what if they type a letter instead of a number?)
- [ ] Refactor into functions instead of one big `main()`

---

<div align="center">

⬅️ [Back to all projects](../README.md)

</div>
