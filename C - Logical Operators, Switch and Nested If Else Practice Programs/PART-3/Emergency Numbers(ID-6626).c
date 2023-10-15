/* Shibani's friend has met with an accident. She needs to call ambulance to take her to the hospital.
She knows the first two digits of the emergency number as 10 but she couldn’t recollect the last digit from her memory.
She is confused with the digits 0, 1, 2 and 8. Help her to save her friend by knowing all the emergency numbers with
all the possible digits.

The following are the emergency numbers for the various departments.
100 - Police
101 - Fire
102 - Disaster Management
108 - Ambulance

The program must print Valid if the digit guessed by Shibani is 8. Else if the digit is one among 0, 1, 2, 
then it must print the name of the department. The program must print Invalid if any other digit is entered.


Example Input/Output 1:
Input:
8

Output:
Valid

Example Input/Output 2:
Input:
4

Output:
Invalid

Example Input/Output 3:
Input:
1

Output:
Fire  */


#include<stdio.h>
#include<stdlib.h>

int main()
{
int a;
scanf("%d",&a);
a=a%10;
if(a==8)
{
    printf("Valid");
}
else if(a==1)
{
    printf("Fire");
}
else if(a==2)
{
    printf("Disaster Management");
}
else if(a==0)
{
    printf("Police");
}
else
{
    printf("Invalid");
}
}
