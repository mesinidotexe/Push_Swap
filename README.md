*This project has been created as part of the 42 curriculum by <vmesini->.*

# push_swap

# TO TEST 
# var=$(echo $(seq 0 99 | shuf)) && ./push_swap $var

## Description

**push_swap** is a sorting algorithm project from the 42 curriculum.  
The goal is to sort a stack of integers using a **limited set of operations** and the **smallest possible number of moves**.

The program receives a list of integers as arguments and must output a sequence of instructions that sorts the numbers in ascending order using two stacks:

- **Stack A** (initial stack)
- **Stack B** (auxiliary stack)

Only the following operations are allowed:

- `sa`, `sb`, `ss`
- `pa`, `pb`
- `ra`, `rb`, `rr`
- `rra`, `rrb`, `rrr`

The main challenge is **algorithm efficiency**, especially for larger inputs (100 and 500 numbers), where the number of operations must remain under specific limits.

### Project Goals

- Implement stack manipulation from scratch.
- Work with linked lists or similar data structures.
- Optimize sorting logic for different input sizes.
- Develop algorithmic thinking (e.g., small sort strategies and radix sort for larger sets).

---

## Features

- Custom stack implementation
- Optimized sorting for:
  - 2–3 numbers (minimal moves)
  - 4–5 numbers (small-sort strategy)
  - Larger inputs using **Radix Sort (bitwise approach)**
- Error handling:
  - Non-numeric arguments
  - Duplicates
  - Integer overflow
- Memory management without leaks

---

## How It Works

### Small Inputs (≤ 5 numbers)

For small stacks, hardcoded logical strategies are used to guarantee the minimum number of moves.

### Larger Inputs (> 5 numbers)

For larger datasets, a **binary Radix Sort** approach is used:

1. Normalize the numbers (index them from smallest to largest).
2. Sort numbers bit by bit (starting from the least significant bit).
3. Use `pb` and `ra` depending on the current bit.
4. Move elements back from stack B to stack A after each bit pass.

This ensures efficient sorting within the movement limits required by the project.

---

## Instructions

### Compilation

```bash
make
