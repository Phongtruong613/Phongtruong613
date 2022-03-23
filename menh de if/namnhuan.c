/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   int a;
    printf("nhap nam: ");scanf("%d",&a);
    if (a%400==0)
    {printf("nam nhuan");}
    else if (a%4==0 && a%100!=0)
    {printf("nam nhuan");}
    else {printf("khong nhuan");};

    
   
    return 0;
}
