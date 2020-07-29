#include<stdio.h>

int main(){
    // int principle=1310, rate=4, years=2;
    // int smpInterest = (principle* rate* years)/100;
    // printf("Value of Simple Interest is %d \n", smpInterest);
    float principle, rate, years;
    printf("Enter principle value \n");
    scanf("%f", &principle);
    printf("Enter rate value \n");
    scanf("%f", &rate);
    printf("Enter year value \n");
    scanf("%f", &years);
    printf("Your simple interest is %f", (principle* rate* years)/100);

    return 0;
}