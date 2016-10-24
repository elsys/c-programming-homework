# include <stdio.h>
int main ()
{
 int n,m,k,i=1,sum=0;
  scanf ("\n%d",&n);
  scanf ("\n%d",&m);
  scanf ("\n%d",&k);
  sum=m*k;
	for(;n>k;n=n-k)	
	{	
		sum=sum +(k*(m-(i*m*2/100)));
		i++;
	}
printf("%d\n",sum);
return 0;
}
