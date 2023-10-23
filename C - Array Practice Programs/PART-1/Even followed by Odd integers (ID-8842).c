/*Even followed by Odd integers

The program must accept N integers as the input. The program must print even integers followed by odd integers as the output.

Boundary Condition(s):
1 <= N <= 1000

Input Format:
The first line contains N.
The second line contains N integers separated by space.

Output Format:
The first line integers separated by a space.

Example Input/Output 1:
Input:
5
23 46 78 10 255

Output:
46 78 10 23 255

Explanation:
The even integers are 46 78 and 10 which are printed first.
Then the odd integers 23 and 255 are printed.

Example Input/Output 2:
Input:
4
44 78 95 62

Output:
44 78 62 95    */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,x,l=0,k=0;
scanf("%d",&n);
int a[n],b[n];
for(int i=0;i<n;i++)
{
    scanf("%d ",&x);
    if(x%2==0)
    {
        a[k++]=x;
    }
    else
    {
        b[l++]=x;
    }
}
for(int i=0;i<k;i++)
{
   printf("%d ",a[i]);
}
for(int i=0;i<l;i++)
{
    printf("%d ",b[i]);
}
}
