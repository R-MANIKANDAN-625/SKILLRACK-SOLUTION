/*First C Multiples of C

The program must accept an integer N as the input. The program must count the digits of N as C, 
then the program must print the first C multiples of C as the output.

Example Input/Output 1:
Input:
98984

Output:
5 10 15 20 25

Example Input/Output 2:
Input:
123

Output:
3 6 9     */

// NOTE :  "%n"  ---> it calculate how many letter or character or count the digit of the given input. where it is in integer data type. 
//                    it valid on both integer and string data type

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,c;
scanf("%d%n",&n,&c);
for(int i=1;i<=c;i++)
{
    printf("%d ",i*c);
}
}
