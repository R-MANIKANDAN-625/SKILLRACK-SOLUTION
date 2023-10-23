/*Animal(s) or Bird(s) Sounds

Alex hear N different sounds of animals and birds in a zoo. The program must accept N characters representing the names of animals 
or birds. The names can be D for dog, C for cat and B for cuckoo bird. If he hears sound from animal D, then the program must
print Bark as the output. If he hears sound from animal C, then the program must print Meow as the output. If he hears sound 
from cuckoo bird B, then the program must print Cuckoo as the output.

Note: Alex hear only the sounds of dog, cat and cuckoo bird.

Example Input/Output 1:
Input:
5
D B B C C

Output:
Bark
Cuckoo
Cuckoo
Meow
Meow

Example Input/Output 2:
Input:
3
B B B

Output:
Cuckoo
Cuckoo
Cuckoo     */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
char a;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf(" %c",&a);
    if(a=='D')
    {
        printf("Bark");
    }
    else if(a=='B')
    {
        printf("Cuckoo");
    }
    else if(a=='C')
    {
        printf("Meow");
    }
    printf("\n");
}
}
