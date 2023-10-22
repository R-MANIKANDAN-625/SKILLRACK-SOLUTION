/*Multiples of 4 - Y to X

The program must accept two integers X and Y as the input. The program must print all the multiples of 4 from Y to X. If there is no multiple of 4 from Y to X then the program must print -1 as the output.

Boundary Conditions:
1 <= X <= Y
X <= Y <= 10000 

Example Input/Output 1:
Input:
2 20

Output:
20 16 12 8 4

Example Input/Output 2:
Input:
10 100

Output:
100 96 92 88 84 80 76 72 68 64 60 56 52 48 44 40 36 32 28 24 20 16 12

Example Input/Output 3:
Input:
2 3

Output:
-1       */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y,f=1;
scanf("%d %d",&x,&y);
for(int i=y;i>=x;i--)
{
    if(i%4==0)
    {
        printf("%d ",i);
        f=0;
    }
}
if(f)
{
    printf("-1");
}
}
