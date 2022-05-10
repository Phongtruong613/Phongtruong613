#include <stdio.h>
#include <string.h>
int main()
{   char a[1000];
    printf("nhap ky tu: ");
    fgets(a,sizeof(a),stdin);
    int n=strlen(a);
    printf("chuoi ban dau: ");
    printf("%s",a);
    for(int i=0;i<n;i++){int j;
        for(int j=i;j<n;j++)
        {   char key=a[i];
            a[i]=a[j];
            a[j]=key;
        }
    }
    printf("chuoi dao nguoc: ");
    for(int j=0;j<n;j++){
        printf("%c",a[j]);
    }
}

