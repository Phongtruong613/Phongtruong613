#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    printf("nhap chuoi: ");
    fgets(a,sizeof(a),stdin);
    int n=strlen(a);
    int i,l;
    printf("nhap vi tri: ");scanf("%d",&i);
    printf("nhap chieu dai: ");scanf("%d",&l);
    for(int j=0;j<n;j++){
        if(j==i){
            for(j=i;j<i+l;j++){
                printf("%c",a[j]);
            }
        }
    }
}

