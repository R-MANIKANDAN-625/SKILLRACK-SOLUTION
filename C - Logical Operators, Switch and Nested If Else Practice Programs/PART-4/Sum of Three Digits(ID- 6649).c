/*Sum of Three Digits

The program must accept a three digit number N as the input. The program must print the sum of the three digits
if all the digits are equal. If any two digits of N are equal, then print the sum those digits which are equal.
If all the three digits are different, then the program must print -1 as the output.

Example Input/Output 1:
Input:
222

Output:
6

Example Input/Output 2:
Input:
123

Output:
-1

Example Input/Output 3:
Input:
191

Output:
2  */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,a,b,c;
scanf("%d",&n);
a=n%10;
n/=10;
b=n%10;
n/=10;
c=n%10; 
if (a==b && b==c)
{
    printf("%d",a*3);
}
else if(a==b && b!=c)
{
    printf("%d",a*2);
}
else if(a!=b && b==c)
{
    printf("%d",b*2);
}
else if(a==c && a!=b)
{
    printf("%d",c*2);
}
else
{
    printf("-1");
}
}
