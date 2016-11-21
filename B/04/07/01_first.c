#include <stdio.h>

int main()
{
int i=0 ,n;
scanf("%d",&n);
int obr [n];

while (i<n)
	
{
	scanf("%d",&obr[i]);
	i++;
}
for(i= n-1;i>=0;i--)
{
     printf("%d\n",obr[i]);
}

return 0;
}

