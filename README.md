# C++ — Learning & Practice Repository

A complete record of my C++ learning journey at MIST, organized by topic. The repo spans everything from basic syntax all the way through templates, the STL, and object-oriented design — along with university assignments and independent practice programs.

---

## 📁 Folder Structure

### `Tutorials/` — 65 files
Step-by-step programs following a structured curriculum (Tut1 → Tut66). Topics covered include:

- Variables, data types, and operators
- Conditionals, loops, and functions
- Pointers and references
- Classes and objects, access specifiers, nesting of member functions
- Constructors and destructors
- `this` pointer, static members
- Inheritance (single, multilevel, multiple)
- Polymorphism and virtual functions
- Templates and the STL (`vector`, `map`, etc.)

### `OOP/` — 15 files
Focused practice on Object-Oriented Programming concepts:

- **Constructor/** — Copy constructors (deep vs shallow copy), series of 7 progressively complex programs
- **Operator Overloading/** — Overloading `+`, relational, and other operators across 7 programs
- **Inheritance.cpp** — Inheritance hierarchies and derived class behaviour

### `Array/` — 2 files
Custom array implementations built from scratch:

- `SAL.cpp` — Static Array List with insert, delete, and search operations
- `DAL.cpp` — Dynamic Array List with auto-resizing (doubling strategy) using heap allocation

### `Exception Handling/` — 6 files
Progressive examples of C++ exception handling:

- Basic `try`/`catch` blocks
- Throwing and catching different types (literals, objects)
- Multiple `catch` blocks and rethrowing exceptions
- Custom exception classes

### `Streams/` — 5 files
Input/output stream manipulation:

- `cout` flags: `showpos`, `showpoint`, `showbase`
- Number base formatting: `hex`, `oct`, `dec`
- Stream manipulators: `setw`, `setfill`, `setprecision` via `<iomanip>`
- File I/O fundamentals

### `Practice/` — 44 files
Independent and in-class exercises covering a wide range:

- Number systems: binary-to-decimal and decimal-to-binary conversion
- Bitwise operators
- Pattern printing (including a self-made heart pattern)
- Weekly lab problems (Week 8–11 series)
- General problem-solving across loops, functions, and arrays

### `Assignments/` — 11 files
Graded coursework submissions (student ID: 202214054):

- OOP design problems using classes, constructors, and namespaces
- Copy constructor assignments
- Financial calculator using nested namespaces (`Financial::Mortgage`, `Financial::Retirement`)
- Weekly evaluation programs

---

## 🛠️ Requirements

- C++ compiler — `g++` (GCC) or `clang++`
- C++11 or later (C++17 recommended)

---

## 🚀 Running a Program

**Linux / macOS:**
```bash
g++ -std=c++17 filename.cpp -o output
./output
```

**Windows (MinGW):**
```bash
g++ -std=c++17 filename.cpp -o output.exe
output.exe
```

> Some files in `Practice/` use a `.c` extension and can be compiled with `gcc` instead.

---

## 📊 Stats

| Folder | Files |
|---|---|
| Tutorials | 65 |
| Practice | 44 |
| Assignments | 11 |
| OOP | 15 |
| Exception Handling | 6 |
| Streams | 5 |
| Array | 2 |
| **Total** | **148** |

---
