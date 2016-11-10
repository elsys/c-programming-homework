#include <stdio.h> 
int main() 
{ 
int n,m,h,k,i,f; 
float l; 
do 
{ 
scanf("%d",&n); 
scanf("%d",&m); 
scanf("%d",&k); 
} 
while (n<0 || m<0); 
f=0; 
l=0; 
h=k; 
for(i=0;i<n;i++) 
{ 
if(i==k) 
{ 
l=l+0.02; 
k=k+h; 
} 
f=f+m-m*l; 
}
printf("%d",f);
return 0;
}

