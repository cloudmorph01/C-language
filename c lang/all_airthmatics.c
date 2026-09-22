#include <stdio.h>
int main(){
    float a;
    printf("Enter the first number: ");
    scanf("%f",&a);
    float b;
    printf("Enter the second number: ");
    scanf("%f",&b);
    printf("the sum:%f\n",a + b);
    printf("the sub:%f\n",a - b);
    printf("the product:%f\n",a * b);
    printf("the quotient:%f\n",a / b);
    float average=(a+b)/2;
    printf("the average:%f\n",average);   
    return 0;
}