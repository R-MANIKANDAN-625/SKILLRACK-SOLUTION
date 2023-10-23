/*Sum of Right Side Element(s)

The program must accept N integers as the input. The program must print the sum of all the elements present to the right side of 
each integer as the output. 

Boundary Condition(s):
2 <= N <= 10^4

Input Format:
The first line contains the integer N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains N integers separated by space(s).

Example Input/Output 1:
Input:
5
10 20 30 40 50

Output:
140 120 90 50 0

Explanation:
For integer 10, the sum of the elements present to the right side is 140 (20+30+40+50). So 140 is printed.
For integer 20, the sum of the elements present to the right side is 120 (30+40+50). So 120 is printed.
For integer 30, the sum of the elements present to the right side is 90 (40+50). So 90 is printed.
For integer 40, the sum of the element present to the right side is 50 (50). So 50 is printed.
For integer 50, there is no element present to the right side. So 0 is printed.

Example Input/Output 2:
Input:
6
12 8 22 48 15 25

Output:
118 110 88 40 25 0    */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,s;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
}
for(int i=0;i<n;i++)
{
    s=0;
    for(int j=i+1;j<n;j++)
    {
        s+=a[j];
    }
    printf("%d ",s);
}
}
