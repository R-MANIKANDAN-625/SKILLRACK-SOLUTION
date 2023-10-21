/*Sum of Difference(s)

The program must accept an integer X and a digit Y as the input. The program must calculate the sum of absolute differences 
between each digit of X and the digit Y, then the program must print the sum as the output.

Example Input/Output 1:
Input:
123 5

Output:
9

Explanation:
The difference between 1 and 5 is 4.
The difference between 2 and 5 is 3.
The difference between 3 and 5 is 2.
The sum of 4, 3 and 2 is 9.
Hence 9 is printed

Example Input/Output 2:
Input:
345 4

Output:
2

Explanation:
The difference between 3 and 4 is 1.
The difference between 4 and 4 is 0.
The difference between 4 and 5 is 1.
The sum of 1, 0 and 1 is 2.
Hence 2 is printed.    */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y,s=0;
scanf("%d %d",&x,&y);
while(x>0)
{
    s+=abs(x%10-y);
    x/=10;
}
printf("%d",s);
}
