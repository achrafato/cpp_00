# CPP Module 00 - C++ Introduction

Introduction to C++ basics: namespaces, classes, member functions, stdio streams, initialization lists, static, const, and other basic concepts.

## 📚 Exercises

### Ex00: Megaphone
A program that converts input to uppercase.

```
./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
```

#### Files:
- `ex00/megaphone.cpp`
- `ex00/Makefile`

### Ex01: My Awesome PhoneBook
A simple phonebook program that can store up to 8 contacts.

#### Features:
- ADD: Save a new contact
- SEARCH: Display specific contact
- EXIT: Quit program

#### Files:
- `ex01/PhoneBook.cpp`
- `ex01/PhoneBook.hpp`
- `ex01/Contact.cpp`
- `ex01/Contact.hpp`
- `ex01/main.cpp`
- `ex01/Makefile`

### Ex02: The Job Of Your Dreams
Recreation of a test file with Account class.

#### Files:
- `ex02/Account.cpp`
- `ex02/Account.hpp`
- `ex02/tests.cpp`
- `ex02/Makefile`

## 🛠️ Compilation

Each exercise has its own Makefile with the following rules:
```bash
make        # Compile the program
make clean  # Remove object files
make fclean # Remove object files and executable
make re     # Recompile
```

## 📋 Exercise Details

### Ex00: Megaphone
```cpp
// Usage
./megaphone "text to convert"
./megaphone "multiple" "strings to" "convert"
./megaphone # Prints "* LOUD AND UNBEARABLE FEEDBACK NOISE *"
```

### Ex01: PhoneBook
```cpp
// Commands
ADD     # Add a new contact
SEARCH  # Display specific contact
EXIT    # Quit program

// Contact Fields
First Name
Last Name
Nickname
Phone Number
Darkest Secret
```

### Ex02: Account Class
- Implements bank account behavior
- Handles deposits and withdrawals
- Maintains account history
- Displays formatted output matching test file

## ⚠️ Requirements

- Compile with C++ and flags: -Wall -Wextra -Werror
- Must compile with -std=c++98 flag
- No external libraries
- No C functions (printf, sprintf, etc.)
- Use C++ versions (cout, string, etc.)

## 🎯 Learning Objectives

- Introduction to C++ syntax
- Classes and objects
- Member functions
- I/O streams
- Initialization
- Static members
- const keyword
- String manipulation

## 📝 Coding Style

- All classes must be in Orthodox Canonical Form
- No function implementations in header files
- Each class has its own header file
- Headers must have include guards

## 🧪 Testing

### Ex00
```bash
./megaphone "test" "multiple" "strings"
./megaphone "mixed CASE text"
./megaphone # Test empty input
```

### Ex01
```bash
# Test adding 8+ contacts
# Test searching with invalid index
# Test all fields with various inputs
```

### Ex02
```bash
# Compare output with provided logs
# Test various account operations
```

## 📜 License

This project is part of the 42 curriculum and is provided as-is.
