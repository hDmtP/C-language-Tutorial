#include<stdio.h>

int main(){
    int w, x, y, z;
    printf("Enter w\n");
    scanf("%d", &w);
    printf("Enter x\n");
    scanf("%d", &x);
    printf("Enter y\n");
    scanf("%d", &y);
    printf("Enter z\n");
    scanf("%d", &z);

    
    if (w>x && w>y && w>z)
    {
        printf("w = %d is the greatest\n", w);
    }
    
    if (x>w && x>y && x>z)
    {
        printf("x = %d is the greatest\n", x);
    }
    
    if (y>x && y>x && y>z)
    {
        printf("y = %d is the greatest\n", y);
    }
    
    if (z>x && z>y && z>x)
    {
        printf("z = %d is the greatest\n", z);
    }
    

    // (w==x==y==z)? printf("w=x=y=z") : printf("all the four inputs are not same");
 
    return 0;
}