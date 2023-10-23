/*Total Marks

The program must accept N integers representing the number of mistakes occurred in each question and an integer X representing 
the total marks of N questions as the input. For each mistake, two marks must be reduced. The program must print the marks obtained
for N questions as the output.

Example Input/Output 1:
Input:
5 100
2 4 8 5 10

Output:
42

Example Input/Output 2:
Input:
3 150
5 7 2 

Output:
122    */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,x,y,s;
scanf("%d %d",&n,&x);
for(int i=0;i<n;i++)
{
    scanf("%d ",&y);
    s+=y*2;
}
printf("%d",x-s);
}
