#include <stdio.h>
#include <math.h>

int main(){

	float unique[63], buffer, sum=0;
	int i, count=0, a=1;
	
	while(scanf("%f", &buffer) != EOF){
		for(i=0; i<count; i++)
			if(buffer==unique[i]) a=0;
		if(a){
			unique[count] = buffer;
			count++;
		}
		a = 1;
	}
	for(i=0; i<count; i++)
		sum+=fmod(unique[i], count);
	printf("%d\n%.3f", count, sum);
	return 0;
}
