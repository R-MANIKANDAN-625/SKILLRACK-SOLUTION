/* Integers - Not divisible by X

The program must accept N integers and X as the input. The program must print the integers which are not divisible by X as the output. If all the integers are divisible by X, then the program must print -1 as the output.

Example Input/Output 1:
Input:
5 12
90 36 8 19 24

Output:
90 8 19 

Example Input/Output 2:
Input:
4 5
15 10 90 20 

Output:
-1      */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,x,f=1,a;
scanf("%d %d",&n,&x);
for(int i=0;i<n;i++)
{
    scanf("%d",&a);
    if(a%x)
    {
        printf("%d ",a);
        f=0;
    }
}
if(f)
{
    printf("-1");

}
}
