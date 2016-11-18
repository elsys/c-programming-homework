#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a[64],p,sum=0;
	//float k;
    int i=0,l;
   while((scanf("%f",&p))!=EOF){
        a[i]=p;
	int t=1; 
         for(int n=0;n<i;n++){ 
		 
		if(a[i]==a[n])t=0;
		
	}
	if(t)i++;

   }
	printf("%d",i);
   for(l=0;l<i;l++){

	sum=sum+fmod(a[l],i);
	}
	printf("\n%.3f",sum);
    return 0;
}


