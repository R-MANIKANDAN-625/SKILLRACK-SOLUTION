/*Count of Chocolates

Julie bought chocolates for N days. The program must accept N integers representing the number of chocolates bought on each day as the input.
The program must print the total number of chocolates bought from the first day for each day as the output.

Example Input/Output 1:
Input:
5
9 8 2 4 1

Output:
9 17 19 23 24

Example Input/Output 2:
Input:
4
10 2 9 7

Output:
10 12 21 28    */


#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,c=0,a;
scanf("%d ",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a);
    c+=a;
    printf("%d ",c);
}
}
