#include <stdio.h>

int main ()
{ 

float chislo1,chislo2,chislo3;

printf("\n Vuvedi chislo1:");
scanf("%f",&chislo1);
printf("\n Vuvedi chislo2:");
scanf("%f",&chislo2);
printf("\n Vuvedi chislo3:");
scanf("%f",&chislo3);

if (chislo1>chislo2)
 {
if (chislo1>chislo3)
 {
        printf("%f",chislo1);
	}
}
        else {
	if (chislo2>chislo3) {
	printf("%.1f",chislo2);
	}
        else
        printf("%.1f",chislo3);
}
return 0;
}





