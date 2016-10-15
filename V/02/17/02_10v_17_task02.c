#include <stdio.h>
int main () {
	float a , b , c;
	printf("\n Input a > ");
	scanf("%f",&a);
	printf("\n Input b > ");
	scanf("%f" , &b);
	printf("\n Input c >");
	scanf("%f" ,&c);
	int max = 1;
	if (a > b) {
		if (a > c) {
			printf("%.1f" ,a);
		}else printf("%.1f" , b);
	}else {
		if (b > c) {
			printf("%.1f" ,b);
		}else printf("%.1f" ,c);
	}
	return 0;
}
