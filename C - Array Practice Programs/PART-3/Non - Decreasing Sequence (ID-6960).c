/*Non - Decreasing Sequence

The program must accept an array of positive integers of size N as the input. The program must print Valid if the integers in the array 
is a non-decreasing sequence. Else the program must print Invalid as the output.

Boundary Condition(s):
3 <= N <= 50
1 <= Each Integer <= 99

Example Input/Output 1:
Input:
5
4 5 3 1 2

Output:
Valid

Example Input/Output 2:
Input:
4
8 7 3 1

Output:
Invalid     */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,f=1;
scanf("%d ",&n);
int a[n],c=0;
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
}
for(int i=0;i<n;i++)
{
    if(a[i]>a[i+1])
    {
        c++;
    }
}
if(c!=n-1)
{
    printf("Valid");
}
else 
{
    printf("Invalid");
}
}
