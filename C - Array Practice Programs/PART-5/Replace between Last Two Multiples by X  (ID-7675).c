/*Replace between Last Two Multiples by X

The program must accept N integers and an integer X as the input. The program must find the last two multiples of X as A and B in the given order. The program must replace all the integers present between A and B (exclusive) by X. Finally, the program must print N integers as the output.

Note: Atleast two integers among N integers are always multiple of X.

Boundary Condition(s):
1 <= N <= 10^5
1 <= X <= 2000

Input Format:
The first line contains the two integers N and X separated by a space.
The second line contains N integers separated by space(s).

Output Format:
The first line contains N integers separated by space(s).

Example Input/Output 1:
Input;
9 10
2 10 3 5 20 85 67 90 56

Output:
2 10 3 5 20 10 10 90 56 

Explanation:
The last two mulitple of 10 are 20 and 90 (2 10 3 5 20 85 67 90 56).
All the elements present between 20 and 90 replaced by 10 (2 10 3 5 20 10 10 90 56).
Hence the output is 2 10 3 5 20 10 10 90 56 

Example Input/Output 2:
Input:
7 4
28 48 74 25 45 56 63

Output:
28 48 4 4 4 56 63   */

#include<stdio.h>
#include<stdlib.h>

//hari mani

int main()
{
int n,i,j,m,k;
scanf("%d %d",&n,&m);
int a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int f=0;
for(i=n-1;i>=0;i--)
{
    if(a[i]%m==0)
    {
        for(j=i-1;j>=0;j--)
        {
            if(a[j]%m==0)
            {
                for(k=i-1;k>j;k--)
                {
                    f=1;
                    a[k]=m;
                }
            }
            if(f==1) 
            {
               break;
            }
        }
    }
}
for(i=0;i<n;i++)
{
     printf("%d ",a[i]);
}
}
