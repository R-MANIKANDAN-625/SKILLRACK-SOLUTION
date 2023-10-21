/* Ticket Number

The program must accept N tickets as the input.The program must print the output based on the following conditions.

-If the ticket number is between 1 to 250 (inclusive of 1 and 250), then print FIRST CLASS.
-If the ticket number is between 251 to 500 (inclusive of 251 and 500), then print SECOND CLASS.
-Else the program must print INVALID TICKET as the output.

Example Input/Output 1:
Input:
5
2 15 350 500 20

Output:
FIRST CLASS
FIRST CLASS
SECOND CLASS
SECOND CLASS
FIRST CLASS

Example Input/Output 2:
Input:
3
275 498 700

Output:
SECOND CLASS
SECOND CLASS
INVALID TICKET   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,a;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a);
    if(a>=1 && a<=250)
    {
        printf("FIRST CLASS");
    }
    else if(a>=251 && a<=500)
    {
        printf("SECOND CLASS");
    }
    else 
    {
        printf("INVALID TICKET");
    }
    printf("\n");
}
}
