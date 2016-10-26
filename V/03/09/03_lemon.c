#include<stdio.h>
int main(){
	int broistola, cena, otstupka=0, navsekiK, sum=0, brr=0;
	scanf("%d%d%d", &broistola, &cena, &navsekiK);
	otstupka=(cena*2)/100;
	for(;broistola!=0;broistola--, brr++){
		if(brr==navsekiK){
			cena=cena-otstupka;
			brr=0;
		}
		sum=sum+cena;
	}
	printf("%d", sum);
	return 0;
}
