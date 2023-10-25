/*Common Integers - Two Arrays

The program must accept two positive integer arrays of size N1 and N2. The program must print the common elements in both the arrays in 
the ascending order as the output. If both the arrays have no common elements then the program must print -1 as the output.

Boundary Condition(s):
1 <= N1, N2 <= 50
0 <= Array Element Value <= 1000

Example Input/Output 1:
Input:
5 7
1 2 4 8 0
10 23 2 8 10 0 1 

Output:
0 1 2 8

Example Input/Output 2:
Input:
6 4
4 1 9 2 16 2 
0 5 10 15 

Output:
-1    */


#include<stdio.h>
#include<stdlib.h>
//hari mani
int main()
{
int a[100],b[100],c[100],i,j,k=0,n,m;
scanf("%d",&n);
scanf("%d",&m);
for(i=0;i<n;i++)
{
     scanf("%d",&a[i]);
}
for(j=0;j<m;j++)
{
    scanf("%d",&b[j]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        if(a[i]==b[j])
        {
           c[k++]=a[i];
        }
    }
}
for(i=0;i<k;i++)
{
    for(j=i+1;j<k;j++)
    {
        if(c[i]>c[j])
        {
           int t=c[i];
           c[i]=c[j];
           c[j]=t;
        }
    }
}
int d=-1;
for(i=0;i<k;i++)
{
    if(d==c[i])
    {
        continue;
    }
    d=c[i];
    printf("%d ",c[i]);
}
}
