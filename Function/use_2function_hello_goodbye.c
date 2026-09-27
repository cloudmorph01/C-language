#include<stdio.h>
void printHello();//declaration /prototype
void printGoodbye();
int main(){
    printHello();  //function call 
    printGoodbye();
    return 0;
}
//function definition
void printHello(){
printf("Hello!\n");
}

void printGoodbye(){
    printf("good bye\n");
}