#include<stdio.h>
int main(){
  float k,o,c;
	scanf("%f",&k);
	scanf("%f",&o);
	scanf("%f",&c);
		if(k>o && c)
			{
			printf("%f e nay golyamo",k);
			}
		if(o>k && c)	
			{
			printf("%f e nay golyamo",o);
			}
		if(c>k && o)
			{
			printf("%f e nay golyamo",c);
			}
return 0;
}
