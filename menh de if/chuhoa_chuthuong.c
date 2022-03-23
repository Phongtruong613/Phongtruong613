/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    char a;
    printf("nhap 1 ky tu ");scanf("%c",&a);
    if (a>='A' && a<='Z')
    {printf("CHU HOA");}
    else if (a>='a' && a<='z')
    {printf("chu thuong");}
    else 
    {printf("so");};
    

    
   
    return 0;
}
