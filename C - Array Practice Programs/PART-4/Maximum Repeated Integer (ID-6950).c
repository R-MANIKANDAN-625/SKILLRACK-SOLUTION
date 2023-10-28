/*Maximum Repeated Integer

The program must accept an array of positive integers of size N as the input. The program must print the maximum repeated integer in 
the array as the output. If none of the integer is repeated, then print -1 as the output.

Note: There is only one maximum repeated integer in the array.

Boundary Condition(s):
2 <= N <= 50
1 <= Each Integer <= 99

Example Input/Output 1:
Input:
5
2 3 3 2 2

Output:
2

Example Input/Output 2:
Input:
3
12 34 56

Output:
-1      */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,m=1,f=1;
scanf("%d ",&n);
int a[n],b[100]={0},in;
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
    b[a[i]]++;
    if(b[a[i]]>m)
    {
        m=b[a[i]];
        in=a[i];
        f=0;
    }
}
if(!f)
{
    printf("%d ",in);
}
else
{
    printf("-1");
}
}
