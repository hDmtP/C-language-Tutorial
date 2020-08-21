#include<stdio.h>

int main(){
    
    char p[]="hdmtp"; //----> ***hardcoded variable***
    
    char temp;
    int len=0;
    while (p[len]!='\0')
    {
        len++;
    }
    for (int i = 0; i <= (len/2 - 1); i++)
    {
        temp = p[i];
        p[i] = p[len-1-i];
        p[len-1-i] = temp;
    }
    printf("%s", p);
    

    return 0;
}
