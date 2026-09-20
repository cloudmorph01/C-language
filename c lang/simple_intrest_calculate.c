#include<stdio.h>
int main(){
    // simple interest calculate
    float principle,rate,time;
    printf("Enter principle amount: ");
    scanf("%f",&principle);
    printf("Enter rate of interest: ");
    scanf("%f",&rate);
    printf("Enter time in years: ");
    scanf("%f",&time);
    printf("simple interest is: %f",principle*rate*time/100);
    return 0;
}