/*
Remove First and Last Characters
The program must accept N string values as the input. The program must print the string values without their first and last characters as the output.

Boundary Condition(s):
1 <= N <= 50
3 <= Length of each string <= 100

Input Format:
The first line contains the integer value of N.
The next N lines contain the string values.

Output Format:
The first N lines contain the string values without their first and last characters.

Example Input/Output 1:
Input:
3
apple
mango
orange

Output:
ppl
ang
rang

Explanation:
The first and last characters of apple are a and e. So a and e are removed. Hence ppl is printed.
The first and last characters of mango are m and o. So m and o are removed. Hence ang is printed.
The first and last characters of orange are o and e. So o and e are removed. Hence rang is printed.

Example Input/Output 2:
Input:
2
PROGRAM
!@#$%^&*(

Output:
ROGRA
@#$%^&*        */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d ",&n);
char a[100];
for(int i=0;i<n;i++)
{
    scanf("%s ",a);
    for(int j=1;j<strlen(a)-1;j++)
    {
        printf("%c",a[j]);
    }
    printf("\n");
}
}
