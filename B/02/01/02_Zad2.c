#include <stdio.h>
int main() 

	{
	  float a, b, c, max;
	  
	
          scanf("%f",&a);
          scanf("%f",&b);
          scanf("%f",&c);

          max=a;

          if(b>a)
          {
          max=b;
              if(c>max)
                {
                 max=c;
                }
        }
        else if(c>a){
        max=c;
        }
        printf("%.1f\n",max);
        return 0;
        }

