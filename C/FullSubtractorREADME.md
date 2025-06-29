# Full Subtractor

## What is a Full Subtractor?

A full subtractor is a combinational logic circuit that performs subtraction on three binary inputs:

- **A** (minuend)  
- **B** (subtrahend)  
- **Bin** (borrow-in)

It produces two outputs:

- **D** (difference)  
- **Bout** (borrow-out)

### Logic Formulas:
- `D = (A XOR B) XOR Bin`  
- `Bout = (NOT A AND Bin) OR (NOT A AND B) OR (B AND Bin)`

---

## 📋 Features

- Menu-driven interface with loop until user exits  
- Accepts 3-bit binary or 1-digit hexadecimal input  
- Validates inputs strictly  
- Performs base conversion when needed  
- Calculates `D` and `Bout` without using C bitwise operators  
- Handles all edge cases (invalid input, wrong bit length, etc.)

---

## 🖥️ Sample Run

- `Welcome to Full Subtractor!`
- `(1) Compute and Display the outputs`
- `(2) Quit`

---

- `You choose: 1`
- `You have chosen option 1`
- `Which base will you use to enter input (base 2 or base 16)? 2`
- `Please enter your input: 101`
- `D is 0 Bout is 0`

---

## 🛠️ Technical Constraints

- ❌ No global variables
- ❌ No arrays, strings, or functions (except `main`)
- ❌ No bitwise operators (`&`, `|`, `^`, `~`)
- ✅ Only use logical constructs:
  - `&&`
  - `||`
  - `!`
  - `if`, `while`, etc.

---

