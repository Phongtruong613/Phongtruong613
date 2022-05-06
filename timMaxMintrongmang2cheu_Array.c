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
    
    for(int i=0;i<m;i++){
        int max,min,so;
        int h;
        max=a[i][0];
         min=a[i][0];
        for(int j=1;j<n;j++){
            if(max<a[i][j]) {max=a[i][j];}
            if(min>a[i][j]) {min=a[i][j];}
        }
    printf("dòng %d có (max,min,middle): %d,%d,",i+1,max,min);
        for(int j=0;j<n;j++){
            so=(max+min)/2;
            if(a[i][j]==so) {h=1; break;}
            else  h=0;
        }
    if(h==1){printf("%d",so);}
    else printf("n/a");
    printf("\n");
    }
}

