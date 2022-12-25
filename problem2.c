#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#define PI 3.141592654

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