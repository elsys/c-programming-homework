#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,i;
	scanf("%d",&num);
	int array[num];
	i=0;
	while(i<num){
    scanf("%d",&array[i]);
		if(array[i] % 2 == 0)i--;
		i++;
	}
	i=0;
	while(i<num/2){
      printf("%d\n",array[i] - array[(num - 1) - i]);
      i++;
	}
	if(num%2==1)
	{
		printf("%d",array[(num/2)+1]);
	}

	return 0;
}
