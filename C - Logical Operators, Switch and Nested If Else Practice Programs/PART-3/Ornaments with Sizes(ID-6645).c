/* The size S of an item which is to be purchased and the purchase amount A are passed as the input to the program. 
The program must print the item name which can be purchased with the amount A as the output.

The conditions to purchase the items based on S and A are given below.
   - The items available for the price below 100 are ring and earring.
   - The items available for the price 100 are necklace and anklet.
   - The items available for the price above 100 are bangles and chain.
   - The items available in small size (s or S) are ring, necklace and bangles.
   - The items available in large size (l or L) are earring, anklet and chain.


Example Input/Output 1:
Input:
s 50

Output:
ring

Example Input/Output 2:
Input:
L 150

Output:
chain         */

#include<stdio.h>
#include<stdlib.h>

int main()
{
char s;
int a;
scanf(" %c %d",&s,&a);
if(s=='S' || s=='s')
{
    if(a<100)
    {
        printf("ring");
    }
    else if(a==100)
    {
        printf("necklace");
    }
    else
    {
        printf("bangles");
    }
}
else if(s=='l' || s=='L')
{
    if(a<100)
    {
        printf("earring");
    }
    else if(a==100)
    {
        printf("anklet");
    }
    else
    {
        printf("chain");
    }
}
}
