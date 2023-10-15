/* Count of Stick(s)

The program must accept the number of whips X as the input. The stick used to whip is broken after a certain number of whips based on the data given below.
    - The first stick is broken after 5 beats
    - The second stick is broken after 8 beats
    - The third stick is broken after 12 beats
    - The fourth stick is broken after 20 beats
    - The fifth stick is broken after 30 beats
    - The sixth stick is broken after 40 beats
    - Assume the seventh stick as unbreakable

The program must print the number of sticks required for X whips based on the given conditions.
 
Example Input/Output 1:
Input:
6

Output:
2

Example Input/Output 2:
Input:
25

Output:
3
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y;
scanf("%d",&x);
if(x<=5)
{
    y=1;
}
else if(x>5 && x<=13)
{
    y=2;
}
else if(x>13 && x<=25)
{
    y=3;
}
else if(x>25 && x<=45)
{
    y=4;
}
else if(x>45 && x<=75)
{
    y=5;
}
else if(x>75 && x<=115)
{
    y=6;
}
else
{
    y=7;
}
printf("%d",y);
}

                ANOTHER METHOD OF COUNTS OF BROKEN STICKS


#include <stdio.h>
int main() {
    int x, sticks = 0;
    scanf("%d", &x);
    while (x > 0) 
    {
        sticks++;
        if (sticks == 7)
         break; // seventh stick is unbreakable
        if (sticks == 1 && x >= 5) 
        x -= 5;
        else if (sticks == 2 && x >= 8)
         x -= 8;
        else if (sticks == 3 && x >= 12)
         x -= 12;
        else if (sticks == 4 && x >= 20)
         x -= 20;
        else if (sticks == 5 && x >= 30)
         x -= 30;
        else if (sticks == 6 && x >= 40)
         x -= 40;
        else break; // if x is less than the number of beats for the current stick, we can't break any more sticks
    }
    printf("%d\n", sticks);
    return 0;
}
   
