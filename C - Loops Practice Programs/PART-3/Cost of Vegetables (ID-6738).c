/*Cost of Vegetables

The program must accept the number of customers N as the input. Each customer wants to buy X kg(s) of vegetable Y. Y can be either C or  P or T or S.  The cost of available vegetables is given below.
C represents cabbage where 1kg of cabbage costs Rs.34.
P represents potato where 1kg of potato costs Rs.20.
T represents tomato where 1kg of tomato costs Rs.25.
S represents spinach where 1kg of spinach costs Rs.30.
The program must print the total cost required to buy the X kg of vegetable Y by each person as the output. 

Example Input/Output 1:
Input:
4
2 C
4 P
3 T
1 S

Output:
68
80
75
30

Example Input/Output 2:
Input:
2
9 C
8 S

Output:
306
240       */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,x;
scanf("%d",&n);
char c;
for(int i=0;i<n;i++)
{
    scanf("%d %c",&x,&c);
    if(c=='C')
    {
        printf("%d",x*34);
    }
    else if(c=='P')
    {
        printf("%d",x*20);
    }
    else if(c=='T')
    {
        printf("%d",x*25);
    }
    else  if(c=='S') 
    {
        printf("%d",x*30);
    }
    printf("\n");
}
}
