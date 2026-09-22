#include<stdio.h>
int main(){
    int n;
    printf("Enter your number");
    scanf("%d",number);
        if(n==0 || n==1){
            return 1;
        }
        else{
            return n*factorial(n-1);
        }
    }
    return 0;
}
