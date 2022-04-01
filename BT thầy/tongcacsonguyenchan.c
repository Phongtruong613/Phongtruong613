
#include <stdio.h>

int main()
{
    int a,b=0,c=0,d=0;
    printf("nhap so: ");scanf("%d",&a);
    do{
       b=b+2;
       c+=b;
       printf("%d",b);
       if(b==a){
           printf("=");
       }else{
          printf("+"); 
       };
        
    }
    while(b<a);
    printf("%d\n",c);
    printf("tong cac so nguyen chan toi %d la %d",a,c);
    
   
    return 0;
}
