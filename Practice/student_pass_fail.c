#include<stdio.h>
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number>= 40){
        printf("student passed.\n");
    }
    else{
        printf("student failed.\n");
    }
    return 0;
}
