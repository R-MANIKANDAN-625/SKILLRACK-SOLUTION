/*Vowel Series

The program must accept an alphabet CH as the input. If CH is a vowel then the program must print all the vowels
starting from CH as the output in an alphabetical order. Else the program must print '-1' as the output.
Note: Alphabet is only in lower-case.
    
Example Input/Output 1:
Input:
e

Output:
eiou

Example Input/Output 2:
Input:
v

Output:
-1   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
char c;
scanf(" %c",&c);
if(c=='a')
{
    printf("aeiou");
}
else if(c=='e')
{
    printf("eiou");
}
else if(c=='i')
{
    printf("iou");
}
else if(c=='o')
{
    printf("ou");
}
else if(c=='u')
{
    printf("u");
}
else
{
    printf("-1");
}
}
