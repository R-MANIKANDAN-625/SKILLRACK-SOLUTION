/* Count of Positive, Negative and Zeroes

The program must accept N integers as the input. The program must print the count of positive integers, negative integers and zeroes as the output.

Example Input/Output 1:
Input:
6
9 0 -1 -5 -10 0

Output:
1 3 2

Example Input/Output 2:
Input:
7
4 0 -10 -13 8 9 0

Output:
3 2 2   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int N,p=0,n=0,z=0,a;
scanf("%d",&N);
for(int i=0;i<N;i++)
{
    scanf("%d ",&a);
    if(0<a)
    {
        p++;
    }
    else if(a==0)
    {
        z++;
    }
    else
    {
        n++;
    }
}
printf("%d %d %d",p,n,z);
}
