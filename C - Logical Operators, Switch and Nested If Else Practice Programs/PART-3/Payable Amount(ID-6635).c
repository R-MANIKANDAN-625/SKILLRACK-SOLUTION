Payable Amount

The program must accept a character representing the gender (boy or girl) and an integer A representing the age of the customer as the input. The program must print the amount to be charged for the customer.
The charges vary based on gender and age which is given below.

/* Pricing Details:
If Gender is G or g (Girl),
    If the age is in the from 1 to 5, then Rs. 150 is charged.
    If the age is in the from 6 to 20, then Rs. 300 is charged.
    If the age is in the from 21 to 50, then Rs. 200 is charged.
    If the age is above 50, then Rs. 180 is charged.
If Gender is B or b (Boy),
    If the age is in the from 1 to 5, then Rs. 100 is charged.
    If the age is in the from 6 to 20, then Rs. 250 is charged.
    If the age is in the from 21 to 50, then Rs. 150 is charged.
    If the age is above 50, then Rs. 120 is charged.

Example Input/Output 1:
Input:
g 5

Output:
Rs. 150

Example Input/Output 2:
Input:
B 20

Output:
Rs. 250  */

#include<stdio.h>
#include<stdlib.h>

int main()
{
char g;
int a;
scanf(" %c %d",&g,&a);
if (g=='g' || g=='G')
{
    if(a>=1 && a<=5)
    {
        printf("Rs. 150");
    }
    else if(a>=6 && a<=20)
    {
        printf("Rs. 300");
    }
    else if(a>=21 && a<=50)
    {
        printf("Rs. 200");
    }
    else
    {
        printf("Rs. 180");
    }
}
else if(g=='b' || g=='B')
{
    if(a>=1 && a<=5)
    {
        printf("Rs. 100");
    }
    else if(a>=6 && a<=20)
    {
        printf("Rs. 250");
    }
    else if(a>=21 && a<=50)
    {
        printf("Rs. 150");
    }
    else
    {
        printf("Rs. 120");
    }
}
}
