/*Sum of the Series

The program must accept an integer N as the input. The program must calculate and print the sum of the series (1), (1+2), (1+2+3), ... , (1+2+3+...+N) upto N terms as the output.

Example Input/Output 1:
Input:
5

Output:
35

Explanation:
The series is (1) (1 + 2) (1 + 2 + 3) (1 + 2 + 3 + 4) (1 + 2 + 3 + 4 + 5).
The sum of the series is 35.
Hence 35 is printed

Example Input/Output 2:
Input:
6

Output:
56   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,b=0,c=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
   b=b+i;
   c=b+c;
}
printf("%d ",c);
}
