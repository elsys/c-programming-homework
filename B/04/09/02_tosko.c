#include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);	
  int mas[n],a,i;
  i=0;
  a=0;	
	do{
	 	scanf("%d",&mas[i]);
		if (mas[i]%2!=0){
	  		i++;
		}
	
	}while(i<n);
  
        if(n%2==0){
		for(i=0;i<n/2;i++){
			a=mas[i]-mas[(n-1)-i];
			printf("%d\n", a);
		}
	}else
		{
		n--;
		for(i=0;i<n/2;i++){
			a=mas[i]-mas[n-i];
			printf("%d\n", a);
		}
		printf("%d", mas[i]);
	}
	return 0;
}
