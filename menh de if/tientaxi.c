/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main ()
{
    int a;
    printf("nhap so km ");scanf("%d",&a);
    if (a == 1)
    {printf("tong tien: 15000 VND");}
    else if (a > 1 && a<=5)
    {printf("tong tien: %d VND",15000+(a-1)*13500);}
    else if (a > 6)
    {printf("tong tien: %d VND",15000+4*13500+(a-5)*11000);}
    else
    {printf("tong tien: %f VND",(15000+4*13500+(a-5)*11000)*0.9);}
}
   