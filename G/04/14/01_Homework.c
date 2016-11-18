#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num,i;
	int array[500];
	scanf("%d",&num);
	i=0;
	while(i<num){
        scanf("%d",&array[i]);
        i++;
	}
	i=1;
	while(i<=num){
        printf("\n%d",array[num-i]);
        i++;
	}
	return 0;
}
