/*
Print Next - Vowel or Consonant

The program must accept an alphabet CH as the input. If CH is a vowel then the program must print the next consonant as the output. 
Else the program must print the next vowel from the alphabet position as the output.  
Note: Alphabet is only in lower-case. 

Example Input/Output 1:
Input:
e

Output:
f

Example Input/Output 2:
Input:
z

Output:
a */

#include<stdio.h>
#include<stdlib.h>
int isvowel(char c)
{
  return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
//harimani
int main() 
{
char a,b;
scanf(" %c",&a);
if(isvowel(a))
{
     printf("%c",a+1);
}      
else
{
   if (a=='z') 
   {
        printf("a");
   } 
   else 
   {
       b=a+1;
       while (!isvowel(b))
       {
             b++;
       }
       printf("%c",b);
    }
}
}
