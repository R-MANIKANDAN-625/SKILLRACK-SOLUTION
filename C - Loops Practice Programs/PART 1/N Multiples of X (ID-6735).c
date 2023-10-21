/*N Multiples of X

The program must accept three integers N, X and Y as the input. The program must print the first N multiples of X which 
are not divisible by Y as the output.

Note: The value of X is not equal to Y.

Example Input/Output 1:
Input:
10
2 6

Output:
2 4 8 10 14 16 20

Example Input/Output 2:
Input:
13
5 8

Output:
5 10 15 20 25 30 35 45 50 55 60 65   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,x,y;
scanf("%d %d %d",&n,&x,&y);
for(int i=x;i<=n*x;i+=x)
{
    if(i%y==0)
    {
        continue;
    }
    printf("%d ",i);
}
}
