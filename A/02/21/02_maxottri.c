#include<stdio.h>
int main(){
	float j,r,t;
	printf("\tinput numbers\n");
	scanf("%f",&j);
	scanf("%f",&r);
	scanf("%f",&t);
	if(j<r){
		if(r<t)printf("\tnai-golqmoto e:%.2f\n",t);
		else printf("\tnai-golqmoto e:%.2f\n",r);
		}
	else {
		if(j<t)printf("\tnai-golqmoto e:%.2f\n",t);
		else printf("\tnai-golqmoto e:%.2f\n",j);
		}
	return 0;
}
