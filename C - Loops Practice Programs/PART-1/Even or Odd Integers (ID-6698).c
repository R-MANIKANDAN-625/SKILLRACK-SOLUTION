/*Even or Odd Integers

The program must accept four positive integers A, B, C and X as the input. If two or more integers among A, B and C are even, then the program must print the even integers from 1 to X.
Else the program must print the odd integers from X to 1 as the output.

Example Input/Output 1:
Input:
2 4 5 10

Output:
2 4 6 8 10

Example Input/Output 2:
Input:
11 3 6 15

Output:
15 13 11 9 7 5 3 1   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,c,x;
scanf("%d %d %d %d",&a,&b,&c,&x);
if((a%2==0 && b%2==0 && c%2==0) || (a%2==0 && b%2==0) || (b%2==0 && c%2==-0) || (c%2==0 && a%2==0))
{
    for(int i=2;i<=x;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}
else
{
    for(int i=x;i>=0;i--)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
}
}
