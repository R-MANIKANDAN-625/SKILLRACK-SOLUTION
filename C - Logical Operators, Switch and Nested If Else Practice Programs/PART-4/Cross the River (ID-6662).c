/* Cross the River

A dog has to jump on a series of stones to cross a river. There are three stones which are represented as three numbers. 
The dog starts jumping from the first stone. If the dog is at the even number it can jump only to the next occurring odd 
number and vice versa. The program must accept three integers as the input. The program must print the maximum number of 
jumps needed to cross the river.

Note: If the dog cannot cross the river print -1 as the output.

Example Input/Output 1:
Input:
23 46 13

Output:
3

Explanation:
The dog starts at 23.
The dog jumps from 23 to 46 (odd number to even number).
The dog jumps from 46 to 13 (even number to odd number).
The dog jumps out of the river from 13.
So 3 jumps are needed.

Example Input/Output 2:
Input:
23 43 13

Output:
-1

Explanation:
The dog starts at 23.
There is no even number after 23 so the dog cannot cross the river.
So the output is -1.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if ((a%2==0 && b%2==0 && c%2==0) || (a%2!=0 && b%2!=0 && c%2!=0))
{
    printf("-1");
}
else if(a%2!=0)
{
    if(b%2!=0 && c%2==0)
    {
        printf("2");
    }
    else if(b%2==0 && c%2==0)
    {
        printf("-1");
    }
    else
    {
        printf("3");
    }
}
else
{
    if(b%2==0 && c%2!=0)
    {
        printf("2");
    }
    else if(b%2!=0 && c%2!=0)
    {
        printf("-1");
    }
    else
    {
        printf("3");
    }
}
}
