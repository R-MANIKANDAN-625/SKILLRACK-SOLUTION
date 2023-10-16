/*Mobile Brand

A boy wants to buy a new mobile. He has chosen three mobile phones of different brands and are kept in the following order (Sony, Samsung, Nokia). Now he has to choose the most preferred mobile. The RAM (in MB) and the cost of each mobile are given as the input. The program must print the brand name of the most preferred mobile.
Note: 
    - The mobile with the lowest cost is the preferred mobile.
    - If two or more mobiles have the same cost, then the mobile with maximum RAM is the preferred mobile.

Input Format:
Three lines with each line containing the RAM and the cost of the mobile separated by a space.

Output Format:
The first line contains the brand name of the mobile.

Example Input/Output 1:
Input:
1024 4500   
2048 4500  
1536 6000   

Output:
Samsung

Example Input/Output 2:
Input:
512 1000  
1024 1000  
2048 1000  

Output:
Nokia      */


#include<stdio.h>
#include<stdlib.h>

int main()
{
int r[3],c[3],n=0,i;
char a[3][10]={"Sony","Samsung","Nokia"};
for(i=0;i<3;i++)
{
    scanf("%d %d",&r[i],&c[i]);
}
for(i=1;i<3;i++)
{
    if(c[i]<c[n])
    {
        n=i;
    }
    else if(c[i]==c[n]&&r[i]>r[n])
    {
        n=i;
    }
}
printf("%s",a[n]);
}
