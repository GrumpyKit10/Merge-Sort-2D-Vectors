# Merge and Sort 2D Vectors

CSCE 2110 – Data Structures
Exam 4, Question 6 | December 2021

## Overview

This program demonstrates merging multiple 1D integer vectors (stored inside a 2D vector) into a single vector, then sorting and printing the result in ascending order.

## Features

* Stores multiple integer vectors inside a `vector<vector<int>>`.
* Merges all elements into a single 1D vector.
* Sorts values using `std::sort`.
* Prints output in formatted list style.

## Example

**Input:**

```cpp
{{10, 20, 30, 40}, {15, 25, 35}, {27, 29, 37, 48, 93}, {32, 33}}
```

**Output:**

```
[10, 15, 20, 25, 27, 29, 30, 32, 33, 35, 37, 40, 48, 93]
```

## How to Run

1. Clone this repository:

2. Compile the program:

   ```bash
   g++ main.cpp -o merge_sort
   ```
3. Run:

   ```bash
   ./merge_sort
   ```

## Author

Matthew Wilson
