/*Cube of the Value from N to 1

The program must accept an integer N as the input. The program must print the cube of each integer from N to 1 as the output.

Example Input/Output 1:
Input:
5

Output:
125 64 27 8 1

Example Input/Output 2:
Input:
3

Output:
27 8 1    */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
for(int i=n;i>0;i--)
{
    printf("%d ",i*i*i);
}
}
