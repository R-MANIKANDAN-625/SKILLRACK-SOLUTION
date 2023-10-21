/*Square of N to N

The program must accept an integer N as the input. The program must print the integers from the square of N to N as the output.

Example Input/Output 1:
Input:
5

Output:
25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5

Example Input/Output 2:
Input:
3

Output:
9 8 7 6 5 4 3   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
for(int i=n*n;i>=n;i--)
{
    printf("%d ",i);
}
}
