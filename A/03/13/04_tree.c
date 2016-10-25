#include <stdio.h>
int main(){
	int n,c,s,i,j;
	scanf("%d",&n);
	int br=0;
	br=(n-2)*(n-2);
	printf("%d\n",br);
	for(c=1;c<n;c++){
		s=n-c;
		for(i=0;i<s;i++)
			printf(" ");
		if(c==1){
			printf("*");
			printf("\n");}
		else{
			printf("*");
			printf("#");
			for(j=2;j<c;j++){
				printf("#");
				printf("#");
				}
			printf("*");
			printf("\n");
			}
	}
	for(i=0;i<(n*2)-1;i++)printf("*");
return 0;
}
