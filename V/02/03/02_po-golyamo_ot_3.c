#include<stdio.h>
int main(){
  float k,o,c;
	scanf("%f",&k);
	scanf("%f",&o);
	scanf("%f",&c);
		if(k>o && k>c)
			{
			printf("%.1f e nay golyamo",k);
			}
		else if(o>k && o>c)	
			{
			printf("%.1f e nay golyamo",o);
			}
		else if(c>k && c>o)
			{
			printf("%.1f e nay golyamo",c);
			}
return 0;
}
