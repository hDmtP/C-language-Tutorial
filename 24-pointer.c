#include<stdio.h>

int main(){
    printf("Let's learn about pointers\n");
    int a = 75;
    int* ptr = &a;
    int* ptr2 = NULL;
    printf("The value of a is %d\n", a);
    printf("The value of a(fetching through pointer) is %d\n", *ptr);
    
    printf("%x\n", *ptr);   // %x will show address in hexadecimal
    printf("%p\n", *ptr);
    
    printf("%p\n", &ptr);
    printf("%p\n", &a);

    printf("%x\n", &ptr);
    printf("%x\n", &a);

    printf("%p\n", ptr2);
    printf("%p\n", ptr);   //--->printf("%p\n", &a);
    
    return 0;
}
