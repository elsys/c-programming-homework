#include<stdio.h>

int main() {

	int sum=0, num;
	scanf("%d", &num);
	int nmb=num, cnt=0;
	while(nmb>0){
		nmb=nmb/10;
		cnt++;
	}
	while(num>0){
		sum=sum+num%10;
		num=num/10;
	}

	float avg=sum/cnt;
	if(avg<7) printf("light");
	else printf("heavy");
return 0;
}
