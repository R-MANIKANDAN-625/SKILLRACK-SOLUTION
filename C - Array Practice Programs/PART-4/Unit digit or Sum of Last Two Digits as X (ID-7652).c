/*Unit digit or Sum of Last Two Digits as X

The program must accept N distinct integers and an integer X as the input. The program must print the odd integers which are having 
the unit digit is X or the sum of the last two digits as X in the reverse order as the output. If there is no such integer then 
the program must print -1 as the output.

Boundary condition(s):
1 <= N <= 10^5
1 <= X <= 18

Input Format:
The first line contains the two integers N and X separated by a space.
The second line contains N integers separated by space(s).

Output Format:
The first line contains either the odd integers which are having the unit digit is X or the sum of the last two digits as X in 
the reverse order or -1. 

Example Input/Output 1:
Input:
7 5
10 95 132 141 51 18 55

Output:
55 141 95

Explanation:
X = 5,
All the odd integers in the reverse order are 55, 51, 141 and 95.
For the integer 55, the unit digit is 5 which is equal to 5. So 55 is printed.
For the integer 51, the unit digit is 1 which is not equal to 5 and also the sum of last two digits is 6 which is also not equal to 5.
So 51 is not printed.
For the integer 141, the sum of last two digits is 5 which is equal to 5. So 141 is printed.
For the integer 95, the unit digit is 5 which is equal to 5. So 95 is printed.
Hence the output is 55 141 95

Example Input/Output 2:
Input:
4 10
100 22 43 25

Output:
-1     */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,m;
scanf("%d %d",&n,&m);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
}
int f=1;
for(int i=n-1;i>=0;i--)
{
    if (((a[i]%10==m) || ((a[i]/10)%10) + a[i]%10==m) && a[i]%2!=0)
    {
        printf("%d ",a[i]);
        f=0;
    }
}
if(f)
{
    printf("-1");
}
}
