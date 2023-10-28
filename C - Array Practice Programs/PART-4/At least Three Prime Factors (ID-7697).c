/*At least Three Prime Factors

The program must accept N integers as the input. The program must print the integers which have at least three prime integers as factors 
in the reverse order as the output. If there is no integer with at least three prime factors then the program must print -1 as the output.

Boundary Condition(s):
1 <= N <= 10^4

Input Format:
The first line contains the integer N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains the integers which have at least three prime integers as factors in the reverse order.

Example Input/Output 1:
Input:
6
30 20 16 70 98 210

Output:
210 70 30

Explanation:
For integer 30, the prime factors of 30 are 2, 3 and 5. So there are 3 prime factors. 
For integer 20, the prime factors of 20 are 2 and 5. So there are 2 prime factors. 
For integer 16, the prime factor of 16 is 2. So there is 1 prime factor. 
For integer 70, the prime factors of 70 are 2, 5 and 7. So there are 3 prime factors.
For integer 98, the prime factors of 98 are 2 and 7. So there are 2 prime factors.
For integer 210, the prime factors of 210 are 2, 3, 5 and 7. So there are 4 prime factors.
The integers with at least 3 prime factors are 30, 70 and 210 which are printed in reverse order.
Hence the output is 210 70 30

Example Input/Output 2:
Input:
3
2 12 4 

Output:
-1      */



#include<stdio.h>
#include<stdlib.h>
int pf();
int main()
{
int n,a[100],i,j,c,f=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=n-1;i>=0;i--)
{
    c=pf(a[i]);
    if(c==1)
    {
        printf("%d ",a[i]);
        f=1;
    }
}
if(f==0)
{
   printf("-1");
}
}
int pf(int s)
{
    int i,j,c=0,c1=0;
    for(i=1;i<=s;i++)
    {
        if(s%i==0)
        {
            c=0;
            for(j=2;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c==1)
            {
                c1++;
            }
        }
    }
    if(c1>=3)
    {
        return 1; 
    }
    else
    {
        return 0;
    }
} 
