#include <stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    printf("nhap chuoi: ");
    fgets(a,sizeof(a),stdin);
    int n=strlen(a);
    int x=0;
    for(int i=0;i<n;i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='u' || a[i]=='i' || a[i]=='o' || a[i]=='A' || a[i]=='E' || a[i]=='U' || a[i]=='I' || a[i]=='O'){
            x++;
        }
    }
    printf("co %d chu cai nguyen am",x);
}

