/* Most Expensive Pen

The program must accept N alphabets representing the names of N pens and also the cost X of each pen as the input. 
The program must print the name of the most expensive pen as the output.

Note: Each pen has a distinct name and cost. The alphabet representing the name is always in uppercase.

Example Input/Output 1:
Input:
4
A 25
B 36
C 23
D 10

Output:
B

Example Input/Output 2:
Input:
2
A 24
B 20

Output:
A      */

//NOTE : " %c" -----> give spaces before c

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,m=0,a;
scanf("%d",&n);
char c,p;
for(int i=0;i<n;i++)
{
    scanf(" %c %d",&c,&a);
    if(m<a)
    {
        m=a;
        p=c;
    }
}
printf("%c",p);
}
