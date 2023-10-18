/*Validate Expression

The program must accept three positive integers interlaced with two operators (=, +, -, * and %) as the input.
The program must print Valid if the expression is valid (RHS = LHS). Else the program must print Invalid as the output.

Example Input/Output 1:
Input:
5+2=7

Output:
Valid

Example Input/Output 2:
Input:
2=12-10

Output:
Valid

Example Input/Output 3:
Input:
11=11=11

Output:
Valid

Example Input/Output 4:
Input:
6=6=8

Output:
Invalid     */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y,z,k;
char a,b;
scanf("%d%c%d%c%d",&x,&a,&y,&b,&z);
if(a=='+')
{
    k=x+y;
    if(b=='='&&k==z)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}
else if(a=='-')
{
    k=abs(x-y);
    if(b=='='&&k==z)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}
else if(a=='*')
{
    k=x*y;
    if(b=='='&&k==z)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}
else if(a=='%')
{
    k=x%y;
    if(b=='='&&k==z)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}
else if(a=='=')
{
    if(b=='='&&x==y&&y==z)
    {
        printf("Valid");
    }
    else if(b=='-'&&x==abs(y-z))
    {
        printf("Valid");
    }
    else if(b=='+'&&x==(y+z))
    {
        printf("Valid");
    }
    else if(b=='*'&&x==(y*z))
    {
        printf("Valid");
    }
    else if(b=='%'&&x==(y%z))
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}
else
{
    printf("Invalid");
}
}
