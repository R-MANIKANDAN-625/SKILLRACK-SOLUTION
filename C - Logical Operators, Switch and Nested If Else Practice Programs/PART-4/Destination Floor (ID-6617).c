/*Destination Floor

In a five storey building, Sheela is standing in floor X. She needs to go to floor Y. She gets into the lift.
The program must accept the floor Sheela is currently in, the floor which she wants to reach and a character (+ or -) as the input. 
'+' indicates Sheela wants to go up and '-' indicates she wants to go down. 
The program must print Valid if the destination floor obtained by performing the operation between X and Y does not exceed 5 or go below 0.  Else the program must print Invalid as the output.

Example Input/Output 1:
Input:
0 2 +

Output:
Valid

Example Input/Output 2:
Input:
5 1 +

Output:
Invalid

Example Input/Output 3:
Input:
5 1 -

Output:
Valid

Example Input/Output 4:
Input:
2 3 -

Output:
Invalid  */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y;
char c;
scanf("%d %d %c",&x,&y,&c);
if(c=='+')
{
    if(x+y<=5)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}
else if(c=='-')
{
    int t=x-y;
    if(t>=0 && t<=5)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}
}
