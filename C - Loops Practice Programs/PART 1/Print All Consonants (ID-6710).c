/*Print All Consonants

The program must accept an alphabet CH as the input. The program must print all the consonants from CH to 'z' in alphabetical order as the output.
Note: CH is only in lower-case.

Example Input/Output 1:
Input:
g

Output:
ghjklmnpqrstvwxyz

Example Input/Output 2:
Input:
u

Output:
vwxyz  */

#include<stdio.h>
#include<stdlib.h>
int isvowel(char a)
{
    return a=='a' || a=='e' || a=='i' || a=='o' || a=='u';
}
int main()
{
char a;
scanf("%c",&a);
for(int i=a;i<='z';i++)
{
    if(!isvowel(i))
    {
        printf("%c",i);
    }
}
}
