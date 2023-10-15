/*Online Deliverers

The program must accept a lower case alphabet CH representing the online deliverers and 
the number of food items N to be ordered as the input. Each online deliverer accepts 
the order only if N is less than or equal to the limit. The program must print  the name of
the online deliverer and the status of the order (ACCEPT or REJECT).

The possible values of CH and the related details is given below.
- b represents box8 with delivery limit as 3.
- f represents foodpanda with delivery limit as 2.
- s represents swiggy with delivery limit 5.
- z represents zomato with delivery limit 4.
- For any other value of CH print INVALID.

Example Input/Output 1:
Input:
s 5

Output:
swiggy - ACCEPT

Example Input/Output 2:
Input:
p 2

Output:
INVALID

Example Input/Output 3:
Input:
z 5

Output:
zomato - REJECT */

#include<stdio.h>
#include<stdlib.h>

int main()
{
char ch;
int n;
scanf(" %c %d",&ch,&n);
if (ch=='s')
{
    if (n<=5)
    {
        printf("swiggy - ACCEPT");
    }
    else
    {
        printf("swiggy - REJECT");
    }
}
else if(ch=='f')
{
    if(n<=2)
    {
        printf("foodpanda - ACCEPT");
    }
    else 
    {
        printf("foodpanda - REJECT");
    }
}
else if(ch=='b')
{
    if(n<=3)
    {
        printf("box8 - ACCEPT");
    }
    else
    {
        printf("box8 - REJECT");
    }
}
else if(ch=='z')
{
    if(n<=4)
    {
        printf("zomato - ACCEPT");
    }
    else
    {
        printf("zomato - REJECT");
    }
}
else
{
    printf("INVALID");
}
}
