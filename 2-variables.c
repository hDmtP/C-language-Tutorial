# include<stdio.h>

int main(){
    
   int a = 5;
//    int b = 5.6; //This is not recommended as 5.6 is a real value, not an integer     
    float b = 5.6;
    // char c = 'ufjdfj'; This is not recommended
    char c = 'j';
    int d = 96;
    int e = a+d;
    int f = 789+26598;
    printf("The value of a is %d", a); 
    printf("The value of a is %d %d \n", a, a);  
    printf("The value of b is %f \n", b); 
    printf("The value of c is %c \n", c); 
    printf("The value of e is %d \n", e); 
    printf("The value of f is %d \n", f); 
    printf("The sum of the value of a & d is %d \n", a+d); 

    return 0;
}