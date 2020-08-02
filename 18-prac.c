#include<stdio.h>

int main(){
    int physics, chemistry, maths;
    float total;

   printf("Enter your phy num\n");
   scanf("%d", &physics);
   
   printf("Enter your chem num\n");
   scanf("%d", &chemistry);

   printf("Enter your math num\n");
   scanf("%d", &maths);

   total = (physics+chemistry+maths)/3;


    if((total<40) || (physics<33) || (chemistry<33) || (maths<33)){
        printf("Total score:%f  Status: Failed\n", total);
    } 
    else{
        printf("Total score:%f  Status: Passed\n", total);
    }
    return 0;
}