#include<stdio.h>
#include<math.h>

void cal_square_root(float num);
int main(){
    float num;
    printf("Enter your number:");
    scanf("%f",&num);
    printf("square of %f is %f\n",num,pow(num,2));
    cal_square_root(num);
    return 0;
}
void cal_square_root(float num){
    printf("square root of %f is %f\n",num,sqrt(num));
}