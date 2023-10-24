/*Odd and Even Integers in Array

The program must accept an array of size N as the input. The program must print the product of two integers if an odd integer is followed
by an even integer. The program must print the sum of two integers if an even integer is followed by an odd integer. Else the program must
print the two integers.

Boundary Condition(s):
3 <= N <= 50
1 <= Each Integer <= 99

Example Input/Output 1:
Input:
5
1 2 3 4 5

Output:
2 5 12 9

Example Input/Output 2:
Input:
4
1 3 5 7

Output:
1 3 3 5 5 7

Example Input/Output 3:
Input:
8
2 4 6 8 10 12 14 16

Output:
2 4 4 6 6 8 8 10 10 12 12 14 14 16    */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
}
for(int i=0;i<n-1;i++)
{
    if(a[i]%2==0 && a[i+1]%2!=0)
    {
        printf("%d ",a[i]+a[i+1]);
    }
    else if(a[i]%2!=0 && a[i+1]%2==0)
    {
        printf("%d ",a[i]*a[i+1]);
    }
    else
    {
        printf("%d %d ",a[i],a[i+1]);
    }
}
}
