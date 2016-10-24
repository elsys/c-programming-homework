#include <stdio.h>
#include <stdlib.h>
int main()
{
float number, numberTwo, numberThree;
scanf("%f", &number);
scanf("%f", &numberTwo);
scanf("%f", &numberThree);
if(number > numberTwo && number > numberThree)
{
printf("%.1f", number);
}
else if(numberTwo > numberThree && numberTwo > number)
{
printf("%.1f", numberTwo);
}
else
{
printf("%.1f", numberThree);
}
return 0;
}
