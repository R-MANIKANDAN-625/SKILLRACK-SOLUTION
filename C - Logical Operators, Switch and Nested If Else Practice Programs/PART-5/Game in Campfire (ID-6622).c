/*Game in Campfire

Six friends are on a trip to Shimla. They are playing a game in the campfire. Everyone has their turn.
They can choose any one from S (Situation), P (Performance) and T (Truth). If they choose S, then they will 
be given a scenario to talk about . If they choose P, they will have to perform. If they choose T, they will
have to tell the truth for all the questions they have been asked. The program must print the output based on the following conditions.

If any one of the input values is not in the list of alphabets S, P and T, then the program must print Invalid.

If they have chosen S, then they have to choose a number representing a topic. The numbers and the topics they represent are as given below.
 1 - Social topic
 2 - Entertainment topic
 3 - Historical topic

If they have chosen P, then they have to choose an alphabet representing a performance.
The alphabets and the performance names they represent  are as given below.

 D - Dancing
 S - Singing
 M - Mimicry

If they have chosen T, then they have to choose an alphabet representing the type of truth.
The alphabets and the types of truth they represent  are as given below.
 P - Personal
 C - Professional

If any of the input values is not in the list mentioned above, then the program must print Invalid.

Example Input/Output 1:
Input:
S 2

Output
Situation - Entertainment topic

Example Input/Output 2:
Input:
T P

Output:
Truth - Personal

Example Input/Output 3:
Input:
P R

Output:
Invalid

Example Input/Output 4:
Input:
R

Output:
Invalid   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
char a,b;
scanf(" %c",&a);
if(a=='S')
{
    scanf(" %c",&b);
    if(b=='1')
    {
        printf("Situation - Social topic");
    }
    else if(b=='2')
    {
        printf("Situation - Entertainment topic");
    }
    else if(b=='3')
    {
        printf("Situation - Historical topic");
    }
    else 
    {
        printf("Invalid");
    }
}
else if(a=='P')
{
    scanf(" %c",&b);
    if(b=='D')
    {
        printf("Performance - Dancing");
    }
    else if(b=='S')
    {
        printf("Performance - Singing");
    }
    else if(b=='M')
    {
        printf("Performance - Mimicry");
    }
    else
    {
        printf("Invalid");
    }
}
else if(a=='T')
{
    scanf(" %c",&b);
    if(b=='P')
    {
        printf("Truth - Personal");
    }
    else if(b=='C')
    {
        printf("Truth - Professional");
    }
    else 
    {
        printf("Invalid");
    }

}
else 
{
    printf("Invalid");
}
}
