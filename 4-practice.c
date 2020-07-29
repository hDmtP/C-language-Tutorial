#include<stdio.h>

int main(){
    // int lenght=8, breadth=4;
    // int area = lenght*breadth;
    
    // printf("The area of the rectangle is %d", area);

    float lenght, breadth;
    printf("What is the value of the lenght? \n");
    scanf("%f", &lenght);
    printf("What is the value of the breadth? \n");
    scanf("%f", &breadth);
    printf("The area of the rectangle is %f", lenght*breadth);

    return 0;
}