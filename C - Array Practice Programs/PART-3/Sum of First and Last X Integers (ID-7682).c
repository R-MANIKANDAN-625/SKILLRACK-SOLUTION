/*Sum of First and Last X Integers

The program must accept N integers and an integer X as the input. The program must find the sum of the first X integers as S1 and then 
find the sum of the last X integers as S2. Finally, the program must print the sum of S1 and S2 as the output.

Boundary Condition(s):
1 <= N <= 1000
1 <= X <= N

Input Format:
The first line conatins the integer N.
The second line contains N integers separated by space(s).
The third line contains the integer X.

Output Format:
The first line contains the sum of S1 and S2.

Example Input/Output 1:
Input:
8
1 2 3 4 5 6 7 8
3

Output:
27

Explanation:
The first 3 integers are 1, 2 and 3 and their sum (S1) is 6 (1 + 2 + 3).
The last 3 integers are 6, 7 and 8 and their sum (S2) is 21 (6 + 7 + 8).
The sum of S1 and S2 is 27 (6+21).
Hence the output is 27

Example Input/Output 2:
Input:
4
1 2 3 4
4

Output:
20      */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,s1=0,s2=0,m;
scanf("%d ",&n);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
}
scanf("%d ",&m);
for(int i=0;i<n;i++)
{
    if(i<m)
    {
        s1+=a[i];
    }
    if(i>=n-m)
    {
        s2+=a[i];
    }
}
printf("%d",s1+s2);
}
