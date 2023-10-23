/*Water Cans with X Litres

The program must accept N integers representing the number of litres of water in each can and an integer X. All the cans must be filled
with exactly X litres of water. The water from the given cans must be used to fill other cans before adding additional water. 
The program must print the output based on the conditions given below.

- If additional water is required to fill all the cans by exactly X litres of water, then print the number of litres needed to fill all the cans followed by NEEDED as the output.
- If no additional water is required to fill all the cans by exactly X litres of water, then print NO NEED as the output.
- If some litres of water is exceeded while filling all the cans by exactly X litres of water, then print the number of litres exceeded followed by EXCESS as the output.

Boundary Condition(s):
1 <= N <= 100
1 <= X <= 99999

Input Format:
The first line contains the values of N and X separated by a space.
The second line contains N integers separated by spaces(s).

Output Format:
The first line contains the desired output based on the conditions mentioned above.

Example Input/Output 1:
Input:
5 15
5 25 10 6 34

Output:
5 EXCESS

Example Input/Output 2:
Input:
5 4
1 2 3 5 2

Output:
7 NEEDED

Example Input/Output 3:
Input:
4 3
0 3 6 3

Output:
NO NEED    */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,x,y,s=0;
scanf("%d %d",&n,&x);
for(int i=0;i<n;i++)
{
    scanf("%d ",&y);
    s+=y;
}
if(s==x*n)
{
    printf("NO NEED");
}
else if(s<=x*n)
{
    printf("%d NEEDED",(x*n)-s);
}
else
{
    printf("%d EXCESS",s-(x*n));
}
}
