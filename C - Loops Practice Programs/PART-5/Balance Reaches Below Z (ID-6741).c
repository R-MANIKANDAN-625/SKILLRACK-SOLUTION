/* Balance Reaches Below Z

Initially Sam has Rs. A in his hand. He spends Rs. X in odd days and Rs. Y in even days starting from day one. The program must accept four integers A, X, Y and Z as the input. The program must print the day when the balance reaches below Rs. Z as the output.

Example Input/Output 1:
Input:
1000 50 100 600

Output:
6

Explanation:
For the first day, he spends Rs. 50. So, the balance amount is Rs. 950.
For the second day, he spends Rs. 100. So, the balance amount is Rs. 850.
For the third day, he spends Rs. 50. So, the balance amount is Rs. 800.
For the fourth day, he spends Rs. 100. So, the balance amount is Rs. 700.
For the fifth day, he spends Rs. 50. So, the balance amount is Rs. 650.
For the sixth day, he spends Rs. 100. So, the balance amount is Rs. 550.
The balance reaches below 600 in sixth day.
Hence 6 is printed as the output.

Example Input/Output 2:
Input:
20 2 5 10

Output:
4   */


#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,x,y,z,c=1;
scanf("%d %d %d %d",&a,&x,&y,&z);
while(a>z)
{
    if(c%2!=0)
    {
        a-=x;
    }
    else
    {
        a-=y;
    }
    c++;
}
printf("%d",c-1);
}
