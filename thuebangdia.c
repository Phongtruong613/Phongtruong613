/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{ int a,b,c,d,e,f;
  int dongiacaset, datcoccaset, thoigiancatsat;
  int dongiavideo, datcocvideo, thoigianvideo;
  int dongiavcd, datcocvcd, thoigianvcd;
   dongiacaset=1000, datcoccaset=10000, thoigiancatsat=0.5,
   dongiavideo=5000, datcocvideo=50000, thoigianvideo=3,
   dongiavcd=10000, datcocvcd=100000, thoigianvcd=5 ;
   printf("bang caset can thue ");scanf("%d",&a);
   printf("bang video can thue ");scanf("%d",&b);
   printf("dia vcd can thue ");scanf("%d",&c);
   printf("\t\t BIEN LAI THU TIEN THUE BANG DIA\n==========================================\n");
   printf("loai bang \t so luong \t gia tien \n");
    printf ("bang caset \t %d \t\t %d\n",a,a*dongiacaset); 
    printf ("bang video \t %d \t\t %d\n",b,b*dongiavideo);
    printf ("dia vcd \t %d \t\t %d\n",c,c*dongiavcd);
 if (a>0)
    {d=datcoccaset;}
    else
    {d=0;}
if (b>0)
    {e=datcocvideo;}
    else
    {e=0;}
if (c>0) 
   {f=datcocvcd;}
    else
    {f=0;}
    printf("tien dat coc \t\t\t %d \n",d+e+f);
    printf("==========================================\n");
    printf("tong tien phai tra %d\n", a*dongiacaset+b*dongiavideo+c*dongiavcd+d+e+f);
    printf("thoi gian thue la %d", a*thoigiancatsat+b*thoigianvideo+c*thoigianvcd);
}
