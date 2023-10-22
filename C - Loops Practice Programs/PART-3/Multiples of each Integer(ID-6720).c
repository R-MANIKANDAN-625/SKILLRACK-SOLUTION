/*Multiples of each Integer

The program must accept N positive integers as the input. The program must print the first 10 multiples of each integer as the output.

Example Input/Output 1:
Input:
5
2 5 3 10 6

Output:
2 4 6 8 10 12 14 16 18 20
5 10 15 20 25 30 35 40 45 50
3 6 9 12 15 18 21 24 27 30
10 20 30 40 50 60 70 80 90 100
6 12 18 24 30 36 42 48 54 60

Example Input/Output 2:
Input:
6
12 4 1 8 3 15

Output:
12 24 36 48 60 72 84 96 108 120
4 8 12 16 20 24 28 32 36 40
1 2 3 4 5 6 7 8 9 10
8 16 24 32 40 48 56 64 72 80
3 6 9 12 15 18 21 24 27 30
15 30 45 60 75 90 105 120 135 150    */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,a;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a);
    for(int j=1;j<=10;j++)
    {
        printf("%d ",a*j);
    }
    printf("\n");
}
}
