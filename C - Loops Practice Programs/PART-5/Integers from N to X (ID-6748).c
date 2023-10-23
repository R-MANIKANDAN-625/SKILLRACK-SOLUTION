/*Integers from N to X

The program must accept a two digit integer N as the input. The program must calculate the difference between the two digits of N as D. 
The program must print the integers from N to X-1 (two digit integer with difference between it's digits equal to D) as the output.

Note: The value of X must be greater than N.

Example Input/Output 1:
Input:
47

Output:
47 48 49 50 51

Explanation:
The difference between the digits of 47 is 3. So, D is 3.
The difference between the digits of 48 is 4.
The difference between the digits of 49 is 5.
The difference between the digits of 50 is 5.
The difference between the digits of 51 is 4.
The difference between the digits of 52 is 3, which is equal to D.
Hence the output is  47 48 49 50 51

Example Input/Output 2:
Input:
23

Output:
23 24 25 26 27 28 29 30 31   */


#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,x,y;
scanf("%d ",&n);
x=abs((n%10)-(n/10)%10);
while(n!=0)
{
    printf("%d ",n);
    n++;
    if((abs((n%10)-(n/10)%10))==x)
    {
        break;
    }
}
}
