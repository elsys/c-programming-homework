#include <stdio.h>
int main(){
int n,i,k,l;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
do{
scanf("%d",&arr[i]);
}while(arr[i]%2==0);
}
l=n-1;
for(i=0;i<n/2;i++){
k=arr[i]-arr[l];
printf("%d\n",k);
l--;
}
if(n%2!=0){
printf("%d\n",arr[n/2]);
}
return 0;
}

