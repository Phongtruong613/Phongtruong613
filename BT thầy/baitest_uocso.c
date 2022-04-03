
#include <stdio.h>

int main()
{   int x,b,c;
    printf("nhập số: ");scanf("%d",&x);
    printf ("ước số của %d là: ",x);
    for(int a=1;a<=x;a++){
        if(x%a==0){
        printf("%d,",a);}    
        }
    

    return 0;
}

