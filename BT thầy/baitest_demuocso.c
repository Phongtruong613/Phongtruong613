#include <stdio.h>

int main()
{   int x,b=0,c,i;
    printf("nhập số: ");scanf("%d",&x);
    for(int a=1;a<=x;a++){
        if(x%a==0){
        b++;
        };
    }
    printf("%d có %d ước số\n",x,b);
    for(i=x-1;x%i!=0;i--){
    };
    printf("ước số lớn nhất %d\n",i);
    for(i=2;x%i!=0;i++){
    };
    printf("ước số nhỏ nhất %d",i);
    return 0;
}




