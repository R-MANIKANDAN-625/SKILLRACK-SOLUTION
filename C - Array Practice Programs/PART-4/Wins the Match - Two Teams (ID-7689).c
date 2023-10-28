/*Wins the Match - Two Teams

The program must accept the runs scored by two cricket teams (Team A and Team B) in N matches. The program must print the team with most 
number of wins, then the program must print the count of wins of Team A followed by the count of wins of Team B. Finally the program must 
print the number of ties between the two teams as the output.

Boundary Condition(s):
1 <= N <= 1000

Input Format:
The first line contains the integer N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains the team with the most number of wins and three integers separated by spaces.

Example Input/Output 1:
Input:
5
150 200 210 120 140
300 200 400 120 40

Output:
Team B 1 2 2

Explanation:
Team A has won 1 time.
Team B has won 2 times.
The count of the tie is 2.
Here Team B has the most number of wins.
Hence the output is Team B followed by 1 2 2

Example Input/Output 2:
Input:
4
150 400 120 40
100 100 120 140

Output:
Team A 2 1 1  */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d ",&n);
int a[n],b[n];
int w1=0,w2=0,t=0;
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
}
for(int i=0;i<n;i++)
{
    scanf("%d ",&b[i]);
    if(a[i]>b[i])
    {
        w1++;
    }
    else if(a[i]==b[i])
    {
        t++;
    }
    else
    {
        w2++;
    }
}
if(w1>w2)
{
    printf("Team A %d %d %d",w1,w2,t);
}
else
{
    printf("Team B %d %d %d",w1,w2,t);
}
}
