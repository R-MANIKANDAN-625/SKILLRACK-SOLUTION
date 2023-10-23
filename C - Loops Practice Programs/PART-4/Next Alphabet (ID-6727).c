/*Next Alphabet

The program must accept N lowercase alphabets as the input. The program must print the next alphabet of each alphabet as the output.

Note: If the alphabet is 'z', then consider 'a' as the next alphabet.

Example Input/Output 1:
Input:
3     
a b c

Output:
b c d

Example Input/Output 2:
Input:
5
x y z a b

Output:
y z a b c    */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
char ch;
for(int i=0;i<n;i++)
{
    scanf(" %c",&ch);
    printf("%c ",'a'+(ch-'a'+1)%26);
}
}
