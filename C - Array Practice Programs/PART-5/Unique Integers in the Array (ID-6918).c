/*Unique Integers in the Array

The program must accept an integer array of size N as the input. The program must print the unique integers in the array as the output. 
If there is no unique integer in the array, then the program must print -1 as the output.

Boundary Condition(s):
3 <= N <= 100
-100 <= Each Integer <= 999

Example Input/Output 1:
Input:
3
88 76 56

Output:
88 76 56

Example Input/Output 2:
Input:
4
88 77 88 77

Output:
-1     */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[100],i,n,k,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int f1=1,f;
for(i=0;i<n;i++)
{
    f=1;
    for(j=0;j<n;j++)
    {
        if(a[i]==a[j]&&i!=j)
        {
            f=0;
            break;
        }
    }
    if(f==1)
    {
        printf("%d ",a[i]);
        f1=0;
    }
}
if(f1==1)
{
    printf("-1");
}
}
