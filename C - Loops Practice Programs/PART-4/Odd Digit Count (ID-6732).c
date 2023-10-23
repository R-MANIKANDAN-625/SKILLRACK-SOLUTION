/*Odd Digit Count

The program must accept an integer N as the input. The program must print YES if the count of odd digits in N is greater than or equal to
the unit digit of N. Else the program must print NO as the output.

Example Input/Output 1:
Input:
423434

Output:
NO

Example Input/Output 2:
Input:
35436473

Output:
YES    */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,u,o=0;
scanf("%d",&n);
u=n%10;
while(n>0)
{
    if((n%10)%2!=0)
    {
        o++;
    }
    n/=10;
}
printf("%s",(u<=o)?"YES":"NO");
}
