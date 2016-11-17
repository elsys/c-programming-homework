#include<stdio.h>
 int main()
 {
 int i, j, check, k=0;
 float num, arr[64], sum=0;
 for(i = 0; scanf("%f", &num) != EOF; i++)
 {
    	 check=0;
	 for(j = 0; j < i; j++)
	 {
	 if(num == arr[j])
	 {
		 check++;
		 break;
	 }
	 }
	 if(check == 0)
	 {
	 arr[k] = num;
	 k++;
	 }
 }
 printf("%d\n", k);
 for(i = 0; i < k; i++)
 {
	do
	{
	arr[i] = arr[i] - k;
	}while(arr[i] >= 0);
	sum = sum + (arr[i] + k);
 }
 printf("%.3f", sum);
 }
