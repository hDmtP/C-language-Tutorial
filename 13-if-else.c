#include<stdio.h>

int main(){
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);

    if (age>=18)
    {
        printf("You can drive\n");
    }
    if (age==50)
    {
        printf("Half-century");
    }
    
    else
    {
        printf("You cannot drive\n");
    }
    
     

    return 0;
}