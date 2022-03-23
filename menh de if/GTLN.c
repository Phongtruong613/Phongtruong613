/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int a,b,c,max;
    printf("nhap so a:  ");scanf("%d",&a);
    printf("nhap so b:  ");scanf("%d",&b);
    printf("nhap so c:  ");scanf("%d",&c);
    if (a>b && a>c)
    {printf("so lon nhat la %d",a);}
    else if (b>a && b>c)
   {printf("so lon nhat la %d",b);}
    else if (c>a && c>b)
   {printf("so lon nhat la %d",c);};
    

    
   
    return 0;
}
