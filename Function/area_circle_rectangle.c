#include<stdio.h>
void area_circle(float radius);
void rectangle(float length,float breadth);
void area_square(float side);
int main(){
    float radius,length,breadth,side;
    area_circle(radius);
    printf("Enter the radius of circle:");
    scanf("%f",&radius);
    rectangle(length,breadth);
    printf("Enter the length and breadth of rectangle:");
    scanf("%f %f",&length,&breadth);
    area_square(side);
    printf("Enter the side of square:");
    scanf("%f",&side);
    return 0;
}
void area_circle(float radius)
{
    float area=3.14*radius*radius;
    printf("Area of circle is %f\n",area);
}
void rectangle(float length,float breadth)
{
    float area=length*breadth;
    printf("Area of rectangle is %f\n",area);
}
void area_square(float side)
{
    float area=side*side;
    printf("Area of square is %f\n",area);
}
