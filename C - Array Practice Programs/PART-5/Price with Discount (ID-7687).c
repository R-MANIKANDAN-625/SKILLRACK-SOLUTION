/*Price with Discount

The program must accept prices and discounts for N items as two arrays as the input respectively. The program must print the average of 
every three items in the given order after applying the discount with precision up to two decimal places. If there are no three items 
available to calculate the average, then consider only the available items.

Boundary Condition(s):
1 <= N <= 1000

Input Format:
The first line contains the integer N.
The second line contains N integes separated by space(s).
The third line contains N integes separated by space(s).

Output Format:
The first line contains the average of every three items after applying the discount with precision up to two decimal places.

Example Input/Output 1:
Input:
6
100 200 300 400 500 250
10 20 30 40 50 15

Output:
153.33 234.17

Explanation:
The price is 100, after applying a 10 percent discount on that price is 90.
The price is 200, after applying a 20 percent discount on that price is 160.
The price is 300, after applying a 30 percent discount on that price is 210.
The price is 400, after applying a 40 percent discount on that price is 240.
The price is 500, after applying a 50 percent discount on that price is 250.
The price is 250, after applying a 15 percent discount on that price is 212.5.
For every three items the averages are 153.33 [ (90+160+210) / 3 ] and 234.17 [ (240+250+212.5) / 3].
Hence the output is 153.33 234.17

Example Input/Output 2:
Input:
5 
250 300 400 100 150
20 25 40 45 20

Output:
221.67 87.50

Example Input/Output 3:
Input:
4
900 200 700 100
40 60 20 25

Output:
393.33 75.00   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d ",&n);
int a[n],b[n];
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
}
for(int i=0;i<n;i++)
{
    scanf("%d ",&b[i]);
}
double d,s=0;
for(int i=0;i<n;i++)
{
    d=(double)a[i]-(double)a[i]*((double)b[i]/100.0);
    s+=d;
    if((i+1)%3==0 || i==n-1)
    {
        if(i==n-1 && (i+1)%3!=0)
        {
            printf("%.2lf",s/(double)(n%3));
        }
        else
        {
            printf("%.2lf ",s/3.0);
            s=0;
        }
    }
}
}
