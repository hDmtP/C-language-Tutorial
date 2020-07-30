#include<stdio.h>

int main(){
    int age;
    int viPass=0;
    // viPass=14;
    printf("Enter your age:\n");
    scanf("%d", &age);

    if ((age>=18 && age<=73) || viPass==14)
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