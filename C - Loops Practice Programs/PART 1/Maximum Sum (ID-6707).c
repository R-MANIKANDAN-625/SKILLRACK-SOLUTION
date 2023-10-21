/* Maximum Sum

The program must accept N numbers as the input. The program must calculate the sum of odd digits in the tenth place as S1 and the sum of even digits in the tenth place as S2. 
Then the program must print the maximum of S1 and S2  as the output.

Example Input/Format 1:
Input:
5
10 20 30 40 50

Output:
9

Example Input/Output 2:
Input:
4
100 120 240 360

output:
12     */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,o=0,e=0,a;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d ",&a);
    if(((a/10)%10)%2==0)
    {
        e+=(a/10)%10;
    }
    else if(((a/10)%10)%2!=0)
    {
        o+=(a/10)%10;
    }
}
printf("%d ",(e>o)?e:o);
}
