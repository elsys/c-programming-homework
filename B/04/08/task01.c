#include <stdio.h>
int main()
{
int n,s,i,a;
int arr[500];

scanf("%d",&n);

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

s=i-1;  
i=0;       

while(i<s)
{
a=arr[i];
arr[i] = arr[s];
arr[s]=a;
i++;             
s--;        
} 

for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}

}
