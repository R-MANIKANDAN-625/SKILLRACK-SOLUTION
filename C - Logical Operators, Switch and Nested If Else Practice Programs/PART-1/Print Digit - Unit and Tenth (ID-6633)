//Print Digit - Unit and Tenth
/*
The program must accept two integers N and D as the input. If D is 1, then the program must print the unit digit of N as the output. 
If D is 2, then the program must print the tenth digit of N as the output. 
Else the program must print the product of the last two digits of N as the output.

Boundary Condition(s):
10 <= N <= 1000000

Example Input/Output 1:
Input:
14 2

Output:
1

Example Input/Output 2:
Input:
231 5

Output:
3 */


#include<stdio.h>
#include<stdlib.h>

int main()
{
unsigned long long int N; // using llu for boundary condition
int d,ud,td;
scanf("%llu %d",&N,d);
ud=N%10;
td=(N/10)%10;
if(d==1)
{
    printf("%d",ud);
}
else if(d==2)
{
    printf("%d",td);
}
else
{
    printf("%d",ud*td);
}
}
