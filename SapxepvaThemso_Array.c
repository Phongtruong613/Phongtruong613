#include <stdio.h>
int sapxep(int a[],int n){
    int i,j,key;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(a[i]>a[j]) {
                key=a[i];      
                a[i]=a[j];
                a[j]=key;     
            }
        }
    }
}
int themso(int a,int b){
    int c;
    if(a<b){
        for(c=a+1;c<b;c++){
            printf("%d ",c);
        }
    }
}
    
int print(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

int main()
{
    int n,i,j;
    printf("nhap n= ");scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("i[%d]= ",i);scanf("%d",&a[i]);
    }
    printf("day so ban dau: ");print(a,n);printf("\n");
    
    printf("sap xep: ");sapxep(a,n);print(a,n);printf("\n");
    
    printf("các số còn thiếu: ");
    
    for(int i=0;i<n;i++){
            int x=a[i],y=a[i+1];
            themso(x,y);
    }
}



