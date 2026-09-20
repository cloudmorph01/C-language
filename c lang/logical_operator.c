#include<stdio.h>
int main(){
 int a=3>2 && 3<4;   //AND operator
  //3>2 is true and 3<4 is also true so it will return
 printf("%d\n",a);
 

// OR operator
 int b=3>2 || 3<4;   //OR operator
  //3>2 is true and 3<4 is also true so it will return
 printf("%d\n",b);
 

//NOT operator
 int c=! (3>2);   //NOT operator
  //3>2 is true so it will return false 
  printf("%d\n",c);
  return 0;
}