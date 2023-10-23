/*Sum of Nth Term - Series

The program must accept an integer N as the input. The program must consider the series 1, 1/2, 1/3, 1/4......1/N and
print the sum of the first N terms in the series with precision up to 3 decimal places as the output. 

Example Input/Output 1:
Input:
5

Output:
2.283

Example Input/Output 2:
Input:
2

Output:
1.500     */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
float s=0;
for(int i=1;i<=n;i++)
{
    s+=(float)1/i;
}
printf("%.3f",s);
}
