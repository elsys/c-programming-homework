#include <stdio.h>
#include <string.h>

int main ()
{   
char arr[1000];
char ar[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
int n,count,k=0,p=0;
fgets (arr,1000,stdin);
for(n=0;ar[n]!='\0';n++)
{
for(count=0;arr[count]!='\0';count++)
{ 
if((arr[count]>='a' && arr[count]<='z') || (arr[count]>='A' && arr[count]<='Z'))
{ 
if(arr[count]==ar[n]){k++;p=1;}
if(arr[count]+32==ar[n]){k++;p=1;}
}
}
if(p)	
{printf("%c - %d\n",ar[n],k); p=0;k=0;}
count=0;
}
return 0 ;
}
