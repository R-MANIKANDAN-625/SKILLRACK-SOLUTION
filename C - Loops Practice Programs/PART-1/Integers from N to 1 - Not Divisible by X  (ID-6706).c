/*Integers from N to 1 - Not Divisible by X

The program must accept two integers N and X as the input. The program must print the integers from N to 1 which are not divisible by X as the output. 
If all the integers from N to 1 are divisible by X, then the program must print -1 as the output.

Example Input/Output 1:
Input:
10 4

Output:
10 9 7 6 5 3 2 1

Example Input/Output 2:
Input:
4 1

Output:
-1   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,x;
scanf("%d %d",&n,&x);
int f=1;
for(int i=n;i>0;i--)
{
    if(i%x!=0)
    {
        printf("%d ",i);
        f=0;
    }
}
if (f)
{
    printf("-1");
}
}
