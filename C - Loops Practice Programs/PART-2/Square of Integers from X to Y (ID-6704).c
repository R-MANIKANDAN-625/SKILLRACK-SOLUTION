/*Square of Integers from X to Y

The program must accept two integers X and Y as the input. The program must print the square of each integer from X to Y (X <= Y) 
as the output.

Example Input/Output 1:
Input:
5 12

Output:
25 36 49 64 81 100 121 144


Example Input/Output 2:
Input:
4 9

Output:
16 25 36 49 64 81     */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y;
scanf("%d %d",&x,&y);
for(int i=x;i<=y;i++)
{
    printf("%d ",i*i);
}
}
