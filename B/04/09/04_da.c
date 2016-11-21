#include <stdio.h>
#include <math.h>

int main(){

float mas[64], b, sum=0;
int i, br=0, a=1;
	
while(scanf("%f", &b) != EOF){
for(i=0; i<br; i++)
if(b==mas[i]) a=0;
if(a){
mas[br] = b;
br++;
}
a = 1;
}
for(i=0; i<br; i++)
sum+=fmod(mas[i], br);
printf("%d\n%.3f", br, sum);
return 0;
}
