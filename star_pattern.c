#include <stdio.h>
#include <stdlib.h>
#include "star_patterns.h"

// Main Function
int main(void)
{
    int c, radius, h, w, s, ha;
    int dummy = 0;
    while (dummy == 0)
    {
        printf("--STAR PATTERNS--");
        printf("\nSelect shape you want to see");
        printf("\n1.Circle\n2.Rectangle\n3.Square");
        printf("\n--Triangles--");
        printf("\n  4.Right\n  5.Equilateral\n  6.Isosceles\n  7.Scalene");
        printf("\n8.Diamond\n9.Pyramid\n10.Butterfly");
        printf("\n--Inverted Triangles--");
        printf("\n  11.Right\n  12.Equilateral\n  13.Isosceles\n  14.Scalene");
        printf("\n--Hollow Triangles--");
        printf("\n  15.Right\n  16.Equilateral\n  17.Isosceles\n  18.Scalene");
        printf("\n19.Hollow Diamond");
        printf("\n20.Hollow Pyramid");
        printf("\n21.Exit");
        printf("\n\nEnter the the number of shape you want to see: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("\nEnter the radius: ");
            scanf("%d", &radius);
            draw_circle(radius);
            break;
        case 2:
            printf("\nEnter the height of rectangle: ");
            scanf("%d", &h);
            printf("\nEnter the width of rectangle: ");
            scanf("%d", &w);
            draw_rectangle(h, w);
            break;
        case 3:
            printf("\nEnter the size of sqaure: ");
            scanf("%d", &s);
            draw_square(s);
            break;
        case 4:
            printf("\nEnter the height for right triangle: ");
            scanf("%d", &ha);
            draw_right_triangle(ha);
            break;
        case 5:
            printf("\nEnter the height for equilateral triangle: ");
            scanf("%d", &ha);
            draw_equ_triangle(ha);
            break;
        case 6:
            printf("\nEnter the height for isosceles triangle: ");
            scanf("%d", &ha);
            draw_isos_triangle(ha);
            break;
        case 7:
            printf("\nEnter the height for scalene triangle: ");
            scanf("%d", &ha);
            draw_sca_triangle(ha);
            break;
        case 8:
            printf("\nEnter the height for diamond: ");
            scanf("%d", &ha);
            draw_diamond(ha);
            break;
        case 9:
            printf("\nEnter the height for pyramid: ");
            scanf("%d", &ha);
            draw_pyramid(ha);
            break;
        case 10:
            printf("\nEnter the height for butterfly: ");
            scanf("%d", &ha);
            draw_butterfly(ha);
            break;
        case 11:
            printf("\nEnter the height for inverted right traingle: ");
            scanf("%d", &ha);
            draw_inverted_right_triangle(ha);
            break;
        case 12:
            printf("\nEnter the height for inverted equilateral triangle: ");
            scanf("%d", &ha);
            draw_inverted_equ_triangle(ha);
            break;
        case 13:
            printf("\nEnter the height for inverted isosceles triangle: ");
            scanf("%d", &ha);
            draw_inverted_isos_traingle(ha);
            break;
        case 14:
            printf("\nEnter the height for inverted scalene triangle: ");
            scanf("%d", &ha);
            draw_inverted_sca_traingle(ha);
            break;
        case 15:
            printf("\nEnter the height for hollow right triangle: ");
            scanf("%d", &ha);
            draw_hollow_right_triangle(ha);
            break;
        case 16:
            printf("\nEnter the height for hollow equilateral triangle: ");
            scanf("%d", &ha);
            draw_hollow_equ_triangle(ha);
            break;
        case 17:
            printf("\nEnter the height for hollow isosceles triangle: ");
            scanf("%d", &ha);
            draw_hollow_isos_triangle(ha);
            break;
        case 18:
            printf("\nEnter the height for hollow scalene triangle: ");
            scanf("%d", &ha);
            draw_hollow_sca_triangle(ha);
            break;
        case 19:
            printf("\nEnter the height for hollow diamond: ");
            scanf("%d", &ha);
            draw_hollow_diamond(ha);
            break;
        case 20:
            printf("\nEnter the height for hollow pyramid: ");
            scanf("%d", &ha);
            draw_hollow_pyramid(ha);
            break;
        case 21:
            exit(0);
        default:
            printf("Invalid Choice");
            break;
        }
    }
    return 0;
}
