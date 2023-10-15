/*Water Level

The program must accept the count of clothes X to be washed in a washing machine as the input. 
The program must print the corresponding level of the water required to wash the clothes as 
the output based on the following conditions.

If X is above 3 and below 5, then print S.
If X is 5 or above 5 and below 10, then print M.
If X is 10 or above 10 and below 15, then print L.
If X is 15 or above 15 and below 20, then print XL.
If X is 20 or above 20, then print XXL.
Else the program must print Load the clothes as the output.

Example Input/Output 1:
Input:
7

Output:
M

Example Input/Output 2:
Input:
2

Output:
Load the clothes  */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int x;
scanf("%d ",&x);
if(x>3 && x<5)
{
    printf("S");
}
else if(x>=5 && x<10)
{
    printf("M");
}
else if(x>=10 && x<15)
{
    printf("L");
}
else if(x>=15 && x<20)
{
    printf("XL");
}
else if(x>=20)
{
    printf("XXL");
}
else
{
    printf("Load the clothes");
}
}
