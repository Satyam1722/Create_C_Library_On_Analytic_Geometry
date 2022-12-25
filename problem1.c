#include<math.h>
#include<string.h>
#include<stdlib.h>

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