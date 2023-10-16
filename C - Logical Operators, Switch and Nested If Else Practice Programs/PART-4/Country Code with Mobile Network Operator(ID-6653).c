/*Country Code with Mobile Network Operator

The program must accept a country code X and a mobile number Y as the input. 
The program must print the country name and the mobile network operator name based on the country code and the mobile number.

The available country codes are given below.
- For India, the country code is 91
- For Pakistan, the country code is 92
- For Sri Lanka, the country code is 94
- For Nepal, the country code is 977

The available mobile network operators are given below.
- For Airtel, the mobile number starts with 9 or 8
- For Jio, the mobile number starts with 6 or 7

If any of the input values is not in the list mentioned above, then the program must print INVALID.

Example Input/Output 1:
Input:
91 7887018866

Output:
India Jio

Example Input/Output 2:
Input:
55 9467951352

Output:
INVALID   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
unsigned long long int x,y;
scanf("%llu %llu",&x,&y);
while(y>10)
{
    y/=10;
}
if (x==91)
{
    if(y==9 || y==8)
    {
        printf("India Airtel");
    }
    else if(y==6 || y==7)
    {
        printf("India Jio");
    }
    else
    {
        printf("INVALID");
    }
}
else if(x==92)
{
    if(y==9 || y==8)
    {
        printf("Pakistan Airtel");
    }
    else if(y==6 || y==7)
    {
        printf("Pakistan Jio");
    }
    else
    {
        printf("INVALID");
    }
}
else if(x==94)
{
    if(y==9 || y==8)
    {
        printf("Sri Lanka Airtel");
    }
    else if(y==6 || y==7)
    {
        printf("Sri Lanka Jio");
    }
    else
    {
        printf("INVALID");
    }
}
else if(x==977)
{
    if(y==9 || y==8)
    {
        printf("Nepal Airtel");
    }
    else if(y==6 || y==7)
    {
        printf("Nepal Jio");
    }
    else
    {
        printf("INVALID");
    }
}
else
{
    printf("INVALID");
}
}
