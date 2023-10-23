/*Sum of Left Side Element(s)

The program must accept N integers as the input. The program must print the sum of all the elements present to the left side of each integer in the reverse order as the output.

Boundary Condition(s):
2 <= N <= 10^4

Input Format:
The first line contains the integer N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains N integer separated by space(s).

Example Input/Output 1:
Input:
5
90 10 20 80 50

Output:
200 120 100 90 0 

Explanation:
For element 90, there is no element present to the left side. So the sum is 0.
For element 10, the sum of the element present to the left side is 90 (90). 
For element 20, the sum of the elements present to the left side is 100 (90+10). 
For element 80, the sum of the elements present to the left side is 120 (90+10+20). 
For element 50, the sum of the elements present to the left side is 200 (90+10+20+80).
The elements in the reverse order are 200, 120, 100, 90 and 0
Hence the output 200 120 100 90 0 

Example Input/Output 2:
Input:
4
125 5 20 15 225

Output:
150 130 125 0      */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d ",&n);
int a[n];
for(int i=n-1;i>=0;i--)
{
    scanf("%d ",&a[i]);
}
for(int i=0;i<n;i++)
{
    int s=0;
    for(int j=i+1;j<n;j++)
    {
        s+=a[j];
    }
    printf("%d ",s);
}
}
