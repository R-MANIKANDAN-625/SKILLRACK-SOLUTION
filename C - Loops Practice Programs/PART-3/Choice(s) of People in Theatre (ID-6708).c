/* Choice(s) of People in Theatre

The program must accept choices of N people in a theatre. Each has their own choice among t, e and h representing 
the languages Tamil, English and Hindi respectively. The program must print the corresponding language for the choice of each people.
If the choice is not in the above given choices, then print Invalid as the output.

Example Input/Output 1:
Input:
3
t h t

Output:
Tamil
Hindi
Tamil

Example Input/Output 2:
Input:
5
e e t h k

Output:
English
English
Tamil
Hindi
Invalid       */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d ",&n);
char a;
for(int i=0;i<n;i++)
{
    scanf(" %c",&a);
    if(a=='t')
    {
        printf("Tamil");
    }
    else if(a=='h')
    {
        printf("Hindi");
    }
    else if(a=='e')
    {
        printf("English");
    }
    else
    {
        printf("Invalid");
    }
    printf("\n");
}
}
