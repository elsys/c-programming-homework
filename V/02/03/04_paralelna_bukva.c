#include<stdio.h>
int main(){
char k,o,c;
	do{
	 scanf("%c",&k);
	}while(k<='a' && k>='z');	
	
	c=k-'a';//namira se nomera na bukvata v azbukata
	o='z'-c ;// tova e paralenata bukva
	printf("paralenata bukva na %c e %c ",k,o);
return 0;
}

		
