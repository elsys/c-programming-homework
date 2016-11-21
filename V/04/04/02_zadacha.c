#include <stdio.h>

int main()
{

int n, count;
int arr[n];
scanf("%d", &n);
while(count<n){
scanf("%d",&arr[count]);
if(arr[count]%2!= 0){
count++;
}
}
count--;
int k;
for(k=0;k<n/2;k++){
arr[k]=arr[k]-arr[count];
count--;
}
if(n%2==0){
for(count=0;count<k;count++){
printf("%d\n",arr[count]);
}
}else{
for(count=0;count<=k;count++){
printf("%d\n",arr[count]);
}
}
return 0;
}
