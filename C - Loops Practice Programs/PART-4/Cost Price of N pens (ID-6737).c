/*Cost Price of N pens

Raju has sold N pens. He sold each pen of Rs.X for a profit of Rs.Y. The program must accept N values of X and Y as the input. 
The program must print the cost price of each pen as the output.

Example Input/Output 1:
5
25 8
30 10
100 20
50 10
45 6

Output:
17
20
80
40
39

Example Input/Output 2:
Input:
2
30 20
150 30

Output:
10
120     */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,x,y;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d %d",&x,&y);
    printf("%d\n",x-y);
}
}
