/*Call Cost

Stephen wants to call his friend from his mobile phone. Let the call duration (in minutes) of the call be X.
The rate cutter plan type represented by Y is also passed as the input. 
The program must print the cost (in rupees with precision up to 2 decimal places) of the call based on the below rate cutter plans.

Type 1 - 1 paise/6 sec
Type 2 - 25 paise/min
Type 3 - 50 paise/min
For any other type -> 1 rupee/min (no offer is provided)

Example Input/Output 1:
Input:
10 1

Output:
1.00

Explanation:
Type 1 - 1 paise/6 sec
Total number of seconds = 10 * 60 = 600 sec
Total cost in paise = 600 / 6 = 100 paise
Total cost in rupee = 100 / 100 = 1 rupee
Hence the output is 1.00

Example Input/Output 2:
Input:
10 2

Output:
2.50   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
float x,a;
int y;
scanf("%f %d",&x,&y);
if (y==1)
{
    a=x*60.0;
    a=a/6.0;
    a=a/100;
    printf("%.2f",a);
}
else if(y==2)
{
    printf("%.2f",x*0.25);
}
else if(y==3)
{
    printf("%.2f",x*0.5);
}
else
{
    printf("%.2f",x);
}
}
