/*Divisible by Unit Digit

The program must accept N integers as the input. The program must print all the integers that are divisible by their unit digit in reverse order. If the unit digit is zero, then the number must be divisible by 10.

Boundary Condition(s):
1 <= N <= 10^4

Input Format:
The first line contains the integer N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains the integers which are divisible by their unit digit.

Example Input/Output 1:
Input:
5
102 554 990 87 544

Output:
544 990 102

Explanation:
The integer 102 is divisible by 2 (the unit digit of 102 is 2).
The integer 554 is not divisible by 4 (the unit digit of 554 is 4).
The integer 990 is divisible by 10.
The integer 87 is not divisible by 7 (the unit digit of 87 is 27).
The integer 544 is divisible by 4 (the unit digit of 554 is 4).
The integers reverse order are 544, 990 and 102
Hence the output is 554 990 102

Example Input/Output 2:
Input:
4
90 0 245 129

Output:
245 90    */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,a,m;
scanf("%d",&n);
int b[n],k=0;
for(int i=0;i<n;i++)
{
    scanf("%d ",&a);
    m=(a%10==0)?10:a%10;
    if(a%m==0 && a!=0)
    {
        b[k++]=a;
    }
}
for(int i=k-1;i>=0;i--)
{
    printf("%d ",b[i]);
}
}
