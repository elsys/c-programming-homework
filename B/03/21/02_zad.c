# include <stdio.h>
int main ()
{
	int a,n,i=0;
	float s=0;
		scanf("%d",&n);
	for(;n!=0;n=n/10)
	 	{
			a=n%10;
			s=s+a;
			i++;
		}
if(s/i>7) {printf("heavy\n");}
else printf("light\n");
return 0;
}

