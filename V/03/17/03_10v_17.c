#include <stdio.h>

int main() {
	
	int n, m, k, count, sumM, startMoney, percent;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&k);
	sumM = 0;
	startMoney = m;
	percent = 0;
	for ( count = 0; count < n; count++){
		if (count != 0 &&  count % k == 0 ) {
			percent = percent + 2;
			m = startMoney - (startMoney * percent/100);
			//printf("\n Money are : %d Count is : %d Percent is : %d SumM is : %d ", m, count, percent, sumM);		
		}
		sumM = sumM + m;
		//printf("\n SumM is : %d Count is : %d",sumM , count);
	}
	printf("%d",sumM);
	return 0;
}
