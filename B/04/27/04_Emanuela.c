#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
float sborotostatuci;
float vodkasuteha[64];
float suchkisubiram[10000];
int broi,j,i,n,c,k;
for(k=0; scanf("%f",&suchkisubiram[k])!=EOF; k++){}
suchkisubiram[0]=vodkasuteha[0];
for(i=1,broi=1;i<=k;i++)
{
	for(n=0;n<=i;n++)
	{
	if(suchkisubiram[i]==suchkisubiram[n])
	{
		break;
	}
        else
        {
                broi++;
                suchkisubiram[i]=vodkasuteha[broi];
        }
	}
}
printf("%d",broi);
//for(c=0;c<=broi;c++)
//sborotostatuci=sborotostatuci+vodkasuteha[broi]%5;
//printf("%f",sborotostatuci);
return 0;
}
