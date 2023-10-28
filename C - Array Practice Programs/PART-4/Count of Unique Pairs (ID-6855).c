/*Count of Unique Pairs

The program must accept an array of size N and an integer X as the input. The program must print the count of unique pairs in the array 
with their absolute difference equal to X as the output.

Boundary Condition(s):
2 <= N <= 50
0 <= X <= 30
1 <= Each Integer <= 9999

Example Input/Output 1:
Input:
5 0
1 2 1 3 4

Output:
1

Example Input/Output 2:
Input:
3 1
4 1 6

Output:
0      */


#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,m;
scanf("%d %d",&n,&m);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int c=0;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(abs(a[i]-a[j])==m)
        {
            c++;
        }
    }
}
printf("%d",c);
}
