#include <stdio.h>

int main(){
int a,b;
scanf("%d%d",&a,&b);

int min = b;

if(a<b){ min = a; }

for(;a % min!=0 || b % min!=0; min--){}

printf("%d\n",min);

return 0;
}
