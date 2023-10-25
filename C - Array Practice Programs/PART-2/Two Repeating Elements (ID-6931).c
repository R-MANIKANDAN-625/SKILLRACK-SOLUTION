/*Two Repeating Elements

The program must accept N positive integers as the input.  The program must print two elements which are duplicated in the given 
array in descending order.

Note: The array must contain atleast two repeating elements.

Boundary conditions(s):
1 <= N <= 100
1 <= Array Element Value <= 1000

Example Input/Output 1:
Input:
7
2 4 5 5 4 4 2

Output:
5 4 

Example Input/Output 2:
Input:
5
1 0 3 0 1

Output:
1 0   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,m=-1,c=0;
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
for(int i=0;i<n-1;i++)
{
    if(a[i]!=m && c<2 && a[i]==a[i+1])
    {
        printf("%d ",a[i]);
        c++;
    }
    m=a[i];
}
}
