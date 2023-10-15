/*
Arithmetic Operation - Odd or Even (id-6610)

The program must accept two integers X and Y as the input.
If both the integers are even then the program must print the sum of X and Y.
Else if both the integers are odd then the program must print the product of X and Y.
Else the program must print the absolute difference between X and Y.

Example Input/Output 1:
Input:
20 46

Output:
66

Example Input/Output 2:
Input:
49 -11

Output:
-539

Example Input/Output 3:
Input:
-12 85

Output:
97
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y;
scanf("%d %d",&x,&y);
if(x%2==0 && y%2==0)
{
    printf("%d",x+y);
}
else if(x%2!=0 && y%2!=0)
{
    printf("%d",x*y);
}
else
{
    //using abs for absolute function
    printf("%d",abs(x-y));
}
}
