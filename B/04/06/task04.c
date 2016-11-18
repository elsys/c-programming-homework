#include <stdio.h>
int main ()
{
	float arr[1000],a,vsicko=0;
	int i=0,j,b=0;

	while(scanf("%f",&a)!=EOF){
		j=0;
		for(i=0;i<64;i++){
			if(arr[i]==a)j=1;
		
		if(j==0){
			arr[b]=a;
			b++;}
		i++;	
	}
	
	printf("%ф \n",a);

	for(i=0;i<b;i++){
		while(arr[i]>=0){
			arr[i] = arr[i]-b;}
	
		vsicko=vsicko+(arr[i]+b);
	}
	
}
	printf("%.3f",vsicko);

return 0;
}
