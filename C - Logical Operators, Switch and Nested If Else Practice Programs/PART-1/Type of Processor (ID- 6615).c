//Type of processor

/*
Rahul has Rs.X and decides to buy a laptop. He goes to an electronics showroom and his purchasing ability is as given below.

He buys I3 processor laptop when X = 25000
He buys I5 processor laptop  when 25000 < X < 50000
He buys I7 processor laptop when 50000 <= X 

The program must print the type of processor based on the above conditions,

Example Input/Output 1:
Input:
25000

Output:
I3

Example Input/Output 2:
Input:
100000

Output:
I7 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int x;
scanf("%d",&x);
if (x==25000)
{
    printf("I3");
}
else if(x<50000 && x>25000)
{
    printf("I5");
}
else
{
    printf("I7");
}
}
