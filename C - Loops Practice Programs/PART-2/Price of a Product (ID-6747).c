/*Price of a Product

The program must accept two integers representing a coupon code C and a price of a product P as the input. 
If the count of the digits of C is even, then 20% discount is applied. If the count of the digits of C is odd,then 30% discount is applied.
If all the digits of C are equal, then 50% discount is applied.If more than one conditions are satisfied, then 50% discount is applied.
The program must print the price of the product as the output.

Example Input/Output 1:
Input:
1213 100

Output:
80

Example Input/Output 2:
Input:
12353 100

Output:
70

Example Input/Output 3:
Input:
111 100

Output:
50       */


#include<stdio.h>
#include<stdlib.h>

int main()
{
int c,p,b,n;
scanf("%d%n %d",&c,&n,&p);
int a=c%10,f=1;
c/=10;
float d;
while(c>0)
{
    b=c%10;
    if(a!=b)
    {
        f=0;
    }
    c=c/10;
}
if(f)
{
    d=0.5;
}
else if(n%2==0)
{
    d=0.2;
}
else if(n%2!=0)
{
    d=0.3;
}
else
{
    d=0.0;
}
if(d==0)
{
    printf("%d",p);
}
else
{
    printf("%d",(int)(p*(1-d)));
}
}
