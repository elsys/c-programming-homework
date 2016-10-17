#include<stdio.h>
int main(){
  float k,o,c;
	scanf("%f",&k);
	scanf("%f",&o);
	scanf("%f",&c);
		if(k>o && k>c)
			{
			printf("%.1f",k);
			}
		else if(o>k && o>c)	
			{
			printf("%.1f",o);
			}
		else if(c>k && c>o)
			{
			printf("%.1f",c);
			}
return 0;
}
