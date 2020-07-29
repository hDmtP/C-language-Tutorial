#include<stdio.h>

int main(){
    float celcius;
    float farenhite;
    printf("Temp in celcius is \n");
    scanf("%f", &celcius);

    printf("Temp in Farenhite is %f", (celcius * 9/5) + 32);
    return 0;
}