#include <stdio.h>
int main(){
	int n, i, a;
	float m = 0;
	i=0;
	scanf("%d", &n);
	while(n != 0){
	    a=n%10;
	    m+=a;
	    n=n/10;
	    i++;
	  }
	m = m/i;
	if(m > 7){
		printf(" heavy\n");
 	}else{
		printf(" light\n");
	}
	return 0;
}
