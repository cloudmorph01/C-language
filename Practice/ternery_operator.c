#include<stdio.h>
int main(){
    // Ternary operator to check age category
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    age>=18 ? printf("adult\n") : (age>=13 && age<18 ? printf("teenager\n") : printf("child\n"));   
    return 0;
}