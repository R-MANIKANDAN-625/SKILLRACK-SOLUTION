/*HCF of Alternative Integers

The program must accept N integers as the input. The program must print the HCF of the 1st and Nth integers, 2nd and (N-1)th integers, 
3rd and (N-2)nd integers and so on. If N is odd, for the middle integer, then the HCF is the integer itself.

Boundary Condition(s):
2 <= N <= 10^4

Input Format:
The first line contains the integer N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains (N+1)/2 integers separated by space(s).

Example Input/Output 1:
Input:
5
15 20 35 40 50

Output:
5 20 35

Explanation:
The 1st and 5th integers are 15 and 50 and their HCF value is 5. So 5 is printed.
The 2nd and 4th integers are 20 and 40 and their HCF value is 20. So 20 is printed.
The 3rd integer is 35. 35 is the middle integer. So 35 is printed.

Example Input/Output 2:
Input:
6
15 20 35 28 40 50

Output:
5 20 7    */

#include<stdio.h>
#include<stdlib.h>

int hcf(int a,int b)
{
    int m=(a<b)?a:b;
    int ans;
    for(int i=1;i<=m;i++)
    {
        if(a%i==0 && b%i==0)
        {
            ans=i;
        }
    }
    printf("%d ",ans);
}
int main()
{
int n;
scanf("%d ",&n);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
}
for(int i=0;i<n/2;i++)
{
    hcf(a[i],a[n-i-1]);
}
if(n%2!=0)
{
    printf("%d",a[n/2]);
}
}
