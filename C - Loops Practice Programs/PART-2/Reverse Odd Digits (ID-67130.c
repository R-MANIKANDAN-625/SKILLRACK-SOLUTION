/*Reverse Odd Digits 

The program must accept an integer N as the input. The program must print the odd digits of N in reverse order as the output.
If there is no odd digit in N then print -1 as the output.

Example Input/Output 1:
Input:
327485

Output:
573

Example Input/Output 2:
Input:
286464

Output:
-1  */


#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,f=1;
scanf("%d ",&n);
while(n>0)
{
    m=n%10;
    if(m%2!=0)
    {
        printf("%d ",m);
        f=0;
    }
    n/=10;
}
if(f)
{
    printf("-1");
}
}
