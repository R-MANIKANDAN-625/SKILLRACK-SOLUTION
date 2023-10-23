/*N Alphabets

The program must accept an alphabet CH and an integer N as the input. The program must print N alphabets from CH in
alphabetical order as the output. If the alphabet is 'z' then consider 'a' as the next alphabet.

Note: CH is only in lowercase.

Example Input/Output 1:
Input:
b 5

Output:
bcdef

Example Input/Output 2:
Input:
u 9

Output:
uvwxyzabc     */


#include<stdio.h>
#include<stdlib.h>

int main()
{
char ch;
int n;
scanf("%c %d",&ch,&n);
for(int i=0;i<n;i++)
{
    printf("%c",'a'+(((ch-'a')+i)%26));
}
}
