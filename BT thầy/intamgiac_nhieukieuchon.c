
#include <stdio.h>

int main()
{   int a,b;
    char z='A';
    printf("chon kieu in (chon 1,2,3): ");scanf("%d",&a);
    printf("nhap chieu cao: ");scanf("%d",&b);
    if(a==1){
    for (int x=1;x<=b;x++){
        for(int y=1;y<=x;y++){
        printf("*");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
        };
        printf("\n");
    }
    }
    else if (a==2){
     for (int x=1;x<=b;x++){
        for(int y=1;y<=x;y++){
        printf("%d",y);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
        };
        printf("\n");  
     }
    }
    else if  (a==3){
      for (int x=1;x<=b;x++){
        for(int y=1;y<=x;y++){ 
        printf("%c",z);
        };
        z++;
        printf("\n");  
     }  
    }
    else {
        printf("khong in");
    }
    return 0;
}

