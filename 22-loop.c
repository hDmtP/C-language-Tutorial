#include<stdio.h>

int main(){
    int a;
    printf("Enter any single digit numerical value and continue the loop: \n");
    scanf("%d", &a);

    // while (a>466)
    // {
    //     printf("%d\n", a);
    //     a++;
    // }
    
    while (a<=20){ 
        if (a>=10)
    {
        printf("%d\n", a);
        
    }
    
        a++;
    }
    

    return 0;
}