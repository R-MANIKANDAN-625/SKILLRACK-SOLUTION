/*Books Price to Pay

The program must accept three integers representing a discount percentage D, count of books N and the price of one book P as the input. 
For each book, the discount percentage is decremented by one (until D >= 0) and applied on P. The program must calculate and print 
the total price of N books with precision up to 2 decimal places as the output.

Example Input/Output 1:
Input:
5 5
100

Output:
485.00

Explanation:
For the first book, the price is 95.00.
For the second book, the price is 96.00.
For the third book, the price is 97.00.
For the fourth book, the price is 98.00.
For the fifth book, the price is 99.00.
The total price of five books is 485.00.
Hence 485.00 is printed

Example Input/Output 2:
Input:
3 6
20

Output:
118.80   */


#include<stdio.h>
#include<stdlib.h>

int main()
{
float d,n,p,x=0;
scanf("%f %f",&d,&n);
scanf("%f",&p);
while(n>0)
{
    if(d>=0)
    {
        x+=p-(p*(d/100.0));
        d--;
    }
    else
    {
        x+=p;
    }
    n--;
}
printf("%.2f",x);
}
