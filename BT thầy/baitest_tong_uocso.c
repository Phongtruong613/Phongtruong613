#include <stdio.h>

int main()
{   int x,b,c=0;
    printf("nhập số: ");scanf("%d",&x);
    printf ("ước số của %d là: ",x);
    for(int a=1;a<=x;a++){
        if(x%a==0){
        printf("%d,",a);
            if(a%2==0 && a>1 && a<x){
                c+=a;
            }
        }    
        }
    
    printf("\n tổng các ước chẵn là %d",c);
    return 0;
}


