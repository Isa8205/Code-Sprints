# Ema's supercomputer

## Problem Statement

Ema built a quantum computer! Help her test its capabilities by solving the problem below.

Given a grid of size *n × m*, each cell in the grid is either *good* or *bad*.

A valid plus is defined here as the crossing of two segments (horizontal and vertical) of equal lengths. These lengths must be odd, and the middle cell of its horizontal segment must cross the middle cell of its vertical segment.

In the diagram below, the blue pluses are valid and the orange ones are not valid.
![pulses](https://res.cloudinary.com/dzjujqvly/image/upload/v1746529605/1445015866-5e338e8b70-pluseses_rkrqph.png)

### Task

Find the two largest valid pluses that can be drawn on *good* cells in the grid, and return an integer denoting the maximum product of their areas.

### Function Description

twoPluses function has the following parameter(s):
- grid: an array of strings where each string represents a row and each character of the string represents a column of that row

It should return an integer that represents the area of the two largest pluses.

### Example

**Input:**
`
GGGGGG
GBBBGB
GGGGGG
GGBBGB
GGGGGG
`
**Output:** 5

### Constraints

- 2 ≤ *n* ≤ 15
- 2 ≤ *m* ≤ 15

### Where to write your code

Each language has a starter file:
- `ema_supercomputer.py`
- `ema_supercomputer.js`
- `ema_supercomputer.c`
- `ema_supercomputer.cpp`
- `EmaSupercomputer.java`

Open the file and complete the `twoPluses` function.