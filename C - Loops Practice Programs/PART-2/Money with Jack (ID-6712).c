/*Money with Jack

Jack is very kind to beggars and every day Jack donates the minimum coin he has whenever a beggar requests him.
At the beginning of the day, the number of one rupee coins X, the number of two rupee coins Y and the number of
five rupee coins Z in Jack's hand are passed as the input. The number of beggars B who received the alms is also 
passed as the input. The program must print the money left in Jack's hand at the end of the day as the output.

Boundary Condition(s):
0 <= X, Y, Z <= 1000
0 <= B <= X+Y+Z

Input Format:
The first line contains the value of X, Y and Z separated by space(s).
The second line contains the value of B.

Output Format:
The first line contains the value of the money left in Jack's hand at the end of the day.

Example Input/Output 1:
Input:
2 2 4
5

Output:
15

Explanation:
The first beggar gets a 1 rupee coin.
The second beggar gets a 1 rupee coin.
The third beggar gets a 2 rupee coin.
The fourth beggar gets a 2 rupee coin.
The fifth beggar gets a 5 rupee coin.
Only 3 five rupee coins left in Jack's hand.
Hence the output is 15.

Example Input/Output 2:
Input:
5 2 10
17

Output:
0       */

// HARI MANI 625

#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,c,d,n;
int i,j,k,l;
scanf("%d %d %d %d",&a,&b,&c,&n);
a=a*1;b=b*2;c=c*5;     
while(a>0&&n>0)
{
    n--;
    a-=1;
}
while(b>0&&a==0&&n>0)
{
    n--;
    b-=2;
}
while(c>0&&b==0&&n>0)
{
        n--;
        c-=5;
}
printf("%d",a+b+c);
}
