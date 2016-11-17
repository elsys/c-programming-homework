#include<stdio.h>
int main(){
int i=0;
int fam=0,fakekoce=0;
float koce[64],legion,k,wod;
while(scanf("%f",&k)!=EOF){
		i=0;
		while(i<64){
		
		if(koce[i]==k){fakekoce=1;}
		i++;
		}
		if(fakekoce==0){
		koce[fam]=k;
		fam++;
		}
		fakekoce=0;
		}
		i=0;
		while(i<fam){
		legion=koce[i];
		while(legion-fam>=0){
		legion=legion-fam;
		}
		wod=wod+legion;
		i++;
		}
		printf("%d\n",fam);
		printf("%.3f",wod);
return 0;
}

