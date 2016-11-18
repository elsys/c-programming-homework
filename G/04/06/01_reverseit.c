#include <stdio.h>
#include <stdlib.h>
int main(){
int n,i;
scanf("%d",&n);
int mass[n];
i=0;
while(i<n){
scanf("%d",&mass[i]);
i++;
}i=n-1;
while(i>=0){
printf("%d\n",mass[i]);
i--;
}
return 0;
}
