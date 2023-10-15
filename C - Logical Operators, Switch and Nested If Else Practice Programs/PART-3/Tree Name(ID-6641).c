/* Tree Name

The program must accept the first letter of the name of a tree in a garden and print the name of the tree as the output. 
The first letter can be in upper or lower case. Additionally, the height H of the tree is also provided as the input. 
If the value of H is 5 or above then the program must print Big before printing the name.
The trees available in the garden are Neem, Amla, Peepal and Banyan.

Example Input/Output 1:
Input:
n 9

Output:
Big Neem

Example Input/Output 2:
Input:
A 3

Output:
Amla  */



#include<stdio.h>
#include<stdlib.h>

int main()
{
char a;
int n;
scanf(" %c %d",&a,&n);
if (a=='n' || a=='N')
{
    if (n>=5)
    {
        printf("Big ");
    }printf("Neem");
}
else if(a=='a' || a=='A')
{
    if(n>=5)
    {
        printf("Big ");
    }printf("Amla");
}
else if(a=='p' || a=='P')
{
    if(n>=5)
    {
        printf("Big ");
    }printf("Peepal");
}
else if (a=='b' || a=='B')
{
    if(n>=5)
    {
        printf("Big ");
    }printf("Banyan");
}
}
