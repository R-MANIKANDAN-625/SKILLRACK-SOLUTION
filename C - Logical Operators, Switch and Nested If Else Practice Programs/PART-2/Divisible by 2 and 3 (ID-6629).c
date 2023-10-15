/* Divisible by 2 and 3

The program must accept three integers X, Y and Z as the input. If any one of the integers is divisible by 2 and any one of the integers is divisible by 3 then the program must print the third remaining integer as the output. Else the program must print '-1' as the output.

Example Input/Output 1:
Input:
5 9 4

Output:
5

Example Input/Output 2:
Input:
6 5 7

Output:
-1   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
if((x%2==0 && y%3==0) || (x%3==0 && y%2==0))
{
    printf("%d",z);
}
else if((x%2==0 && z%3==0) || (z%2==0 && x%3==0))
{
    printf("%d",y);
}
else if((y%2==0 && z%3==0) || (z%2==0 && y%3==0))
{
    printf("%d",x);
}
else
{
    printf("-1");
}
}
