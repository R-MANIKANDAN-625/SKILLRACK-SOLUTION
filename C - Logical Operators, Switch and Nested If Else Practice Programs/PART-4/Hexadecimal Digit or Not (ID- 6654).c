/* Hexadecimal Digit or Not

A character is passed as the input to the program. The program must print Valid if the character is a valid hexadecimal digit.
Else the program must print Invalid as the output.

Example Input/Output 1:
Input:
a

Output:
Valid

Example Input/Output 2:
Input:
t

Output:
Invalid

Example Input/Output 3:
Input:
F

Output:
Valid     */

// here the hex decimal are "A" to "F"

#include<stdio.h>
#include<stdlib.h>

int main()
{
char a;
scanf(" %c",&a);
a=toupper(a);
if(a>=65 && a<=70)
{
    printf("Valid");
}
else
{
    printf("Invalid");
}
}
