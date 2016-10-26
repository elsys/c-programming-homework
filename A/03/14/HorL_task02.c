#include <stdio.h>
int main(){
	int n, i, a,m = 0;
	i=0;
	scanf("%d", &n);
	while(n != 0){
	    a=a%n;
	    m+=a;
	    n=n/10;
	    i++;
	  }
	m = m / i;
	if(m > 7){
		printf(" Heavy\n");
 	}else{
		printf(" Light\n");
	}
	return 0;
}
