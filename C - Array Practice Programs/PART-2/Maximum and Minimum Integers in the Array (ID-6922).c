/*Maximum and Minimum Integers in the Array

The program must accept an integer array of size N as the input. The program must print the maximum and the minimum integers in the array as the output.

Boundary Condition(s):
5 <= N <= 50
-9999 <= Each Integer <= 999

Example Input/Output 1:
Input:
5
37 48 29 18 89

Output:
89 18

Example Input/Output 2:
Input:
6   
-37 -93 -98 -123 -3874 -4874

Output:
-37 -4874     */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,a,max=-99999,min=99999;
scanf("%d ",&n);
for(int i=0;i<n;i++)
{
    scanf("%d ",&a);
    if(min>a)
    {
        min=a;
    }
    if(max<a)
    {
        max=a;
    }
}
printf("%d %d",max,min);
}
