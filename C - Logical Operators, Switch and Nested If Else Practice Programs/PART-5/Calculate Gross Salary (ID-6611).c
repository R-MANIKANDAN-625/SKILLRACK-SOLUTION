/*Calculate Gross Salary

The program must accept an integer S representing the salary of an employee as the input.
The program must calculate the gross salary with precision up to 2 decimal places based on the below conditions.

If S <= 10000 then HRA = 20%, DA = 80%
If S <= 20000 then HRA = 25%, DA = 90%
If S > 20000 then HRA = 30%, DA = 95%

Formula: HRA = S * (HRA/100), DA = S * (DA/100), Gross salary = S + HRA + DA.
Example Input/Output 1:
Input:
22000

Output:
49500.00

Explanation:
S = 22000
HRA  = 22000 * (30/100) = 6600.00
DA = 22000 * (95/100) = 20900.00
Gross salary = 22000 + 6600.00 + 20900.00 = 49500.00

Example Input/Output 2:
Input:
16012

Output:
34425.80
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
float a,b;
scanf("%f",&a);
if(a<=10000)
{
    b=a*(20/100.0) + a*(80/100.0);
    printf("%.2f",b+a);
}
else if(a<=20000)
{
    b=a*(25/100.0) + a*(90/100.0);
    printf("%.2f",b+a);
}
else
{
    b=a*(30/100.0) + a*(95/100.0);
    printf("%.2f",b+a);
}
}
