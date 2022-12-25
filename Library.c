#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#define PI 3.141592654

double find_angle(char *a,char *b)
{
	int  a1,b1,c1,a2,b2,c2;
	double res;


   if(a[0]=='-')
    {
    	a1=-(a[1]-48);

        if(a[3]=='-')
        	b1=-(a[4]-48);
        else
        	b1=a[4]-48;

        if(a[6]=='-')
        	c1=-(a[7]-48);
        else
        	c1=a[7]-48;
    }
    else
    {
    	a1=-(a[0]-48);

        if(a[2]=='-')
        	b1=-(a[3]-48);
        else
        	b1=a[3]-48;

        if(a[5]=='-')
        	c1=-(a[6]-48);
        else
        	c1=a[6]-48;
    }



    if(b[0]=='-')
    {
    	a2=-(b[1]-48);

        if(b[3]=='-')
        	b2=-(b[4]-48);
        else
        	b2=b[4]-48;

        if(b[6]=='-')
        	c2=-(b[7]-48);
        else
        	c2=b[7]-48;
    }
    else
    {
    	a2=-(b[0]-48);

        if(a[2]=='-')
        	b2=-(b[3]-48);
        else
        	b2=b[3]-48;

        if(a[5]=='-')
        	c2=-(b[6]-48);
        else
        	c2=b[6]-48;
    }


   res=(double)(a2*b1-a1*b2)/(double)(a1*a2+b1*b2);

   res=atan(res);

   res=res*180/PI;

   return abs(res);
}

double find_distance(char *lat1,char *long1,char *lat2,char *long2)
 {
 double latf1,latf2,longf1,longf2,res;


 if(lat1[strlen(lat1)-1]=='s' || lat1[strlen(lat1)-1]=='S')
 {
 	lat1[strlen(lat1)-1]='\0';
 	latf1=-atof(lat1);
 }
 else
   {
  	lat1[strlen(lat1)-1]='\0';
 	latf1=atof(lat1);
   }


    if(long1[strlen(long1)-1]=='w' || long1[strlen(long1)-1]=='W')
 {
 	long1[strlen(long1)-1]='\0';
 	longf1=-atof(long1);
 }
 else
   {
  	long1[strlen(long1)-1]='\0';
 	longf1=atof(long1);
   }

    if(lat2[strlen(lat2)-1]=='s' || lat2[strlen(lat2)-1]=='S')
 {
 	lat2[strlen(lat2)-1]='\0';
 	latf2=-atof(lat2);
 }
 else
   {
  	lat2[strlen(lat2)-1]='\0';
 	latf2=atof(lat2);
   }

    if(long2[strlen(long2)-1]=='s' || long2[strlen(long2)-1]=='S')
 {
 	long2[strlen(long2)-1]='\0';
 	longf2=-atof(long2);
 }
 else
   {
  	long2[strlen(long2)-1]='\0';
 	longf2=atof(long2);
   }

   latf1=latf1*PI/180;
   longf1=longf1*PI/180;
   latf2=latf2*PI/180;
   longf2=longf2*PI/180;

   res=3440.1*acos((sin(latf1)*sin(latf2))+cos(latf1)*cos(latf2)*cos(longf1-longf2)); 
  printf("%.2lf km\n",res*1.852);

   return (res*1.852);

}

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
	
