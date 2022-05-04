#include <stdio.h>
int main()
{
    int m,n;
    printf("số dòng: ");scanf("%d",&m);
    printf("số cột: ");scanf("%d",&n);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("dãy số ban đầu\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<m;i++){
                for(int k=i;k<m;k++){
                    if(a[i][j]>a[k][j]){
                    int tmp=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=tmp;
                    }
                }
            }
        }
        else {
            for(int i=0;i<m;i++){
                for(int k=i;k<m;k++){
                    if(a[i][j]<a[k][j]){
                    int tmp=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=tmp;
                    }
                }
            }
        }
    }
    printf("dãy số lúc sau:\n");
    for(int k=0;k<m;k++){
        for(int j=0;j<n;j++){
            printf("%d ",a[k][j]);
        }
        printf("\n");
    }
}
