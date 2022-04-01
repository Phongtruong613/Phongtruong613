
#include <stdio.h>
#include <math.h>
int main()
{
    char a;
    printf("nhap ky tu: ");scanf("%c",&a);
    if(a>='a'&&a<='z'||a>='A'&&a<='Z'){
        printf("%c là ký tự",a);
    }
    else {
        printf("%c không là ký tự",a);
    }
   
    return 0;
}
