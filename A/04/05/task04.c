#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

	float array[63]; 
	float sum=0,j;
	int i,broi=0,f=1,r=1;
	
	while(scanf("%f",&j)!=EOF)
        {
		for(i=0; i<broi; i++)
        if(j==array[i])
        f=0;
		if(f)
		{
        array[broi] = j;broi=broi+1;
		}f = r;
	    }
	for(i=0;i<broi;i++)
		sum=sum+fmod(array[i],broi);
	printf("%d\n%.3f",broi,sum);
}
