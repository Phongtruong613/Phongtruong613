#include <stdio.h>
int main(){
    float a,b,c=0;
    printf("nhap so: ");scanf("%f",&a);
    for(b=1;b<=a;++b)
    { printf("1/%.0f+",b);
      c+=1/b;
    }
    printf("=%f\n",c);
    for(b=1;b<=a;++b)
    { printf("1/(2*%.0f\n)+",b);
      c+=1/(2*b);
    }
    printf("=%f",c);
    for(b=1;b<=a;++b)
    { printf("1/(2*%.0f+1)\n)+",b);
      c+=1/(2*b+1);
    }
    printf("=%f",c);
}