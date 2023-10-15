/* Print Perimeter

The program must accept an integer N as the input. If N is 1 then the program must accept the side of a square as the input 
and print the perimeter of the square. If N is 2 then the program must accept the length and the breadth of a rectangle as 
the input and print the perimeter of the rectangle. If N is 3 then the program must accept the three sides of a triangle as 
the input and print the perimeter of the triangle. Else the program must print '-1' as the output.

Example Input/Output 1:
Input:
1
3

Output:
12

Example Input/Output 2:
Input:
2
4 3

Output:
14

Example Input/Output 3:
Input:
3
5 4 6

Output:
15   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,a,b,c;
scanf("%d",&n);
if(n==1)
{
    scanf("%d",&a);
    printf("%d",a*4);
}
else if(n==2)
{
    scanf("%d %d",&a,&b);
    printf("%d",(a*2)+(b*2));
}
else if(n==3)
{
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",a+b+c);
}
else
{
    printf("-1");
}
}
