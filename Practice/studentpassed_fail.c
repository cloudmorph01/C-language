#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks >=0 && marks<30){
        printf("you have failed the exam\n");
    }
        else if(marks>=30 && marks<=100){
        printf("you have passed the exam\n");
}
else{
    printf("invalid number\n");
}
return 0;
}   
