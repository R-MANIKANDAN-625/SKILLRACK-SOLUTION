/* Available or Not

Five integers A, B, C, D and E are passed as the input to the program. The program must print the output based on the below conditions.

Conditions:
 - If A is between B and C (Inclusive), then print First Slot.
 - If A is between D and E (Inclusive), then print Second Slot.
 - Else print Unavailable.

Example Input/Output 1:
Input:
12 5 15 26 35

Output:
First Slot

Example Input/Output 2:
Input:
25 10 20 30 35

Output:
Unavailable  */


#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,c,d,e;
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
if(a>=b && a=<c)
{
    printf("First slot");
}
else if(a>=d && a<=e)
{
    printf("second Slot");
}
else
{
    printf("Unavailable");
}
}
