/*Sum of N Integers Except Current Integer

The program must accept N integers as the input. The program must print the sum of the N integers except for the current integer. 

Boundary Condition(s):
1 <= N <= 100

Example Input/Output 1:
Input:
5
1 4 6 3 9 

Output:
22 19 17 20 14

Example Input/Output 2:
Input:
9
-10 83 7 -1 9 -5 -19 -21 10  

Output:
63 -30 46 54 44 58 72 74 43     */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,s=0;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
    s+=a[i];
}
for(int i=0;i<n;i++)
{
    printf("%d ",s-a[i]);
}
}
