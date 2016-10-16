#include<stdio.h>
int main(){
	int a,b,c;
	printf("\n vuvedi chislo");
	scanf("%d",&a);
	if(a>0){
		b=a*a;
	}
	if(a<0){
		b=a*a;
		b=b*-1;
	}
	c=a*a*a;
	printf(" %d\n",b);
	printf(" %d\n",c);


}
