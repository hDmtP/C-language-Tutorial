#include<stdio.h>

int main(){
    float celcius;
    float farenhite;
    printf("Enter the Temp in celcius: \n");
    scanf("%f", &celcius);

    printf("Temp in Farenhite is %f", (celcius * 9/5) + 32);
    return 0;
}
