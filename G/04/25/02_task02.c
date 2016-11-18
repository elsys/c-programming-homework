#include<stdio.h>
int main()
{
int i,n,r,b;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{do{scanf("%d",&a[i]);}while(a[i]%2==0);}
r=n-1;
if(n%2!=0){ printf("\n %d",a[n/2]);}
else{for(i=0;i<n/2;i++)
{b=a[i]-a[r];
printf("%d\n",b);
r--;
}
}
return 0;
}
