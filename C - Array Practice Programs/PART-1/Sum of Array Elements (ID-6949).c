/*Sum of Array Elements

The program must accept N integers as the input. The program must print the sum of the first and Nth element, then the sum of the second 
and N-1th element and so on. If N is odd then print the middle element also as the output.

Boundary Condition(s):
1 <= N <= 100

Example Input/Output 1:
Input:
5
12 3 4 5 8

Output:
20 8 4

Example Input/Output 2:
Input:
8
9 8 2 1 10 2 3 7    

Output:
16 11 4 11      */


#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
}
for(int i=0;i<n/2;i++)
{
    printf("%d ",a[i]+a[n-i-1]);
}
if(n%2!=0)
{
    printf("%d",a[n/2]);
}
}
