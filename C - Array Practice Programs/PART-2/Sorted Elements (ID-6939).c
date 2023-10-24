/*Sorted Elements

The program must accept N integers as the input. The program must print the integers in the following order smallest integer, largest integer, second smallest integer, second largest integer and so on.

Boundary Condition(s):
2 <= N <= 100

Example Input/Output 1:
Input:
6
10 12 8 9 11 5

Output:
5 12 8 11 9 10 

Example Input/Output 2:
Input:
5
9 1 18 2 7

Output:
1 18 2 9 7   */

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
    for(int j=i+1;j<n;j++)
    {
        if(a[i]<a[j])
        {
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
}
for(int i=0;i<n/2;i++)
{
    printf("%d %d ",a[n-1-i],a[i]);
}
if(n%2!=0)
{
    printf("%d ",a[n/2]);
}
}
