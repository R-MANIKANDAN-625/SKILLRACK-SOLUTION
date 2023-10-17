/*Place the Flower Pots

There are three shelves on which pots can be placed. The capacities of the shelves are C1, C2 and C3. N flower pots are to be placed on these shelves. The program must accept C1, C2, C3 and N as the input and print the minimum number of shelves used to place all the N pots on these three shelves. If N is greater than C1+C2+C3 (that is more than the capacity of these three shelves), then the program must print the count of the pots exceeding the capacity of the shelves.

Note: C1 >= C2 >= C3

Example Input/Output 1:
Input:
9 8 7
11

Output:
2 0

Example Input/Output 2:
Input:
5 3 2
12

Output
3 2  */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,c,s,n=0;
scanf("%d %d %d",&a,&b,&c);
scanf("%d",&s);
if(s>0)
{
    s-=a;
    n++;
}
if(s>0)
{
    s-=b;
    n++;
}
if(s>0)
{
    s-=c;
    n++;
}
if(s<0)
{
    s=0;
}
printf("%d %d",n,s);
}
