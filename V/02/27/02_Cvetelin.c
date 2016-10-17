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
printf("%f", number);
}
else if(numberTwo > numberThree && numberTwo > number)
{
printf("%f", numberTwo);
}
else
{
printf("%f", numberThree);
}
return 0;
}
