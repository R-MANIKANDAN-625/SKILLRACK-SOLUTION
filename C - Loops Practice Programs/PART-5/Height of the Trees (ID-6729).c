/*Height of the Trees

There are N trees with different heights. The government has ordered to cut down the trees which are greater than the height X. 
The program must accept the heights of N trees and X as the input. The program must print the sum of the cut down heights of the tree 
as the output.

Input Format:
The first line contains the values of N and X separated by a space.
The second line contains N integers separated by space(s).

Output Format:
The first line contains the sum of the cut down heights of N trees as the output.

Example Input/Output 1:
Input:
5 10
6 12 15 53 2

Output:
50

Example Input/Output 2:
Input:
6 12
66 32 10 8 6 15

Output:
77      */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,x,y,s=0;
scanf("%d %d",&n,&x);
for(int i=0;i<n;i++)
{
    scanf("%d ",&y);
    if(x<y)
    {
        s+=y-x;
    }
}
printf("%d",s);
}
