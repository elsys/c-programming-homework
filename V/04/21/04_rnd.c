#include <stdio.h>
int main(){
int i=0,n,j,y,w;
float arr[64],k,o,g=0,z;
while((scanf("%f",&k))!=EOF){
y=0;
for(j=0;j<i;j++){
if(arr[j]==k){
y=1;
}
}
arr[i]=k;
if(y==0)i++;
}
n=i;
printf("%d\n",n);
for(i=0;i<n;i++){
o=arr[i];
z=arr[i];
w=0;
while(z-n>=0){
z=z-n;
w++;
}
o=arr[i]-w*n;
g=o+g;
}
printf("%.3f\n",g);
return 0;
}
