#include<stdio.h>
int main(){
	int visochina, brr=0, brr2, intervali, zvezdi=1, hashtag=0;
	scanf("%d", &visochina);
	intervali=visochina-1;
	if(visochina>2){
		brr2=1;
		hashtag=1;
		for(brr=1;brr<visochina-2;brr++){
			brr2+=2;
			hashtag+=brr2;
		}
	}
	printf("%d\n", hashtag);
	for(brr=0;brr<visochina;brr++){
		for(brr2=0;brr2<intervali;brr2++){
			printf(" ");
		}
		for(brr2=0;brr2<zvezdi;brr2++){
			if(brr2==0||brr2==zvezdi-1||brr==visochina-1){
				printf("*");
			}else if(brr!=visochina-1){
				printf("#");
			}
		}
		intervali--;
		zvezdi+=2;
		if(brr+1<visochina)printf("\n");
	}
	return 0;
}
