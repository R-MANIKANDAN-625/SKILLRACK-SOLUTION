/*Alphabet at Position

The program must accept an integer N as the input. The program must calculate the sum of digits in N. Then the program must print the corresponding alphabet at the position of the sum as the output. If the value of sum exceeds 26 then the position of the alphabets must be considered circularly (that is the next character of 'z' is 'a').

Note: The alphabet must be printed in lowercase.

Example Input/Output 1:
Input:
1245675

Output:
d

Explanation:
Sum of the digits is 30 (1 + 2 + 4 + 5 + 6 + 7 + 5)
Here the sum is 30 which is greater than 26.
So consider the 27th alphabet as ‘a’, 28th alphabet as ‘b’, 29th alphabet as ‘c’ and 30th alphabet as ‘d’.
Hence the output is d

Example Input/Output 2:
Input:
111

Output:
c      */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,s=0;
scanf("%d",&n);
while(n!=0)
{
    s+=n%10;
    n/=10;
}
printf("%c",'a'+(s-1)%26);
}
