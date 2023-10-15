/*
Sum of the Closest Float Values

Three floating point values are passed as the input to the program. The program must print the sum of two numbers 
which are closest to each other with the precision up to 2 decimal places.

Example Input/Output 1:
Input:
2.45 6.78 2.35

Output:
4.80

Example Input/Output 2:
Input:
12.45 14.80 15.10

Output:
29.90  */

#include<stdio.h>
#include<stdlib.h>

int main()
{
float a,b,c;
float x,y,z;
scanf("%f %f %f",&a,&b,&c);
x=abs(a-b);
y=abs(b-c);
z=abs(a-c);
if(x<y && x<z)
{
    printf("%.2f",a+b);
}
else if(y<x && y<z)
{
    printf("%.2f",b+c);
}
else
{
    printf("%.2f",a+c);
}
}
