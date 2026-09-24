#include<stdio.h>
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number>= 40){
        printf("The student has passed.\n");
    }
    else{
        printf("The student has failed.\n");
    }
    return 0;
}