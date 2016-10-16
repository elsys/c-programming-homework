#include<stdio.h>
int main(){
	float j,r,t;
	scanf("%f",&j);
	scanf("%f",&r);
	scanf("%f",&t);
	if(j<r){
		if(r<t)printf("%.1f\n",t);
		else printf("%.1f\n",r);
		}
	else {
		if(j<t)printf("%.1f\n",t);
		else printf("%.1f\n",j);
		}
	return 0;
}
