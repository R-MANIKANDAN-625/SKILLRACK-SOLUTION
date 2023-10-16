/* Tax Calculation

The yearly income of a person in rupees is passed as the input to the program.
The program must print the tax to be paid with precision up to 2 decimal places based on the tax slabs given below.

Tax slabs:
Income up to 250000 = 0%
Income from 250001 to 500000 = 5% of income exceeding 250000
Income from 500001 to 1000000 = 20% of income exceeding 500000
Above 1000001 = 30% of income exceeding 1000000

Example Input/Output 1:
Input:
210000

Output:
0.00

Example Input/Output 2:
Input:
600000

Output:
32500.00

Explanation:
The yearly income of the person is 600000.
For the first 250000, the tax is 0%.
For the next 250000, the tax is 5%.
For the remaining 100000, the tax is 20%.
So the total tax to be paid is 0 + (5% of 250000) + (20% of 100000).
0 + 12500 + 20000 = 32500.   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
float a,t;
scanf("%f",&a);
//NOTE : DISCOUNT AMOUNT FORMULA = Price - (Price *(Discount/100))
if(a<=250000)
{
    t=0;
}
else if(a<=500000)
{
    t=(a-250000)*0.05;
}
else if(a<=1000000)
{
    t=12500 + (a-500000)*0.2;
}
else
{
    t=112500 + (a-1000000)*0.3;
}
printf("%.2f",t);
}
