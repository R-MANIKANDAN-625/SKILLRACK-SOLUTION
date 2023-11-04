/*Product between Negative Integers

The program must accept N integers as the input. The program print the product of the integers which are present between two negative integers as the output.

Note: Atleast two negative integers will be present.

Boundary Condition(s):
1 <= N <= 10^5

Input Format:
The first line contains the integer N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains the product of the integers which are present between two negative integers.

Example Input/Output 1:
Input:
9
10 -12 3 4 2 -24 5 3 -15

Output:
24 15

Explanation:
The first two negative elements are -12 and -24. The elements between -12 and -24 are 3, 4 and 2 and their product is 24. So 24 is printed.
Then the next two negative elements are -24 and -15. The elements between -24 and -15 are 5 and 3 and their product is 15. So 15 is printed.

Example Input/Output 2:
Input:
8
-10 20 3 -45 10 20 22 -4

Output:
60 4400   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,j,k;
long long int s;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
}
for(i=0;i<n;i++)
{
    if(a[i]<0)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<0)
            {
                s=1;
                for(k=i+1;k<j;k++)
                {
                    s*=a[k];
                }
                if(s==1&&j-i==1)
                {
                    s=0;
                }
                printf("%lld ",s);
                i=j;
            }
        }
    }
}
}
