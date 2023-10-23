/* Last Integer in First Partition

The program must accept N distinct integers as the input. The integers are partitioned such that all the integers in the first partition are in ascending order and all the integers in the second partition are in descending order. The program must print the last integer in ascending order as the output.

Example Input/Output 1:
Input:
6
23 44 67 32 11 8

Output:
67

Example Input/Output 2:
Input:
5
19 25 17 12 6

Output:
25     */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,a,m=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a);
    if(m<a)
    {
        m=a;
    }
}
printf("%d",m);
}
