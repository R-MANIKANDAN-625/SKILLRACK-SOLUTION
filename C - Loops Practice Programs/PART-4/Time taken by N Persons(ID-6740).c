/*Time taken by N Persons

The program must accept the distance X (in metres) and the speed Y (in metres/second) of N persons as the input. The program must print 
the time taken (in seconds rounded to the next integer value) by each person to reach the destination (X metres) as the output.

Example Input/Output 1:
Input:
3
250 50
500 75
200 20

Output:
5
7
10

Example Input/Output 2:
Input:
5
350 110
630 90
783 56
567 98
348 120

Output:
4
7
14
6
3       */

//NOTE : Ceil -------> always rounded up 
// ex: 3.2 -----> 4

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
double x,y;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%lf %lf",&x,&y);
    int k=ceil(x/y);
    printf("%d\n",k);
}
}
