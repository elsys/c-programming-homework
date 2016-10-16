#include <stdio.h>
int main()
{
  float a,b,c;
	printf("a= ");
	scanf("%f",&a);
	printf("\nb= ");
	scanf("%f",&b);
	printf("\nc= ");
	scanf("%f",&c);

	if(a>b && a>c){
		 printf("\n%.1f\n",a);
 	  }
   	if(b>a && b>c){
   		 printf("\n%.1f\n",b);
  	 }
   	if(c>a && c>b){
    		printf("\n%.1f\n",c);
   }
}
