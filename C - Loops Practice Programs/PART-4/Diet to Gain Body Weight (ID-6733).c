/*Diet to Gain Body Weight

Anitha wants to gain her body weight, so she starts her diet. Anitha wants to know how many grams she has gained in X days. 
Every day, she eats a food item to increase her body weight. The first letter of the food item (P for Pista , B for Badam and R for Raisin) 
for X days are passed as input to the program. If she eats Pista, then she gains 1 gram of weight. If she eats Badam, then she gains 2 grams
of weight. If she eats Raisin, then she gains 3 grams of weight. The program must print the weight (in grams) she has gained in X days as 
the output.

Example Input/Output 1:
Input:
5
P B R R P

Output:
10

Example Input/Output 2:
Input:
3
R R R

Output:
9   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
char c;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf(" %c",&c);
    if(c=='P')
    {
        s+=1;
    }
    else if(c=='B')
    {
        s+=2;
    }
    else if(c=='R')
    {
        s+=3;
    }
}
printf("%d",s);
}
