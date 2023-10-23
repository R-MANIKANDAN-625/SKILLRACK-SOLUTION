/*Multiple of 3 - Next Digit

The program must accept an integer N as the input. The program must print the digits of N in reverse order 
which has the next digit as the multiple of 3 as the output. If there is no multiple of 3 in the digits of N, 
then the program must print -1 as the output.

Example Input/Output 1:
Input:
13146

Output:
41

Example Input/Output 2:
Input:
12457

Output:
-1        */


#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,f=1;
scanf("%d",&n);
while(n>10)
{
    int a=n%10;
    if(a%3==0)
    {
        printf("%d",(n/10)%10);
        f=0;
    }
    n/=10;
}
if(f)
{
    printf("-1");
}
}
