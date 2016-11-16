#include <stdio.h>
int main()
{
float cifra,masivche[64],suma=0;
int proverka,s=0,i,j;
for(i=0;scanf("%f",&cifra)!=EOF;i++)
{
 	proverka=0;
	for(j=0;j<i;j++)
	{
	if(cifra==masivche[j])
	{
		proverka++;
		break;
	}
	}
	if(proverka==0)
	{
	masivche[s] = cifra;
	s++;
	}
}
printf("%d\n",s);
for(i=0;i<s;i++)
{
	do
	{
	masivche[i]=masivche[i]-s;
	}while(masivche[i]>=0);
	suma=suma+(masivche[i]+s);
}
printf("%.3f",suma);
return 0;
}
