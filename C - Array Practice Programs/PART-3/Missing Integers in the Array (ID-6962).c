/*Missing Integers in the Array

The program must accept an integer array of size N as the input. The program must find the minimum and the maximum integers in the array
as X and Y. Then the program must print all the integers from X to Y which are not present in the given array. If all the integers are 
present in the array then the program must print -1 as the output.

Boundary Condition(s):
1 <= N <= 100
1 <= Array Element Value <= 1000

Example Input/Output 1:
Input:
5
6 4 2 7 4  

Output:
3 5  

Explanation:
The minimum integer from the array is 2.
The maximum integer from the array is 7.
The integers between 2 to 7 are 3 4 5 and 6. Here 4 and 6 are present in the array.
The integers 3 and 5 are not present in the array.
Hence the output is 3 5

Example Input/Output 2:
Input:
8
1 2 2 2 8 9 9 10

Output:
3 4 5 6 7 

Example Input/Output 3:
Input:
4
8 5 7 6

Output:
-1     */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,min=9999,max=-1;
scanf("%d ",&n);
int a[n],flag=1;
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
    if(min>a[i])
    {
        min=a[i];
    }
    if(max<a[i])
    {
        max=a[i];
    }
}
int b[1000]={0};
for(int i=0;i<n;i++)
{
    b[a[i]-min]++;
}
for(int i=min;i<=max;i++)
{
    if(!(b[i-min]))
    {
        printf("%d ",i);
        flag=0;
    }
}
if(flag)
{
    printf("-1");
}
}
