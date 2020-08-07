#include<stdio.h>

int main(){
    int a=34;
    int* ptr = &a;
    printf("%d\n", ptr);
    // ptr--;
    printf("%d\n", ptr+50);
    int arr[]={1,2,3,4,8,47};
    int* arptr=arr;
    // printf("%d\n", arr[0]);
    // printf("%d\n", arr[5]);
    printf("The address of the first element of the array is: %d\n", &arr[0]);
    printf("The address of the first element of the array is: %d\n", arr);
    printf("The address of the fifth element of the array is: %d\n", &arr[4]);
    printf("The address of the fifth element of the array is: %d\n", arr+4);

    // arr++ //-------> will throw an error
    *arptr++; //------> will not throw an error
   
    printf("The value at address of the first element of the array is: %d\n", *(&arr[0]));
    printf("The value at address of the first element of the array is: %d\n", *(arr));
    printf("The value at address of the fifth element of the array is: %d\n", *(&arr[4]));
    printf("The value at address of the fifth element of the array is: %d\n", *(arr+4));
    return 0;
}