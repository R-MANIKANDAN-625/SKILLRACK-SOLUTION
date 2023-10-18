/*Open the Door

A door can be opened only if two or more magical items are available. If there is only one magical item is available, 
then a jewel can be added to it to open the door. The magical items are represented as even numbers and jewels are 
represented as negative numbers. The program must accept three integers as the input and print YES if the door can be opened.
Else the program must print NO.

Example Input/Output 1:
Input:
24 25 64

Output:
YES

Example Input/Output 2:
Input:
53 79 -2

Output:
NO

Example Input/Output 3:
Input:
-5 -9 9

Output:
NO   */

//NOTE : CODE CREDITS TO @SRBLOGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,c,m=0,j=0;
scanf("%d %d %d",&a,&b,&c);
if(a%2==0)
{    
    if(a>0)
    {
    	 m++;
	  }  
    else if(a<0)
    {
    	j++;
	 }     
}
else if(a<0)
{
	j++;
}
if(b%2==0)
{
	if(b>0)
    {
    	 m++;
	}  
  else if(b<0)
  {
    j++;
	}
}
else if(b<0)
{
	j++;
}
if(c%2==0)
{
   if(c>0)
    {
    	m++;
	  }  
  else if(c<0)
    {
    	j++;
	}
}
else if(c<0)
{
	j++;
}
if(m==1 && j==1)
{
	printf("YES");
}
else if(m>=2)
{
	printf("YES");
}
else
{
	printf("NO");
}
}  
