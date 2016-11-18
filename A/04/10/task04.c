#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,p,j,s=0,m=0;
	float num[1000];
	float num2[1000];
	float n;
	double res=0, sum=0;
	while(scanf("%f",&n)!=EOF){
		num[i]=n;
    		i++;
		m++;
	}
	i=0;
	num2[i]=num[i];
	s=1;
	for(i=1;i<m;i++){
		for(j=0;j<i;j++){
		if(num2[j]!=num[i])
		p=1;
		else{
			p=0;
			s--;
			break;
		}
		}
		if(p==1)
		num2[s]=num[i];
		s=s+1;
		p=0;
	}
	for(i=0;i<s;i++){
	res=fmod(num2[i],s);
	sum=sum+res;
	}
	printf("%d\n",s);
	printf("%.3f\n",sum);
  
 }

