#include<stdio.h>
int main(){
    int a=97;
    int b=sizeof(a++);
    printf("Value of a is %d\n",a);
    printf("Value of b is %d\n",b);
    return 0;
}