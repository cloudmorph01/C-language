#include<stdio.h>
int main(){
    char alphabet;
    printf("Enter a character: ");
    scanf("%c", &alphabet);
    if(alphabet>='A' && alphabet<='Z'){
        printf("The given character is an uppercase letter.\n");
    }
    else if(alphabet>='a' && alphabet<='z'){
        printf("The given character is a lowercase letter.\n");
    }
    else{
        printf("The given character is not an alphabet letter.\n");
    }
    return 0;
}