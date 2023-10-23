/*Largest Unit Digits Integers

The program must accept N integers as the input. The program must print the integers having the largest unit digit among the given N 
integers as the output.

Boundary Condition(s):
1 <= N <= 1000

Input Format:
The first line contains N.
The second line contains N integers separated by space.

Output Format:
The first line integers separated by a space.

Example Input/Output 1:
Input:
5
41 57 65 84 27

Output:
57 27

Explanation:
7 is the largest unit digit of given integers so all the integers which unit digit as 7 are printed.

Example Input/Output 2:
Input:
6
57 78 148 9685 321 458

Output:
78 148 458    */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,m=-1;
scanf("%d ",&n);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
    if(a[i]%10>m)
    {
        m=a[i]%10;
    }
}
for(int i=0;i<n;i++)
{
    if(m==a[i]%10)
    {
        printf("%d ",a[i]);
    }
}
}
