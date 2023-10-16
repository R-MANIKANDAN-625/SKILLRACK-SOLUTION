/*Toy Purchase

A boy wants to buy a toy. He can buy a toy only if the age mentioned on the box of the toy is less than his age. As per his mother's condition, the toy must not be made of plastic. But if the toy is made of eco-friendly plastic then the toy can be bought. The program must accept two integers representing the age of the boy and the age mentioned on the box of the toy followed by a character which denotes if the toy is made of plastic or not (P denotes plastic and any other alphabet denotes Non-Plastic). All non-plastic toys can be bought by the boy. If the toy is made of plastic then the program must accept another character (Y indicates the toy is eco-friendly) which indicates if it is an eco-friendly toy or not. Finally, the program must print Yes if the toy can be bought else the program must print No as the output.

Example Input/Output 1:
Input:
12 10 B

Output:
Yes

Example Input/Output 2:
Input:
7 5 P Y

Output:
Yes

Example Input/Output 3:
Input:
12 5 P N

Output:
No    */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b;
char c,x;
scanf("%d %d %c",&a,&b,&c);
if (a>b)
{
    if (c=='P')
    {
        scanf(" %c",&x);
        if(x=='Y')
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        printf("Yes");
    }
}
else
{
    printf("No");
}
}
