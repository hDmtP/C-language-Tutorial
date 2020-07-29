#include <stdio.h>

int main()
{
    // int radius = 5;
    // float pi = 3.14;
    // printf("The area of the circle is %f", pi*radius*radius);

    float pi = 3.14;
    int radius, height;
    printf("Enter the radius of the cylinder \n");
    scanf("%d", &radius);
    printf("Area of the circle is %f \n", pi * radius * radius);
    printf("Enter the height of cylinder \n");
    scanf("%d", &height);
    printf("The volume of the cylinder is %f", pi * radius * radius * height);

    return 0;
}