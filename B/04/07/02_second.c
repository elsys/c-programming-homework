#include <stdio.h>

int main()
{
int i=0;
int  n, j, arr[100];

   scanf("%d", &n);
 while(i<n)
 {
   scanf("%d",&j);
   if(j%2!=0)
   {
     arr[i] = j;
     i++;
   }
 }
 
i=0;
 while(i<n/2 )
 {
   printf("%d\n", arr[i]-arr[(n-i)-1]);
i++;
 }
   if(n%2!=0){
printf("%d", arr[n/2]);
}
 return 0;

}
