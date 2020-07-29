#include<stdio.h>

int main(){
    int x = 4;
    int y = 9;
    printf("The value of 3*x - 9*y is: %d\n", 3*x - 9*y);
    printf("The value of 3*x - 9*y is: %d\n", 3*(x - 9*y));
    printf("The value of 8*y / 3*x is: %d\n", 8*y / 3*x);
    return 0;
}