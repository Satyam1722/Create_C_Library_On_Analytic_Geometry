#include<stdio.h>
#include"library.h"

int main(){
   
   double a[2],b[2],c[3];

   int i;

   for(i=0;i<2;i++)
    scanf("%d",&a[i]);

   for(i=0;i<2;i++)
    scanf("%d",&b[i]);

   for(i=0;i<2;i++)
    scanf("%d",&c[i]);

  printf("%ld",find_area(a,b,c));

  return 0;
  

}