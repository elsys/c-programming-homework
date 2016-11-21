#include <stdio.h>
int main()
{

int n;
scanf("%d",&n);

int arr[n],i;

for(i=1;i<=n;i++){
scanf("%d",&arr[i]);
}

for(i=n;i>0;i--){
printf("%d\n",arr[i]);
}

return 0;
}
