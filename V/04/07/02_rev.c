#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   int n;
   int mass[n],br=0,ct;
   scanf("%d",&n);
   do{
       scanf("%d",&mass[br]);
         if(mass[br]%2!=0){
          br=br+1;
         }

      }while(br<n);

    br=0;
    ct=1;
    do{
       printf("%d\n",mass[br]-mass[n-ct]);
       br=br+1;
       ct=ct+1;
   }while(br<n/2);
 
   if(n%2!=0) printf("%d\n",mass[n/2]);

  return 0;
}
