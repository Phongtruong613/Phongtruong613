#include <stdio.h>

void main()
{
   int a,b,c=0,d=0;
   printf("nhap so: ");scanf("%d",&a);
   if (a%2==0)
   {for (b=2;b<=a;b=b+2)
   {printf("%d+",b);
      c+=b;
 
   }}
   else
   {for (b=1;b<=a;b=b+2)
   {printf("%d+",b);
      c+=b;
   }}
   printf("=%d\n",c);
  
  for (b=1;b<=a;b=b+1)
   {printf("%d+",b*b);
      d+=b*b; }
    printf("=%d",d);
    
}
