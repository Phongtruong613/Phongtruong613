
#include <stdio.h>

int main()
{
    int a,b;
    printf("nhập số a: ");scanf("%d",&a);
    printf("nhập số b: ");scanf("%d",&b);
    if (a>0){
        if(b>0){
            printf("%d và %d cùng dấu",a,b);
        }
        else if(b<0){
            printf("%d và %d trái dấu",a,b);
        }
        else { printf("không xét");
        };
    }
    else {
        if(b>0){
            printf("%d và %d trái dấu",a,b);
        }
        else if(b<0){
            printf("%d và %d cùng dấu",a,b);
        }
        else { printf("không xét");
        };
    }
    

    return 0;
}

