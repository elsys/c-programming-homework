#include <stdio.h>

int main()
{
	float a[100], sum_of_all=0, sum_of_repeating=0;
	int i, j, k, count=0;

	for(i=0; scanf("%f", &a[i]) != EOF; i++)
		;

	count=i;

	for(j=0; j<i-1; j++){
		for(k=j+1; k<i; k++){
			if(a[j] == a[k]){
				count--;
				break;
			}
		}
	}

	printf("%d\n", count);

	for(j=0; j<i-1; j++){
		for(k=j+1; k<i; k++){
			if(a[j] == a[k]){
				sum_of_repeating = sum_of_repeating + a[j] - count * (int)(a[j] / count);
				break;
			}
		}
	}

	for(j=0; j<i; j++){
		sum_of_all = sum_of_all + a[j] - count * (int)(a[j] / count);
	}

	printf("%.3f", sum_of_all - sum_of_repeating);

	return 0;
}
