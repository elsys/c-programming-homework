#include <stdio.h>
int main(){
	int num,b,c,j=0;
	scanf("%d",&num);
	c=0;
	while(num>0){
	c=num%10;
	b=b+c;
	num=num/10;
	j++;
	}
	if(b>8){
	printf("heavy");
	}
	else{
	printf("light");
}
return 0;
}
