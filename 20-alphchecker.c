#include<stdio.h>

int main(){
    char alph;
    printf("Enter an alphabate(Upper or Lower)\n");
    scanf("%c", &alph);

    // if (alph >= 'A' && alph <= 'Z')
    // {
    //     printf("You have entered a capital letter %c\n", alph);
    // }
    // else if (alph >= 'a' && alph <= 'z')
    // {
    //     printf("You have entered a lower capital letter %c\n", alph);
    // }
    // else
    // {
    //     printf("You entered input %c is not an alphabet yet \n", alph);
    // }

    if (alph<=122 && alph>=97)  
    {
        printf("Its lowercase");
    }
    else 
    {
        printf("Its uppercase");
    }
    
    
    
    
    return 0;
}