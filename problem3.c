#include<math.h>

double find_area(double *a,double *b,double *c)
{
    double al,bl,cl,s;
	int i;

   al=sqrt(pow(a[0]-b[0],2.0)+pow(a[1]-b[1],2.0));
   bl=sqrt(pow(a[0]-c[0],2.0)+pow(a[1]-c[1],2.0));    
   cl=sqrt(pow(c[0]-b[0],2.0)+pow(c[1]-b[1],2.0));
    
   s=(al+bl+cl)/2;
    
   s=sqrt(s*(s-al)*(s-bl)*(s-cl));
   
   return s;

}
	
