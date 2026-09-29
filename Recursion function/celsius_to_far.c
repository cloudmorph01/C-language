#include<stdio.h>
int calcpercentage(int science, int math, int sanskrit);
int main(){
    float far=convertTemp(37);
    printf("Temperature in Fahrenheit: %.2f\n", far);
    return 0;
}
float convertTemp(float celsius){
    float far=(celsius*9/5)+32;
    return far;
}