/*Longest String

The program must accept two string values S1 and S2 as the input. The program must print the longest string among the two string values as the output.
If both string values have the same length, then the program must print the first string as the output.

Boundary Condition(s):
1 <= Length of S1, S2 <= 1000

Example Input/Output 1:
Input:
green banana

Output:
banana

Explanation:
The length of the string green is 5.
The length of the string banana is 6.
The longest string is banana.
Hence the output is banana

Example Input/Output 2:
Input:
Note Book

Output:
Note     */

#include<stdio.h>
#include<stdlib.h>

int main()
{
char s1[1000],s2[1000];
scanf("%s",s1);
scanf("%s",s2);
if(strlen(s1)>=strlen(s2))
{
    printf("%s",s1);
}
else
{
    printf("%s",s2);
}
}
