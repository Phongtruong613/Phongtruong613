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
    printf("nhap so thang lam ");scanf("%d",&a);
    if (a<12)
    printf("luong cua ban la %.0f ",1.92*650000);
    else if (a>=12 && a<36)
    printf("luong cua ban la %.0f",2.34*650000);
    else if (a>=36 && a<60)
     printf("luong cua ban la %.0f",3.0*650000);
    else 
    printf("luong cua ban la %.0f",4.5*650000);
}
   