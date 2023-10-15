/*
Electricity Bill

A customer has consumed X units of power. The program must accept the value of X as the input. The program must print the total electricity charge with precision up to 2 decimal places based on the following conditions.
- If X is in the range from 1 to 100 then the charge is Rs. 2.00/- (per unit)
- If X is in the range from 101 to 200 then the charge is Rs. 3.50/- (per unit)
- If X is in the range from 201 to 500 then the charge is Rs. 4.50/- (per unit)
- If X is more than 500 then the charge is Rs. 6.00/- (per unit)
Goods and Services Tax - 10% of the electricity charge.

Formula: Total electricity charge = GST + electricity charge

Example Input/Output 1:
Input:
85

Output:
187.00

Explanation:
Electricity Charge = 85 x 2 = 170
GST = 10% of 170 = 17
Total Electricity Charge = 170 + 17 = 187
Hence the output is 187.00

Example Input/Output 2:
Input:
149

Output:
573.65

Explanation:
Electricity Charge = 149 x 3.5 = 521.5
GST = 10% of 521.5 = 52.15
Total Electricity Charge = 521.5 + 52.15 = 573.65
Hence the output is 573.65   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
float x,a;
scanf("%f ",&x);
if (x>0 && x<101)
{
    a=x*2.0;
    b=a*0.1;
    printf("%.2f",a+b);
}
else if (x>100 && x<201)
{
    a=x*3.50;
    b=a*0.1;
    printf("%.2f",a+b);
}
else if(x>200 && x<501)
{
    a=x*4.50;
    b=a*0.1;
    printf("%.2f",a+b);
}
else
{
    a=x*6.0;
    b=a*0.1;
    printf("%.2f",a+b);
}
}
