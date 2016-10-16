#include<stdio.h>

int main(){
	char c;
	scanf("%c", &c);
	char res;
	res='z'-(c-'a');
	printf("%c\n",res);
	return 0;
}
