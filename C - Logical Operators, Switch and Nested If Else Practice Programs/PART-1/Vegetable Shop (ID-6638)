/* Vegetable Shop

Tarzan visits a vegetable shop with A number of 1 rupee coins, B number of 2 rupee coins, 
C number of 5 rupee coins and D number of 10 rupee coins. He bought vegetables for X rupees. 
The program must accept the values of A, B, C, D and X as the input.

If Tarzan exactly has Rs.X in his hand, then the program must print Paid as the output.
If he has more amount than Rs.X , then print Paid with the amount remaining in hand as the output.
If he has less amount in hand than Rs.X, then print Not Paid followed by the amount in hand as the output.

Example Input/Output 1:
Input:
2 5 10 5
112

Output:
Paid

Example Input/Output 2:
Input:
5 16 3 12
150

Output:
Paid 22

Example Input/Output 3:
Input:
10 13 15 20
411

Output:
Not Paid 311 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,c,d,x;
int sum;
scanf("%d %d %d %d",&a,&b,&c,&d);
scanf("%d ",&x);
a=a*1;
b=b*2;
c=c*5;
d=d*10;
sum=a+b+c+d;
if (sum==x)
{
    printf("Paid");
}
else if(sum<x)
{
    printf("Not Paid %d",sum);
}
else
{
    printf("Paid %d",sum-x);
}
}
