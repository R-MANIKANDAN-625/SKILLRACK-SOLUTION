/*Maximum Count Integer-Even or Odd

The program must accept N integers as the input. The program must print the output based on the following conditions.
- If the count of even integers is greater than the count of odd integers, the program must print the even integers followed by the odd integers.
- Else the program must print the odd integers followed by the even integers.
Note: The value of N is always odd.

Boundary Condition(s):
1 <= N <= 1000

Input Format:
The first line contains N.
The second line contains N integers separated by space.

Output Format:
The first line contains the integer values separated by a space.

Example Input/Output 1:
Input:
5
41 57 65 84 23

Output:
41 57 65 23 84

Explanation:
There are 4 odd integers and 1 even integer, so odd integers are printed first.

Example Input/Output 2:
Input:
7
59 64 72 76 147 45 78

Output:
64 72 76 78 59 147 45   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,e=0,o=0;
scanf("%d ",&n);
int a[n],m;
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
    if(a[i]%2==0)
    {
        e++;
    }
    else
    {
        o++;
    }
}
m=(e<o)?1:0;
for(int i=0;i<n;i++)
{
    if(a[i]%2==m)
    {
        printf("%d ",a[i]);
    }
}
for(int i=0;i<n;i++)
{
    if(a[i]%2!=m)
    {
        printf("%d ",a[i]);
    }
}
}
