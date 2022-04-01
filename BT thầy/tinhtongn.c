
#include <stdio.h>

int main()
{   int a,b=0,c=0,d=0,e=0;
    printf("nhap n= ");scanf("%d",&a);
    while(b<a){
        b=b+1;
        c+=b;
        printf("%d",b);
        if(b==a){
            printf("=");
        }else{
            printf("+");
        };
        
    }
    printf("%d\n",c);
     while(e<c){
        e=e+1;
        d+=e;
        printf("%d",e);
        if(e==c){
            printf("=");
        }else{
            printf("+");
        };
        
    }
    printf("%d",d);
    return 0;
};
