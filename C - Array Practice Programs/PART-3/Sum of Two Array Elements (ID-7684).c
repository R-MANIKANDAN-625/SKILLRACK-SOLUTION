/*Sum of Two Array Elements

The program must accept two integer arrays of size N as the input. The program must print the sum of the first element in the 
first array and Nth element in the second array, then the program must print the sum of the second element in the first array and 
(N-1)th element in the second array and so on.

Bounary Condition(s):
1 <= N <= 10^4

Input Format:
The first line contains the integer N.
The second line contains N integers separated by space(s).
The third line contains N integers separated by space(s).

Output Format:
The first line contains N integers separated by space(s).

Example Input/Output 1:
Input:
5
10 5 20 25 50
30 25 40 15 20

Output:
30 20 60 50 80

Explanation:
The 1st element in the first array is 10 and the 5th element in the second array is 20 and their sum is 30. So 30 is printed.
The 2nd element in the first array is 5 and the 4th element in the second array is 15 and their sum is 20. So 20 is printed.
The 3rd element in the first array is 20 and the 3rd element in the second array is 40 and their sum is 60. So 60 is printed.
The 4th element in the first array is 25 and the 2nd element in the second array is 25 and their sum is 50. So 50 is printed.
The 5th element in the first array is 50 and the 1st element in the second array is 30 and their sum is 80. So 80 is printed.

Example Input/Output 2:
Input:
7
12 20 1 15 4 10 21
19 50 26 15 19 10 8

Output:
20 30 20 30 30 60 40    */


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
for(int i=0,j=n-1;i<n,j>=0;i++,j--)
{
    printf("%d ",a[i]+b[j]);
}
}
