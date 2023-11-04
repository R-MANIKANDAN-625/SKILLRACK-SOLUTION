/*Integers Occurring Odd Number of Times

The program must accept an integer array of size N as the input. The program must print the integers that are occurring odd number of times
in the array as the output. If there is no integer occurring odd number of times, then the program must print -1 as the output.

Boundary Condition(s):
3 <= N <= 100
1 <= Each integer < 100

Example Input/Output 1:
Input:
5
2 3 3 4 5

Output:
2 4 5

Example Input/Output 2:
Input:
4
21 11 21 11

Output:
-1    */

#include<stdio.h>
#include<stdlib.h>
//hari mani
int main()
{
int a[1000],n,i,j,m,f=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    m=0;
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            m+=1;
            a[j]=0;
        }
    }
    if(m%2==0&&a[i]!=0)
    {
        printf("%d ",a[i]);
        f=1;
    }
}
if(f==0)
{
    printf("-1");
}
}
