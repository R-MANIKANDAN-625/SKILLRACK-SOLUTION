// Day in a Week
/*
The program must accept an integer D representing a day of the week. 
The program must print the corresponding readable string value of the day of the week as the output.

Note: The integer value for Monday is 1, Tuesday is 2 and so on until 7 is for Sunday.

Example Input/Output 1:
Input:
2

Output:
Tuesday

Example Input/Output 2:
Input:
5

Output:
Friday
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int d;
scanf("%d",&d);
switch(d)
{
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    default:
        printf("Sunday");
}
}
