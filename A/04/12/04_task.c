#include <stdio.h>
#include <math.h>

int main(){
int i=0,y,j,n=0;
float a[1000],num,sum=0;
while((scanf("%f",&num))!=EOF)
{
        y=0;
        for(j=0;j<64;j++)if(a[j]==num) y=1;
        if(y==0)
        {
        a[i]=num;
        i++;
        }
}
	while(n < i)
    {
        sum += fmod(a[n], i);
        n++;
    }
	printf("%d\n%.3f ",i,sum);
	return 0;
}
