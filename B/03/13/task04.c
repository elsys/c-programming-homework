#include<stdio.h>

int main()
{

int n,j,i=0,hash=0,k;

scanf("%d",&n);

/* for(i=0;i<num-1;i++){
	for(j=1,j<2*i-2,j++)hash++;
 } 
*/
  for(i=1;i<=n-2;i++)hash=hash+2*i-1;
  printf("%d",hash);

for(i=0;i<=n;i++){

 for(j=0;j<n-i;j++)printf(" ");

 for(k=0;k<2*i-1;k++){
	 if(k==0||k==2*i-2||i==n){
		 printf("*");
	} else {
	   printf("#");
	}
    }
 printf("\n");
}
return 0;
}

