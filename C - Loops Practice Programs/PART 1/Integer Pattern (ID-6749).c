/*Integer Pattern

The program must accept an integer N as the input. The program must print the desired pattern as shown in the
Example Input/Output section.

Example Input/Output 1:
Input:
5

Output:
1 2 3 4 5 4 3 2 1

Example Input/Output 2:
Input:
10

Output:
1 2 3 4 5 6 7 8 9 10 9 8 7 6 5 4 3 2 1    */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d ",&n);
for(i=1;i<2*n;i++)
{
    if(i>n)
    {
        printf("%d ",n*2-i);
    }
    else 
    {
        printf("%d ",i);
    }
}
}
