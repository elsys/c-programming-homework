#include<stdio.h>
int main()
{
 int n=0,i,k=0,masiv[100],chislo;
 scanf("%d",&n);
   while(k<n)
   {
     scanf("%d",&chislo);
     if(chislo%2!=0){masiv[k]=chislo;k++;}
   }
   i=0;
   for(;i<(n/2);)
   { 
      printf("%d\n",(masiv[i]-masiv[(n-1)-i]));
     i++;
   }
if(n%2!=0)printf("%d",masiv[n/2]);
 
return 0;
}

