/*
The program must accept two characters CH1 and CH2 as the input. 
The program must print the direction as the output based on the conditions given below.
   
    - If CH1 is N and CH2 is E, then the direction is North East.
    - If CH1 is N and CH2 is W, then the direction is North West.
    - If CH1 is S and CH2 is E, then the direction is South East.
    - If CH1 is S and CH2 is W, then the direction is South West. 
    - If CH1 is E and CH2 is N, then the direction is East North.
    - If CH1 is E and CH2 is S, then the direction is East South. 
    - If CH1 is W and CH2 is N, then the direction is West North.
    - If CH1 is W and CH2 is S, then the direction is West South. 
    - For any other values of CH1 and CH2 the program must print INVALID as the output.
    
Example Input/Output 1:
Input:
N E

Output:
North East

Example Input/Output 2:
Input:
S W

Output:
South West

Example Input/Output 3:
Input:
S N

Output:
INVALID   */

#include<stdio.h>
#include<stdlib.h>

// sorry guys actually the code was short just for expreince 

int main()
{
char a,b;
scanf(" %c %c",&a,&b);
if(a=='N' && b=='E')
{
    printf("North East");
}
else if(a=='N' && b=='W')
{
    printf("North West");
}
else if(a=='S' && b=='E')
{
    printf("South East");
}
else if(a=='S' && b=='W')
{
    printf("South West");
}
else if(a=='W' && b=='N')
{
    printf("West North");
}
else if(a=='W' && b=='S')
{
    printf("West South");
}
else if(a=='E' && b=='N')
{
    printf("East North");
}
else if(a=='E' && b=='S')
{
    printf("East South");
}
else
{
    printf("INVALID");
}
}
