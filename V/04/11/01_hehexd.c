#include<stdio.h>
int main(){
int n;
int i;
scanf("%d", &n);
int ayy[n];
for(i=0;i<n;i++){
scanf("%d", & ayy[i]);
}
for(i=n-1;i>=0;i--){
printf("%d\n", ayy[i]);
}
return 0;
}
