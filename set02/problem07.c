// 07. Write a program to find the area of a triangle.

// **Function Declarations**
// ```c
// typedef struct _triangle {
// 	float base, altitude, area;
// } Triangle;

// Triangle input_triangle();
// void find_area(Traingle *t);
// void output(Triangle t);


#include <stdio.h>

typedef struct _triangle {
    float base_length, height, area;
} Triangle;

Triangle input_triangle() {
    Triangle t;
    printf("Enter the base length of the triangle: ");
    scanf("%f", &t.base_length);
    printf("Enter the height of the triangle: ");
    scanf("%f", &t.height);
    return t;
}

void find_area(Triangle *t) {
    t->area = (t->base_length * t->height) / 2;
}

void output(Triangle t) {
    printf("Area of the triangle = %.2f sq. units\n", t.area);
}

int main() {
    Triangle PrathaapmTriangle = input_triangle();
    find_area(&PrathaapmTriangle);
    output(PrathaapmTriangle);
    return 0;
}
