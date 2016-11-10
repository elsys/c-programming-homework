#include<stdio.h>
int main()
{
	int n,m,k,allmoney,sum=0,allsum=0,i,moneydis,moneynodis,money,times,z=1;
	float dis=0.02;
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &k);
	allmoney=n*m;
//	printf("allmoney%d\n", allmoney);
//	alldiscount=(n/k) * 0.02;
	
	moneynodis=k*m;
//	printf("moneynodis%d\n", moneynodis);
	moneydis=allmoney - moneynodis;
//	printf("moneydis%d\n", moneydis);
	while(moneydis/k!=0)
	{
		if(moneydis%2!=0)
		{
			z=moneydis/2;
		}
		moneydis=moneydis/k;
		z++;
		//times=moneydis/k;
	}
	moneydis=allmoney - moneynodis;
//	printf("z%d", z);
	times = moneydis/z;
//	printf("times%d", times);
	for(i=0;i<z;i++)
	{
		money= times - (times*dis);
//		printf("money%d\n", money);
		sum = sum + money;
//		printf("sum%d\n", sum);
		dis= dis+0.02;
		
	}
	
	allsum= moneynodis + sum;
	printf("%d\n", allsum);	
	return 0;
	
	
	
	
}
