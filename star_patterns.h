#ifndef STAR_PATTERNS_H
#define STAR_PATTERNS_H

#include <math.h>
#include <stdio.h>

// Function declarations
// Circle
void draw_circle(int radius);

// Rectangle
void draw_rectangle(int r, int c);

// Square
void draw_square(int size);

// Triangles
void draw_right_triangle(int r);
void draw_equ_triangle(int r);
void draw_isos_triangle(int r);
void draw_sca_triangle(int r);

// Combined Shapes
void draw_diamond(int r);
void draw_pyramid(int r);
void draw_butterfly(int r);

// Inverted Triangles
void draw_inverted_right_triangle(int r);
void draw_inverted_equ_triangle(int r);
void draw_inverted_isos_traingle(int r);
void draw_inverted_sca_traingle(int r);

// Hollow Triangles
void draw_hollow_right_triangle(int r);
void draw_hollow_equ_triangle(int r);
void draw_hollow_isos_triangle(int r);
void draw_hollow_sca_triangle(int r);

// Hollow Combined Shapes
void draw_hollow_diamond(int r);
void draw_hollow_pyramid(int r);

// Right Triangle
void draw_right_triangle(int r)
{
    int i, j;

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
// Equilateral Triangle
void draw_equ_triangle(int r)
{
    int i, j, space;

    space = r - 1;

    // Print the upper part of the triangle
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
// Isosceles Triangle
void draw_isos_triangle(int r)
{
    int i, j, space;

    space = r - 1;

    // Print the upper part of the triangle
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
// Scalene Triangle
void draw_sca_triangle(int r)
{
    int i, j;

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
// Circle
void draw_circle(int radius)
{

    int i, j;
    double dist;

    // Determine the number of rows and columns for the grid
    int rows = 2 * radius + 1;
    int cols = 2 * radius + 1;

    // Calculate the center coordinates of the grid
    int centerX = radius;
    int centerY = radius;

    // Iterate over each cell in the grid
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            // Calculate the distance from the center of the circle to the current cell
            dist = sqrt((i - centerX) * (i - centerX) + (j - centerY) * (j - centerY));

            // If the distance is close to the radius, consider it part of the circle and print a star
            if (fabs(dist - radius) < 0.5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
// Rectangle
void draw_rectangle(int r, int c)
{
    int i, j;

    // Iterate over each row
    for (i = 1; i <= r; i++)
    {
        // Iterate over each column in the current row
        for (j = 1; j <= c; j++)
        {
            // Print a star (*) only for the first and last row, or the first and last column
            if (i == 1 || i == r || j == 1 || j == c)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
// Square
void draw_square(int size)
{

    int i, j;
    // Iterate over each row
    for (i = 1; i <= size; i++)
    {
        // Iterate over each column in the current row
        for (j = 1; j <= size; j++)
        {
            // Print a star (*) only for the first and last row, or the first and last column
            if (i == 1 || i == size || j == 1 || j == size)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
// Inverted Right Triangle
void draw_inverted_right_triangle(int r)
{
    int i, j;
    for (i = r; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
// Inverted Equ. Traingle
void draw_inverted_equ_triangle(int r)
{
    int i, j, space;

    space = 0;

    // Print the upper part of the triangle
    for (i = r; i >= 1; i--)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space++;

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
// Inverted Isos. Triangle
void draw_inverted_isos_traingle(int r)
{
    int i, j, space;

    space = 0;

    // Print the upper part of the triangle
    for (i = r; i >= 1; i--)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space++;

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
// Inverted Scalene Triangle
void draw_inverted_sca_traingle(int r)
{
    int i, j, space;

    space = 0;

    // Print the upper part of the triangle
    for (i = r; i >= 1; i--)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space++;

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
// Diamond
void draw_diamond(int r)
{
    int i, j, space;

    space = r - 1;

    // Upper half of the diamond
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    space = 1;

    // Lower half of the diamond
    for (i = 1; i <= r - 1; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space++;

        for (j = 1; j <= 2 * (r - i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
// Pyramid
void draw_pyramid(int r)
{
    int i, j, space;

    space = r - 1;

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
// Butterfly
void draw_butterfly(int r)
{
    int i, j;

    // Upper part of the butterfly
    for (i = 1; i <= r / 2; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (j = 1; j <= 2 * (r / 2 - i); j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Middle line of the butterfly
    for (i = 1; i <= r; i++)
    {
        printf("*");
    }
    printf("\n");

    // Lower part of the butterfly
    for (i = r / 2; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (j = 1; j <= 2 * (r / 2 - i); j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
// Hollow Right Triangle
void draw_hollow_right_triangle(int r)
{
    int i, j;

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == r)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
// Holllow Equ. Triangle
void draw_hollow_equ_triangle(int r)
{
    int i, j, space;

    space = r - 1;

    // Print the upper part of the triangle
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;

        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (i == r || j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
}
// Hollow Isos. Triangle
void draw_hollow_isos_triangle(int r)
{
    int i, j, space;

    space = r - 1;

    // Print the upper part of the triangle
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;

        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (i == r || j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
}
// Hollow Scalene Triangle
void draw_hollow_sca_triangle(int r)
{
    int i, j, space;

    space = r - 1;

    // Print the upper part of the triangle
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;

        if (i == 1 || i == r)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        else
        {
            printf("*");
            for (j = 1; j <= i - 2; j++)
            {
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }
}

// Hollow Diamond
void draw_hollow_diamond(int r)
{
    int i, j, space;

    space = r - 1;

    // Upper half of the diamond
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;

        printf("*");

        if (i > 1)
        {
            for (j = 1; j <= 2 * i - 3; j++)
            {
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }

    space = 1;

    // Lower half of the diamond
    for (i = 1; i <= r - 1; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space++;

        printf("*");

        if (i < r - 1)
        {
            for (j = 1; j <= 2 * (r - i) - 3; j++)
            {
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }
}
// Hollow Pyramid
void draw_hollow_pyramid(int r)
{
    int i, j, space;

    space = r - 1;

    // Print the upper part of the pyramid
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;

        printf("*");

        if (i > 1)
        {
            for (j = 1; j <= 2 * i - 3; j++)
            {
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }

    // Print the base of the pyramid
    for (i = 1; i <= 2 * r - 1; i++)
    {
        printf("*");
    }

    printf("\n");
}

#endif /*STAR_PATTERNS_H*/
