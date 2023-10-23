/*Interlace the Digit(s) of M and N

The program must accept two positive integers M and N with the same number of digits as the input. 
The program must print the digit(s) of M interlaced with the digit(s) of N in the reverse order as the output.

Example Input/Output 1:
Input:
123 765

Output:
536271

Explanation:
After interlacing the digits of M and N, the number is 172635.
The reverse order of the number is 536271.
Hence 536271 is printed.

Example Input/Output 2:
Input:
2233 7788

Output:
83837272      */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int m,n,a,b;
scanf("%d %d",&m,&n);
while(n>0 && m>0)
{
    a=m%10;
    b=n%10;
    printf("%d%d",b,a);
    m/=10;
    n/=10;
}
}
