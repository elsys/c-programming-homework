#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float array[63],j;
	float sum=0;
	int i=0,broi=0,f=1;

	while(scanf("%f",&j)!=EOF){
    do{
        if(j==array[i])
        f=0;
        if(f>0){
        array[broi]=j;
        broi=broi+1;
        }
        f=1; i=i+1;
    }while(i<broi);
	}
	for(i=0;i<broi;i++){
    sum+=fmod(array[i],broi);
	printf("%d\n%.3f", broi, sum);
	}
}
