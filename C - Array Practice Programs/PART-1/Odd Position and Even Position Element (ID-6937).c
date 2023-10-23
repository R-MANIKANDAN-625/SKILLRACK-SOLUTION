/*Odd Position and Even Position Elements

The program must accept an integer array of size N as the input. The program must print the doubled value of the elements in the array in odd position and the square value of the elements in the array in even position as the output.

Boundary Condition(s):
3 <= N <= 50
1 <= Each element <= 999

Example Input/Output 1:
Input:
5
3 4 5 6 7

Output:
6 16 10 36 14

Example Input/Output 1:
Input:
3
10 24 36

Output:
20 576 72     */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,a;
scanf("%d ",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a);
    if(i%2==0)
    {
        printf("%d ",a*2);
    }
    else
    {
        printf("%d ",a*a);
    }
}
}
