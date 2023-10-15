/*
Days in a Month

The program must accept a month M and a year N as the input. The program must print the number of days in the month M as the output. 
If the month is 2 (February) the program must check if it is a leap year or not and then print the number of days accordingly as the output.
If the month is less than 1 or greater than 12 or the year is less than zero  then the program must print Invalid Month as the output.

Example Input/Output 1:
Input:
1 2014

Output:
31 days

Example Input/Output 2:
Input:
2 2004

Output:
29 days   */
#include<stdio.h>
#include<stdlib.h>

int main()
{
int m,n;
scanf("%d %d",&m,&n);
if ((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && n>1000)
{
    printf("31 days");
}
else if ((m==4 || m==6 || m==9 || m==11)&& n>1000)
{
    printf("30 days");
}
else if(m==2)
{
    if(((n%4==0)&&(n%100!=0)) || n%400==0)
    {
        printf("29 days");
    }
    else
    {
        printf("28 days");
    }
}
else 
{
    printf("Invalid Month");
}
}
