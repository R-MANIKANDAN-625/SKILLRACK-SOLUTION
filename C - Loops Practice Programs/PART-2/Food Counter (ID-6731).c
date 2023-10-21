/*Food Counter

The program must accept N number of food items CH represented in lowercase alphabets as the input.
The program must print the output based on the following conditions.

p represents popcorn, s represents samosa, i represents icecream, j represents juice, t represents tea, c represents coffee.
p and s can be bought in the 1st counter.
i and j can be bought in the 2nd counter.
t and c can be bought in the 3rd counter.

If any one of the input values is not in the food items mentioned above, then the program must print UNAVAILABLE as the output.

Example Input/Output 1:
Input:
4
p
t
c
v

Output:
1st counter
3rd counter
3rd counter
UNAVAILABLE

Example Input/Output 2:
Input:
2
i
j

Output:
2nd counter
2nd counter   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
char a;
scanf("%d ",&n);
for(int i=0;i<n;i++)
{
    scanf(" %c",&a);
    if(a=='p' || a=='s')
    {
        printf("1st counter");
    }
    else if(a=='i' || a=='j')
    {
        printf("2nd counter");
    }
    else if(a=='t' || a=='c')
    {
        printf("3rd counter");
    }
    else
    {
        printf("UNAVAILABLE");
    }
    printf("\n");
}
}
