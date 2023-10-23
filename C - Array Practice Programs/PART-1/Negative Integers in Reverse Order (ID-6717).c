/*Negative Integers in Reverse Order

The program must accept an integer array of size N as the input. The program must print the negative integers in the array in reverse order
as the output. If there is no negative integer in the array, then the program must print -1 as the output.

Boundary Condition(s):
3 <= N <= 50
-100 <= Each Integer <= 100

Example Input/Output 1:
Input:
5
45 -89 -28 38 49

Output:
-28 -89

Example Input/Output 2:
Input:
3
12 34 56

Output:
-1        */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,f=1;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
}
for(int i=n-1;i>=0;i--)
{
    if(a[i]<0)
    {
        printf("%d ",a[i]);
        f=0;
    }
}
if (f)
{
    printf("-1");
}
}
