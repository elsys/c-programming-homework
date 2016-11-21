#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=0,c=0,d=0;
	char n[1000],b='A',a='a';
	fgets(n, 1000, stdin);
	while(d<26){
		while(n[i]!='\0'){
			if(n[i]==a || n[i]==b)c++;
			i++;
		}
		if(c!=0)printf("%c - %d\n",a,c);
		i=0;
		a++;
		b++;
		d++;
		c=0;
	}
}
