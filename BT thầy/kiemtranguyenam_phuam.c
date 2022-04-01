/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a;
    printf("kiểm tra ký tự nguyên âm hay phụ âm ?\n" );
    printf("nhập ký tự: ");scanf("%c",&a);
    if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='y'){
        printf("%c là nguyên âm",a);
    } else {
        printf("%c là phụ âm",a);
    }

    return 0;
}
