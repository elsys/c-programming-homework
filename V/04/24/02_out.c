#include<stdio.h>
int main(){
int n, i=0,a[100],b=0;
scanf("%d", &n);
while(i<n){
scanf("%d", &a[i]);
if(a[i]%2!=0){
i++;
}

}
if(n%2==0){
for(i=0;i<n/2;i++){
b=a[i]-a[(n-1)-i];
printf("%d\n", b);
}
}else{
n--;
for(i=0;i<n/2;i++){
b=a[i]-a[n-i];
printf("%d\n", b);
}
printf("%d", a[i]);
}
return 0;
}
