#include<stdio.h>

int square(int);
int cubes(int);

int main(){

	int a;
		printf("Enter your number: \n");
		scanf("%d",&a);
		printf("%d\n",square(a));
		printf("%d\n",cubes(a));

	return 0;
	}	

int square(int a){
 		int sqr = 0;
		if(a!=0){
			sqr = a*a;
			return sqr;
		}else{
			return 0;
		}
	return sqr;
	}	

int cubes(int a){
		int cb = 0;
		if(a!=0){
			cb = a*a*a;
			return cb;
		}else{
			return 0;
		}
	return cb;
}
