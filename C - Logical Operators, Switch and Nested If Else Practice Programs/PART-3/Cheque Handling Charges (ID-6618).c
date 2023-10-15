/*Cheque Handling Charges

A bank charges Rs.10 per month plus the following cheque handling charges for a current account.

The charges for the cheque handling based on the total number of cheques issued in a month is as below.
- Till 20, it is Rs.15 per cheque leaf
- Till 50, it is Rs.10 per cheque leaf
- Till 100, it is Rs.5 per cheque leaf
- Above 100, it is Rs.2 per cheque leaf

The program must accept number of cheques handled per month as the input and 
print the total amount charged by the bank for that month as the output.

Example Input/Output 1:
Input:
15

Output:
235

Explanation:
Charge for 15 cheques = 15 x 15 = 225
Total charge = 225 + 10 (Monthly charge) = 235

Example Input/Output 2:
Input:
60

Output:
310

Explanation:
Charge for 15 cheques = 60 x 5 = 300
Total charge = 300 + 10 (Monthly charge) = 310
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int a;
scanf("%d",&a);
if(a<=20)
{
    a*=15;
    printf("%d",a+10);
}
else if(a>20 && a<=50)
{
    a*=10;
    printf("%d",a+10);
}
else if(a>50 && a<=100)
{
    a*=5;
    printf("%d",a+10);
}
else
{
    a*=2;
    printf("%d",a+10);
}
}
