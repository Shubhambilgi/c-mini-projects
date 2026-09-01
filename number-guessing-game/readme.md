<div align="center">

# 🎯 Number Guessing Game

### A command-line guessing game built in C — random numbers, loops, and conditionals.

</div>

---

## 📖 What It Does

The computer picks a random number between 1 and 100. The user keeps
guessing until they find it, getting a "too high" or "too low" hint after
each try.

## ✨ Features

| | |
|---|---|
| 🎲 | Random target number every run |
| 🔁 | Keeps prompting until the correct guess |
| 📊 | Tracks and reports number of attempts |

## 🧠 Concepts Demonstrated

`Variables` · `if / else` · `while loop` · `rand()` / `srand()` · `User input`

## 🚀 How to Run

```bash
gcc -o game game.c
game
```

## 💻 Example

```
=== Number Guessing Game ===
I'm thinking of a number between 1 and 100.

Guess a number: 50
Too high!

Guess again: 25
Too low!

Guess again: 37
Correct! The number was 37.
You got it in 3 attempts.
```



---

## 🔍 How It Works

<details>
<summary><b>Generating a Random Number</b></summary>
<br>

```c
srand((unsigned int)time(NULL));
int target = (rand() % 100) + 1;
```

`rand()` returns a pseudo-random integer, but on its own it produces the
*same* sequence every time the program runs. `srand()` "seeds" the random
number generator so it starts from a different point each time — here,
seeded with the current time via `time(NULL)`, since the clock is always
different.

`rand() % 100` gives a number from `0` to `99`. Adding `1` shifts that
range to `1` to `100`.

</details>

<details>
<summary><b>The while Loop</b></summary>
<br>

```c
while (guess != target) {
    ...
}
```

The loop keeps running as long as the condition (`guess != target`) is
true. Each pass through the loop asks for a new guess, so the program
naturally keeps prompting until the user gets it right — no fixed number
of tries needed.

</details>

<details>
<summary><b>Giving Feedback with if / else</b></summary>
<br>

```c
if (guess > target) {
    printf("Too high!\n\n");
} else {
    printf("Too low!\n\n");
}
```

Since we already know `guess != target` (that's what keeps the loop
running), we only need to check one direction — if it's not too high, it
must be too low.

</details>

<details>
<summary><b>Counting Attempts</b></summary>
<br>

```c
int attempts = 0;
...
attempts++;
```

A simple counter incremented on every guess, then reported at the end.
`attempts == 1 ? "" : "s"` is a small touch using the ternary operator to
print "1 attempt" vs "3 attempts" correctly.

</details>


<div align="center">

⬅️ [Back to all projects](../README.md)

</div>