/*Reappearance Exam

The program must accept two integers M1 representing the marks scored by a student in an exam and M2 representing the minimum
marks to pass the exam. If the student fails in the exam, then the student must reappear for the exam until the student passes the exam. 
For each reappearance, the marks scored by the student gets doubled. The program must print the number of reappearance(s) needed to pass
the exam as the output.

Example Input/Output 1:
Input:
2 35

Output:
5

Explanation:
The marks scored in the first reappearance is 4
The marks scored in the second reappearance is 8
The marks scored in the third reappearance is 16
The marks scored in the fourth reappearance is 32
The marks scored in the fifth reappearance is 64
Only after the fifth reappearance, the student passes the exam.
Hence the output is 5

Example Input/Output 2:
Input:
50 25

Output:
0   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,m,c=0;
scanf("%d %d",&n,&m);
while(n<m)
{
    n*=2;
    c++;
}
printf("%d",c);
}
