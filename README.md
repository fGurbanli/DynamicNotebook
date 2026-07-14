# Dynamic Integer Storage

A simple C program that demonstrates dynamic memory management using `calloc`, `realloc`, and `free`.

## Features

* Takes integer input from the user.
* Stores values in a dynamically allocated array.
* Automatically increases array capacity when needed.
* Validates user input.
* Stops reading data when `-1` is entered.
* Prints all entered values at the end.
* Properly releases allocated memory.

## Concepts Practiced

This project was created to practice:

* Dynamic Memory Allocation (`calloc`)
* Dynamic Memory Resizing (`realloc`)
* Memory Deallocation (`free`)
* Pointer Arithmetic
* Input Validation
* Dynamic Arrays

## How It Works

The program starts with an initial capacity of 2 elements.

Example:

```text
Capacity = 2

[10][20]
```

When the array becomes full, its capacity is doubled using `realloc`.

```text
Capacity = 4

[10][20][30][40]
```

If it becomes full again:

```text
Capacity = 8

[10][20][30][40][50][60][ ][ ]
```

This approach is similar to how dynamic containers such as C++ `vector` and Java `ArrayList` grow internally.

## Example Run

```text
Please enter a value for Data[0]
10

Please enter a value for Data[1]
25

Please enter a value for Data[2]
40

Please enter a value for Data[3]
8

Please enter a value for Data[4]
-1

Here is your datas:
10 25 40 8
```

## Memory Management

The program uses:

* `calloc()` to allocate the initial array.
* `realloc()` to increase array capacity when necessary.
* `free()` to release all allocated memory before termination.

Memory allocation failures are checked to prevent crashes and undefined behavior.

## Learning Outcome

Through this project I learned:

* How heap memory works in C.
* The difference between stack and heap allocation.
* Safe usage of `calloc`, `realloc`, and `free`.
* How dynamically growing arrays are implemented.
* Basic memory management practices used in real-world software.

## Author

Furkan Gurbanli
