# Fibonacci Series Generator

This C++ program generates the Fibonacci sequence up to a number of terms specified by the user. It displays the output in a neatly formatted table using standard I/O features.

---

## 🧾 Description

The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones, typically starting with 0 and 1.

This program:
- Asks the user how many Fibonacci terms they want.
- Uses a loop to generate and print each term.
- Formats the output as a simple table with aligned columns using `iomanip`.

---

## 🧮 How It Works

1. Takes user input for the number of terms.
2. Initializes two variables for the first two Fibonacci numbers (`0` and `1`).
3. Uses a loop to:
   - Print each term in a formatted table.
   - Calculate the next number in the series.
4. Uses `long long` to handle large Fibonacci values (up to the 93rd term safely).
5. Uses `setw()` from `iomanip` to align the output.

---

## 📋 Prerequisites

### For All Systems:
- A C++ compiler (`g++`, `clang++`, `MSVC`, etc.)
- Basic terminal or command-line access.

---

## ⚠️ Known Limitations

- Overflow after 93 terms due to the long long limit (max ~9.2 quintillion).
- Negative or non-integer input not currently handled.
- No input sanitization: entering letters or symbols will cause input failure.
- Performance isn't optimized for extremely large term generation (though not needed under 93 terms).
