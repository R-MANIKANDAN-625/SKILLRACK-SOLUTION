/*Forward and Reverse Order in an Array

The program must accept an array of positive integers of size N as the input. The program must print the even numbers in the 
array in forward order followed by the odd numbers in the array in reverse order as the output.

Boundary Condition(s):
3 <= N <= 100

Example Input/Output 1:
Input:
5
24 56 73 88 97

Output:
24 56 88 97 73

Example Input/Output 2:
Input:
5
37 98 57 44 11

Output:
98 44 11 57 37      */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d ",&n);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
}
for(int i=0;i<n;i++)
{
    if(a[i]%2==0)
    {
        printf("%d ",a[i]);
    }
}
for(int i=n-1;i>=0;i--)
{
    if(a[i]%2!=0)
    {
        printf("%d ",a[i]);
    }
}
}
