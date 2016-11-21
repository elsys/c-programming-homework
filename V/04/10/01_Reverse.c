#include<stdio.h>
int main(){
int i,n;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
i=n;
do{
printf("%d\n",arr[i]);
i--;
}while(i>=0);
return 0;
}
