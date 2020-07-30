#include<stdio.h>

int main(){
    int num;
    printf("Enter number\n");
    scanf("%d", &num);
    if (num==1)
    {
        printf("Your entered number is 1\n");
    }
    else if (num==2)
    {
        printf("Your entered number is 2\n");
    }
    else if (num==3)
    {
        printf("Your entered number is 3\n");
    }
    else 
    {
        printf("Your entered number is not 1,2 and 3\n");
    }
    
    return 0;
}