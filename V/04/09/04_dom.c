#include<stdio.h>
#include<math.h>
int main(){
	float chislo, arr[64], sum=0;
	int brr=0, brr2, poredno=0, sreshtalise=0;
	for(brr=0;scanf("%f", &chislo)!=EOF;brr++){
		if(brr==0){
			arr[poredno]=chislo;
		}else{
			for(brr2=0;brr2<(brr-1);brr2++){
				if(arr[brr2]==chislo)sreshtalise=1;
			}
			if(sreshtalise==0){
				poredno++;
				arr[poredno]=chislo;
			}
		}
		sreshtalise=0;
	}
	printf("%d\n", poredno);
	for(brr=0;brr<=poredno;brr++){
		sum=sum+fmod(arr[brr],poredno);
	}
	printf("%.3f", sum);
	return 0;
}
