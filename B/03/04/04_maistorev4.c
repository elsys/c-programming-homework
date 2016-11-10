#include <stdio.h>
int main()
{
	int n,c,s,i,j;
	scanf("%d",&n);
	int br=0;
	br=(n-2)*(n-2);
	printf("%d\n",br);
	for(c=1;c<n;c++){
		s=n-c;
		i=0;
			do{
			printf(" ");
		if(c==1){
			printf("*");
			printf("\n");}
		else{
			printf("*");
			printf("#");
			j=2;
			        do{
				printf("#");
				printf("#");
				j++;
				}while(j<c);
			printf("*");
			printf("\n");
		    }
			i++;
			  }while(i<s);
			
	for(i=0;i<(n*2)-1;i++)printf("*");
			}
return 0;
}


