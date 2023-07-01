# Header File For Drawing Star Patterns

This project provides a collection of functions to draw various star patterns using ASCII characters. It includes patterns such as circles, rectangles, squares, triangles (right, equilateral, isosceles, and scalene), combined shapes (diamond, pyramid, and butterfly), inverted triangles, hollow triangles, hollow combined shapes (hollow diamond and hollow pyramid), and more.

## Functions

The following functions are available in this project:

- `void draw_circle(int radius)`: Draws a circle of the given radius.
- `void draw_rectangle(int r, int c)`: Draws a rectangle with the given number of rows (r) and columns (c).
- `void draw_square(int size)`: Draws a square of the given size.
- `void draw_right_triangle(int r)`: Draws a right triangle with the given height (r).
- `void draw_equ_triangle(int r)`: Draws an equilateral triangle with the given height (r).
- `void draw_isos_triangle(int r)`: Draws an isosceles triangle with the given height (r).
- `void draw_sca_triangle(int r)`: Draws a scalene triangle with the given height (r).
- `void draw_diamond(int r)`: Draws a diamond with the given height (r).
- `void draw_pyramid(int r)`: Draws a pyramid with the given height (r).
- `void draw_butterfly(int r)`: Draws a butterfly pattern with the given height (r).
- `void draw_inverted_right_triangle(int r)`: Draws an inverted right triangle with the given height (r).
- `void draw_inverted_equ_triangle(int r)`: Draws an inverted equilateral triangle with the given height (r).
- `void draw_inverted_isos_traingle(int r)`: Draws an inverted isosceles triangle with the given height (r).
- `void draw_inverted_sca_traingle(int r)`: Draws an inverted scalene triangle with the given height (r).
- `void draw_hollow_right_triangle(int r)`: Draws a hollow right triangle with the given height (r).
- `void draw_hollow_equ_triangle(int r)`: Draws a hollow equilateral triangle with the given height (r).
- `void draw_hollow_isos_triangle(int r)`: Draws a hollow isosceles triangle with the given height (r).
- `void draw_hollow_sca_triangle(int r)`: Draws a hollow scalene triangle with the given height (r).
- `void draw_hollow_diamond(int r)`: Draws a hollow diamond with the given height (r).
- `void draw_hollow_pyramid(int r)`: Draws a hollow pyramid with the given height (r).

## Usage

To use this project, include the `star_patterns.h` header file and call the desired functions to draw the star patterns. Each function takes the required parameters (e.g., radius, height) to specify the size of the pattern to be drawn. The patterns are printed using ASCII characters in the console.

```c
#include<stdio.h>
#include "star_patterns.h"

int main() {
    // Example usage
    draw_circle(5);
    draw_rectangle(5, 7);
    draw_square(4);
    // ...
    return 0;
}
```

## Contributing

Contributions to this project are welcome. If you have any ideas, improvements, or bug fixes, feel free to open an issue or submit a pull request.

## Authors

- [Vikram Samak](https://github.com/vikramsamak)
