#include<stdio.h>
int  main()
{
	int broi,pari,namalenie,i;
	scanf("%d", &broi);
	scanf("%d", &pari);
	scanf("%d", &namalenie);
	float sum=0;
	i=0;
	float procent_otstupka =0.0;
  do
  {
	sum= sum + namalenie* pari * (1 - procent_otstupka);
	procent_otstupka= procent_otstupka + 0.02;
	i=i+namalenie;
  


  }while(i < broi);
	printf("%.f", sum);
	return 0;
}
