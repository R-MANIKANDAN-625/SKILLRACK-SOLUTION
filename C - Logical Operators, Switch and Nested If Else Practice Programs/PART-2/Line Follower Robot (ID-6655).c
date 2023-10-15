/*Line Follower Robot

A line follower robot has two sensors namely left sensor and right sensor.
The program must accept two characters CH1 representing the status of the left sensor and CH2 representing
the status of the right sensor as the input. The program must print the movement of the robot based on the conditions given below.

- If CH1 is H and CH2 is H, then the movement of the robot is STOP
- If CH1 is L and CH2 is H, then the movement of the robot is TURN RIGHT
- If CH1 is H and CH2 is L, then the movement of the robot is TURN LEFT
- If CH1 is L and CH2 is L, then the movement of the robot is FORWARD

Example Input/Output 1:
Input:
L L

Output:
FORWARD

Example Input/Output 2:
Input:
L H

Output:
TURN RIGHT */

#include<stdio.h>
#include<stdlib.h>

int main()
{
char ch1,ch2;
scanf(" %c %c ",&ch1,&ch2);
if (ch1=='H' && ch2=='H')
{
    printf("STOP");
}
else if (ch1=='L' && ch2=='H')
{
    printf("TURN RIGHT");
}
else if (ch1=='H' && ch2=='L')
{
    printf("TURN LEFT");
}
else if(ch1=='L' && ch2=='L')
{
    printf("FORWARD");
}
}
