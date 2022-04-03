
#include <stdio.h>

int main()
{
    int a;
    nhap: printf("nhap so: ");scanf("%d",&a);
    if(a!=0){
    if (a==1 || a==3 || a==5 || a==7) {
       printf("%d là số nguyên tốn\n",a); 
    }
    else if (a%2==0 || a%3==0 ||a%5==0 ||a%7==0){
        printf("%d là không số nguyên tố\n",a);
    } 
    else {
        printf("%d là số nguyên tố\n",a);
    }
    goto nhap;
    }
    else
        goto end;
 end: 
    return 0;
}


