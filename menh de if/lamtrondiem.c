/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main ()
{
    float a,c;
    int b;
    printf("nhap diem: ");scanf("%f",&a);
    b=(int)a;
    c=a-b;
    if (c<0.25)
    {
        printf("%d.00",b);
    }
    else if (c>=0.25 && c<=0.5)
    {
        printf("%d.50",b);
    }
   if (c>0.5)
    {
        printf("%d",b+1);
    }
    
}