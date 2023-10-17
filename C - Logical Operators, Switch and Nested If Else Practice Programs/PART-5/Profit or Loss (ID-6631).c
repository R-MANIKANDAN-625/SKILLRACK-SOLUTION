/*Profit or Loss

A shop has a maintenance cost MC for N customers on any given day. The value of MC and N for a given day are passed as the input to the program. 

The revenue earned from N customers in that specific day can be calculated as below.
Each customer from 1 to 5 pays Rs.100
Each customer from 6 to 50 pays Rs.150
Each customer from 51 to 500 pays Rs.200
Each customer from 501 onwards pays Rs.250

If the total revenue is more than MC, the program must print Profit. Else if the total revenue is less than MC it must print Loss. If the total revenue is equal to MC, the program must print BreakEven.

Example Input/Output 1:
Input:
400 5

Output:
Profit

Example Input/Output 2:
2000 10

Output:
Loss
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int m,n,c=0;
scanf("%d %d",&m,&n);
for (int i=1;i<=n;i++)
{
  if (i <= 5)
    c+=100;
  else if (i<=50)
    c+=150;
  else if (i<=500)
    c+=200;
  else
    c+=250;
}
if(m<c)
{
    printf("Profit");
}
else if(m==c)
{
    printf("BreakEven");
}
else
{
    printf("Loss");
}
}
