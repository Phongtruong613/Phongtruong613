/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   float dtb;
    printf("nhap diem: ");scanf("%f",&dtb);
    if (dtb>=8.5)
    {
        printf("Loai A"); 
    }
    else if (dtb<8.5 && dtb>=6.5)
    {
        printf("Loai B");
    }
    else if (dtb<6.5 && dtb>=5)
    {
        printf("Loai D");
    }
    else if (dtb<5 && dtb>=3.5)
    {
        printf("Loai C");
    }
    else 
    {
        printf("Loai D");
    }
    return 0;
}
