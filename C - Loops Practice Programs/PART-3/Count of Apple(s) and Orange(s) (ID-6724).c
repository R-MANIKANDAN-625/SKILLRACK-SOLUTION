/* Count of Apple(s) and Orange(s)

A lady went to the market. She bought X number of fruits. The program must accept an uppercase alphabet CH representing the fruits. 
CH can be either 'A' (Apple) or 'O' (Orange). The program must print the alphabets representing the fruits with their corresponding 
count as the output. The count of apples must be in the first line and the count of oranges must be in the second line.

Example Input/Output 1:
10
A O A O A A A O O A

Output:
A 6
O 4

Example Input/Output 2:
Input:
4
A A A O

Output:
A 3
O 1      */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,a=0,o=0;
scanf("%d",&x);
char ch;
for(int i=0;i<x;i++)
{
    scanf(" %c",&ch);
    if(ch=='A')
    {
        a++;
    }
    else if(ch=='O')
    {
        o++;
    }
}
printf("A %d\n",a);
printf("O %d",o);
}
