/*Consecutive Digits

The program must accept an integer N as the input. The program must print the digit(s) which are consecutively repeated in the integer N  
in reverse order as the output. If there is no consecutive repeated digit, then print -1 as the output.

Example Input/Output 1:
Input:
8922909990

Output:
92

Example Input/Output 2:
Input:
8929090

Output:
-1     */

#include<stdio.h>
#include<stdlib.h>
//hari mani solved 1½ hrs
int main()
{
unsigned long long int a,p,f=0,c,m=-1;
scanf("%llu",&a);
p=a%10;a=a/10;
while(a>0)
{
    c=a%10;
     if(p!=c)
    {
        m=p;
    }
    if(c==p&&m!=c)
    {
        printf("%llu",c);
        f=1;
        m=c;
    }
    p=c;
    a=a/10;
}
if(f==0)
printf("-1");
}
