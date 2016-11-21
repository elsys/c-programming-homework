#include<stdio.h>
int main(){
int n;
int i;
int e;
int z;
scanf("%d", &n);
int dps[n];
do{
scanf("%d", &e);
if(e%2!=0){
dps[i]=e;
i++;
}
}
while(i<n);
for(i=0;i<n/2;i++){
z=(n-i)-1;
printf("%d\n", dps[i]-dps[z]);
}
if(n%2!=0){
printf("%d\n", dps[n/2]);
}



return 0;
}
 


