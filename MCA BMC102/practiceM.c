#include <stdio.h> 
 void main()     {
 int a = 5, b = -7, c = 0, d;
   d = ++a && ++b || ++c;
  printf("\n%d\n %d\n%d\n%d", a, b, c, d);   
  } 