/*Print Century

The program must accept two integers X and Y as the input. The program must print the output based on the below conditions,

    - If both X and Y are greater than or equal to 100 print XYCENTURY 
    - If X is greater than or equal to 100 and Y is more than 50 print XCENTURY
    - If Y is greater than or equal to 100 and X is more than 50 print YCENTURY
    - If X is greater than or equal to 100 and Y is less than 50 print XCENTURYSMALLY
    - If Y is greater than or equal to 100 and X is less than 50 print YCENTURYSMALLX
    - If X is greater than or equal to 100 and Y is equal to 50 print YHALFCENTURY
    - If Y is greater than or equal to 100 and X is equal to 50 print XHALFCENTURY

Example Input/Output 1:
Input:
120 50

Output:
YHALFCENTURY

Example Input/Output 2:
Input:
90 100

Output:
YCENTURY */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y;
scanf("%d %d",&x,&y);
if(x>=100 && y>=100)
{
    printf("XYCENTURY");
}
else if(x>=100 && y>50)
{
    printf("XCENTURY");
}
else if(y>=100 && x>50)
{
    printf("YCENTURY");
}
else if(x>=100 && y<50)
{
    printf("XCENTURYSMALLY");
}
else if(y>=100 && x<50)
{
    printf("YCENTURYSMALLX");
}
else if(x>=100 && y==50)
{
    printf("YHALFCENTURY");
}
else if(y>=100 && x==50)
{
    printf("XHALFCENTURY");
}
}
