/*Multiplied by the Unit Digit of Next Integer

The program must accept N integers as the input. The program must print each integer multiplied by the unit digit of the next integer in the reverse order as the output. The last integer is multiplied by the unit digit of the first integer.

Boundary Condition(s):
1 <= N <= 10^4

Input Format:
The first line contains the integer N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains N integers separated by space(s).

Example Input/Output 1:
Input:
5
40 123 12 25 19

Output:
0 225 60 246 120

Explanation:
For integer 40, the next integer is 123. The unit digit of 123 is 3. So 40 * 3 = 120
For integer 123, the next integer is 12. The unit digit of 12 is 2. So 123 * 2 = 246
For integer 12, the next integer is 25. The unit digit of 25 is 5. So 12 * 5 = 60
For integer 25, the next integer is 19. The unit digit of 19 is 9. So 25 * 9 = 225
For integer 19, the first integer is 40. The unit digit of 40 is 0. So 19 * 0 = 0
The integers in the reverse order are 0, 225, 60, 246 and 120
Hence the output is 0 225 60 246 120

Example Input/Output 2:
Input:
4
13 56 78 120 

Output:
360 0 448 78     */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d ",&n);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
}
for(int i=n-1;i>=0;i--)
{
    if(i==n-1)
    {
        printf("%d ",a[i]*(a[0]%10));
        continue;
    }
    printf("%d ",a[i]*(a[i+1]%10));
}
}
