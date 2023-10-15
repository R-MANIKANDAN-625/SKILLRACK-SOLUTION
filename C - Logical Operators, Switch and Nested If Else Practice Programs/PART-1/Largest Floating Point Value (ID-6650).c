/* largest floating value

Three floating point numbers are passed as the input to the program. 
The program must print the number which has the largest floating point value in it.
Example Input/Output 1:
Input:
12.45 7.89 30.56

Output:
7.89

Example Input/Output 2:
Input:
2.05 3.56 2.67

Output:
2.67   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
float a,b,c;
float x,y,z,max;
scanf("%f %f %f",&a,&b,&c);

// converting int then subract into the float value
//   ex: 12---> int 
//       12.45----> float

x=a-(int)a;
y=b-(int)b;
z=c-(int)c;
max=(x>y && x>z)?a:(y>z)?b:c;
printf("%.2f",max);
}
