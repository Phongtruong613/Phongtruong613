#include<stdio.h>

int main()
{   int a=0,n;
    printf("nhap n= ");scanf("%d",&n);
    while(a<10){
        a=a+1;
        printf("%d*%d=%d\n",n,a,a*n);
       
    };

    return 0;
}
