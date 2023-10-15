/* Leap year or Not

The program must accept an integer Y representing a year as the input. The program must check whether the year is a leap year or not. If the year is a leap year the value of Y is not modified and considered as such. If the year is not a leap year, then modify Y based on the below conditions.

    - If Y is divisible by 100, then add 4 to it.
    - If Y is odd, then add 13 to it.
    - If Y is even, then add 14 to it.

Now the program must check if the current value of Y is a leap year or not and print the output accordingly.

Example Input/Output 1:
Input:
2000

Output:
Leap year

Example Input/Output 2:
Input:
2003

Output:
Leap year

Example Input/Output 3:
Input:
2005

Output:
Not a leap year */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y;
scanf("%d",&y);
x=y;
if (y%100==0)
{
    y+=4;
}
else if(y%2!=0)
{
    y+=13;
}
else if(y%2==0)
{
    y+=14;
}
if (((y%4==0 && y%100!=0)||(y%400==0)) || ((x%4==0 && x%100!=0) || (x%400==0)))
{
    printf("Leap year");
}
else
{
    printf("Not a leap year");
}
}
