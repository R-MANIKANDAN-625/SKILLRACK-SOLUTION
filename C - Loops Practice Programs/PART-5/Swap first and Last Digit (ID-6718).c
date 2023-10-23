/*Swap first and Last Digit

The program must accept an integer N as the input. The program must swap the first and the last digit of N and then print the modified value 
of N as the output.

Example Input/Output 1:
Input:
1004

Output:
4001

Example Input/Output 2:
Input:
1500

Output:
501     */


#include<stdio.h>
#include<stdlib.h>

void main()
{
int a[10];
int i=0,n,l,c=0,b,j;
scanf("%d",&n);
while(n>0)
{
    b=n%10;
    a[i]=b;
    i++;
    n=n/10;
}
l=a[0];
a[0]=a[i-1];
a[i-1]=l;
for(j=i-1;j>=0;j--)
{
    c=c*10+a[j];
}
printf("%d",c);
}
