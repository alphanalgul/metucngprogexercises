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


