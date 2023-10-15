/*
Coffee Shop

Shaan visits a coffee shop. The program must accept the three types of coffee ordered by him as the input.

The available types of coffee are as given below.
E is for Espresso.
C is for Cappuccino.
A is for Caffe Americano.

The coffee shop applies a discount as an offer if all three coffee types are different. Hence the program must print Offer Valid if he orders for three different coffee types. Else the program must print No Offer as the output.

Example Input/Output 1:
Input:
C E A

Output:
Offer Valid

Example Input/Output 2:
Input:
C C E

Output:
No Offer */

#include<stdio.h>
#include<stdlib.h>

int main()
{
char a,b,c;
scanf(" %c %c %c",&a,&b,&c);
if (a!=b && b!=c && c!=a)
{
     printf("Offer Valid");
}
else
{
     printf("No Offer");
}
}
