#include<stdio.h>

int main()
{
	char mappedNames[10][10]={{"zero"},{"one"},{"two"},{"three"},{"four"},{"five"},
							{"six"},{"seven"},{"eight"},{"nine"}};
	int number;
	scanf("%d",&number);
	printf("%s",mappedNames[number]);
	return 0;
}
