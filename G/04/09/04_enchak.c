#include <stdio.h>
#include <stdlib.h>
int povtaria(float x, float *mas, int sz);
int main()
{
float shot[64],s=0,f=0,p=0;
int i=0,j=0,cnt=0;

for(i=0;i<=64;i++)
{
shot[i]=0;
}

for(j=0;scanf("%f", &f)!=EOF;)
{
if(!povtaria(f,shot,j))
{
shot[j]=f;
j++;
} 
}
cnt=j;

for(i=0;i<j;i++)
{
p=shot[i]/cnt;
s+=shot[i]-(int)p*cnt;

}

for(i=0;i<j;i++)
{

}
printf("%d\n",cnt);

printf("%.3f\n",s);


return 0;
}

int povtaria(float x, float *mas, int sz)
{
int i;

for(i=0;i<sz;i++)
{
	if(mas[i]==x)
	 return 1;
}
return 0;
}


