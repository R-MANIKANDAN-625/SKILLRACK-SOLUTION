/*Integer with their Occurrences

The program must accept N integers as the input. The program must print the integers in descending order with their occurrence count 
separated by '-' in each line as the output.

Boundary Condition(s):
1 <= N <= 50
1 <= Array Element Value <= 100

Input Format:
The first line contains the value of N.
The second line contains N integers separated by space(s).

Output Format:
The list of lines contain the integers in descending order with their number of occurrence(s) separated by '-' in each line.

Example Input/Output 1:
Input:
5
1 9 2 1 1

Output:
9-1
2-1
1-3

Explanation:
The elements in descending order are 9 2 1 1 1.
The element 9 occurs 1 time. So 9-1 is printed.
The element 2 occurs 1 time. So 2-1 is printed.
The element 1 occurs 3 times. So 1-3 is printed.

Example Input/Output 2:
Input:
8
20 3 10 20 10 20 20 8

Output:
20-4
10-2
8-1
3-1    */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d ",&n);
int a[n],b[100]={0};
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
    b[a[i]]++;
}
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(a[i]<a[j])
        {
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
}
for(int i=0;i<n;i++)
{
    if(a[i]!=m)
    {
        printf("%d-%d\n",a[i],b[a[i]]);
    }
    m=a[i];
}
}
