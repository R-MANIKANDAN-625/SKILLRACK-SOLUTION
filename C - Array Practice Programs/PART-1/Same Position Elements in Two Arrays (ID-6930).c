/*Same Position Elements in Two Arrays

The program must accept the elements of two arrays of size N as the input. The program must print the elements in the same position as the output.

Boundary Condition(s):
3 <= N <= 50
1 <= Each Element < 99999

Example Input/Output 1:
Input:
5
6 7 8 5 3
8 7 5 3 1

Output:
6 8
7 7
8 5
5 3
3 1

Example Input/Output 2:
Input:
3
234 364 756
37 927 2234

Output:
234 37
364 927
756 2234   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int a[n],b[n];
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
}
for(int i=0;i<n;i++)
{
    scanf("%d ",&b[i]);
}
for(int i=0;i<n;i++)
{
    printf("%d %d\n",a[i],b[i]);
}
}
