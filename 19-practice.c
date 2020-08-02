#include<stdio.h>

int main(){
    int income;
    float tax=0;
    printf("Enter your income\n");
    scanf("%d", &income);

    if ((income>=250000 && income<500000))
    {
        tax = tax + (500000-income)*0.05;
    }
    
    if ((income>=500000 && income<1000000))
    {
        tax = tax + (1000000-income)*0.20;
    }
    
    if ((income>=1000000))
    {
        tax = tax + (income)*0.30;
    }
    
    printf("Your net payable tax this year is %f\n", tax);
    return 0;
}