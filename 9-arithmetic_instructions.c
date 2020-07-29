#include<stdio.h>
#include<math.h>

int main(){
    int a = 4;
    int b = 78;
    int z;
    
    // b * a = z; this is illegal
    // z = b * a; this is legal
    printf("a+b: %d \n", a+b);
    printf("a-b: %d \n", a-b);
    printf("a*b: %d \n", a*b);
    printf("b/a: %d \n", b/a);

    printf("5 when divided by 2 leaves a remainder of: %d\n", 5%2);
    printf("-5 when divided by 2 leaves a remainder of: %d\n", -5%2);
    printf("5 when divided by -2 leaves a remainder of: %d\n", 5%-2);
    printf("The value of 4 to the power 5 is: %f\n", pow(4, 5));
    printf("3.0/9 = %f", 3.0/9);
    
    return 0;
}