/*Even Integers in Descending Order

The program must accept a positive integer array of size N as the input. The program must print the even integers in the array in descending order as the output.
Note: Atleast one integer is even in the array.

Boundary Condition(s):
5 <= N <= 50

Example Input/output 1:
Input:
5
45 67 587 48 398

Output:
398 48

Example Input/Output 2:
Input:
6
82 374 785 983 2714 9098

Output:
9098 2714 374 82   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,x,k=0;
scanf("%d ",&n);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d ",&x);
    if(x%2==0)
    {
        a[k++]=x;
    }
}
for(int i=0;i<k;i++)
{
    for(int j=0;j<k;j++)
    {
        if(a[i]>a[j])
        {
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
}
for(int i=0;i<k;i++)
{
    printf("%d ",a[i]);
}
}
