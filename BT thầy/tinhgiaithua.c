#include<stdio.h>

int main()
{   int a,b=0,c=1;
    printf("nhap n= ");scanf("%d",&a);
    while(b<a){
        b=b+1;
        printf("%d",b);
        c*=b;
        if(b==a){printf("=");}
        else{printf("*");};
    }
    printf("%d",c);

    return 0;
}
