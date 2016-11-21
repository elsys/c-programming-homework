#include<stdio.h>
    int main (){
        float k[64],t,y;
        int i,n,h,m;
        y=0;
        h=0;
       for(i=0;scanf("%f", &t)!=0;i++)
       {
           for(m=0;m<64;m++)
           {
               if(k[m]==t)
               {
                  n=1;
               }
           }
           if(n==0)
           {
               k[h]=t;
               h++;
           }
           printf("%d\n", h);
       }
       while(i<h)
       {
           do
           {
               k[i]=k[i]-h;
           }while(k[i]>=0);
           y=y+(k[i]-h);
           y=y/5;
       }
       printf("%.3f", y);
    }
