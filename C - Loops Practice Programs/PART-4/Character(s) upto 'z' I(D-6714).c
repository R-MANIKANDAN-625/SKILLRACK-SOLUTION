/*Character(s) upto 'z'

The program must accept an alphabet CH as the input. If the ascii value of CH is odd, then the program must print every
third alphabet from CH to ‘z’ as the output. Else the program must print every second alphabet from CH to ‘z’ as the output.

Note: CH is only in lowercase.

Example Input/Output 1:
Input:
c

Output:
c f i l o r u x

Example Input/Output 2:
Input:
d

Output:
d f h j l n p r t v x z    */

#include<stdio.h>
#include<stdlib.h>

int main()
{
char c;
scanf(" %c",&c);
int n=3;
if(c%2==0)
{
    n=2;
}
for(int i=c;i<='z';i+=n)
{
    printf("%c ",i);
}
}
