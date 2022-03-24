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
    int a,b,c;
    printf("nhap do dai 3 canh: ");scanf("%d%d%d",&a,&b,&c);
    if (a+b>c&&a+c>b&&b+c>a&&a==b&&b==c)
    {printf ("hinh tam giac deu");}
    else if (a+b>c&&a+c>b&&b+c>a&&a==b||b==c||a==c)
    {printf ("hinh tam giac can");}
    else if (a+b>c&&a+c>b&&b+c>a&&a==b||b==c||a==c&&a*a==(b+c)*(b+c)||b*b==(a+c)*(a+c)||c*c==(a+b)*(a+b))
    {printf ("hinh tam giac vuong can");}
    else if (a+b>c&&a+c>b&&b+c>a&&a!=b||b!=c||a!=c&&a*a==(b+c)*(b+c)||b*b==(a+c)*(a+c)||c*c==(a+b)*(a+b))
    {printf ("hinh tam giac vuong");}
    else if (a+b>c&&a+c>b&&b+c>a)
    {printf ("hinh tam giac");}
    else
    {printf("khong phai la tam giac");}
    
    
}
   