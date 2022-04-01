
#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d;
    printf("ax2+bx+c=0 ?\n");
    printf("nhap a= ");scanf("%lf",&a);
    printf("nhap b= ");scanf("%lf",&b);
    printf("nhap c= ");scanf("%lf",&c);
    if(a!=0){d=b*b-4*a*c;
        if(d>0){
            printf("x1=%lf và x2=%lf",((-b)+ sqrt(d))/(2*a),((-b)-sqrt(d))/(2*a));
        }
        else if (d=0){printf("x=%lf",(-b)/(2*a));
            
        }
        else {printf("vô nghiệm");}
        
    }
    else{printf("hàm bậc 1");}
    return 0;
}
