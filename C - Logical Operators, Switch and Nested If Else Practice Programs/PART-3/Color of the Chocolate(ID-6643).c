/*
The program must accept the color of a chocolate C as the input. Then based on the value of C,
the program must print the number of students who prefer to eat the chocolates of color C based on the following conditions.
The total number of students is 5.
    - Student 1 prefers to eat green or pink colored chocolates
    - Student 2 prefers to eat red or pink colored chocolates
    - Student 3 prefers to eat red or green colored chocolates
    - Student 4 prefers to eat only pink colored chocolates
    - Student 5 prefers to eat orange or pink colored chocolates

Example Input/Output 1:
Input:
p

Output:
4

Example Input/Output 2:
Input:
o

Output:
1   */


#include<stdio.h>
#include<stdlib.h>

int main()
{
char a;
printf(" %c",&a);
if(a=='p')
{
    printf("4");
}
else if(a=='o')
{
    printf("1");
}
else if(a=='r' || a=='g')
{
    printf("2");
}
else
{
    printf("0")
}
}
