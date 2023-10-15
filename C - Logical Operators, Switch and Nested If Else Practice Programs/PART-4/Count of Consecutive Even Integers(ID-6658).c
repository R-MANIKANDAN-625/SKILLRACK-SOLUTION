/*Count of Consecutive Even Integers

The program must accept four integers as the input. The program must print the maximum number of consecutive
two even integers (non-overlapping) that can be formed from the given four integers as the output.

Example Input/Output 1:
Input:
23 44 32 24

Output:
1

Explanation:
There is only 1 pair of consecutive two even integers. It can be either (44, 32) or (32, 24).
Hence the output is 1

Example Input/Output 2:
Input:
12 44 24 56

Output:
2

Explanation:
There are 2 pairs of consecutive two even integers. They are (12, 44) and (24, 56).
Hence the output is 2
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,c,d;
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a%2==0 && b%2==0 && c%2==0 && d%2==0)
{
    printf("2");
}
else if(a%2==0 && b%2==0)
{
    printf("1");
}
else if(b%2==0 && c%2==0)
{
    printf("1");
}
else if(c%2==0 && d%2==0)
{
    printf("1");
}
}
