# Shopping Centre Management System

This project simulates a **Shopping Centre Management System** using **C++** and object-oriented programming principles. The system models different types of businesses within a shopping centre—**Shops** and **Restaurants**—and their respective **Employees**.

## 🧩 Key Features

- **Dynamic Memory Management**: Manual memory handling using `char*` and `new/delete`.
- **Inheritance**: `Shop` and `Restaurant` classes inherit from a base `Business` class.
- **Polymorphism**: Key operations are performed through virtual functions.
- **Encapsulation**: Class data is protected and accessed through getters and setters.
- **Menu-Driven Interface**: Users interact with the system via a simple text-based menu.

## 📁 Class Structure

### Employee
- Contains basic employee information: first name, last name, and SSN.
- Supports printing and name-based searches.

### Business (Abstract)
- Stores name, size, and a list of employees.
- Acts as a base for specialized business types with virtual functions.

### Shop (Derived from Business)
- Adds `type` field to identify the kind of shop (Clothing, Tech, etc.).

### Restaurant (Derived from Business)
- Adds `seating capacity` and functionality to evaluate seating sufficiency.

### ShoppingCentre
- Maintains a collection of up to 50 businesses.
- Provides reporting, searching, and listing capabilities.

## ⚙️ Compilation

Use a C++ compiler like g++:

```bash
g++ shoppingmain.cpp Business.cpp Employee.cpp Restaurant.cpp Shop.cpp ShoppingCentre.cpp -o shopping
./shopping
```

## 🔐 Constraints

- Only `<iostream>` and `<cstring>` libraries are used.
- `char*` is used instead of `std::string`.
- Prohibited features include modern C++ keywords like `auto`, `constexpr`, `std::vector`, etc.
- Copy constructors and assignment operators are manually defined where applicable.
- No use of standard containers like `string` or `vector`.

## 📦 Files

- `Employee.h` / `Employee.cpp`
- `Business.h` / `Business.cpp`
- `Shop.h` / `Shop.cpp`
- `Restaurant.h` / `Restaurant.cpp`
- `ShoppingCentre.h` / `ShoppingCentre.cpp`
- `shoppingmain.cpp`

---

