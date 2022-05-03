#include <stdio.h>
int bangso(int a[],int n){
    int b=0,j=0,i=0;
    for(i=0;i<n;i++){
        if(a[i]>0){
            b+=a[i];
            j++;
        }
    }
    
    return b/j;
}
int main()
{   
    int n;
    printf("nhap n= ");scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("a[%d]= ",i);scanf("%d",&a[i]);
    }
    printf("%d",bangso(a,n));
}
