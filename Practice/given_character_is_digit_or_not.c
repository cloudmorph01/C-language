#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x>=0 && x<=9){
        printf("The given character is a digit.\n");
    }
    else{
        printf("The given character is not a digit.\n");
    }
    return 0;
}