//Square or Rectangle or Quadrilateral
/*
The program must accept the length of the sides of a quadrilateral in sequence (first, second, third and then the fourth side). 
The program must print if the quadrilateral is a SQUARE, RECTANGLE or a QUADRILATERAL based on the length of the sides.

Example Input/Output 1:
Input:
4 4 4 4

Output:
SQUARE

Example Input/Output 2:
Input:
4 2 4 2

Output:
RECTANGLE

Example Input/Output 3:
Input:
4 5 6 7

Output:
QUADRILATERAL */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,c,d;
scanf("%d %d %d %d",&a,&b,&c,&d);
if (a==b && b==c && c==d)
{
    printf("SQUARE");
}
else if(a==c && b==d)
{
    printf("RECTANGLE");
}
else
{
    printf("QUADRILATERAL");
}
}
