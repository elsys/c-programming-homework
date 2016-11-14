#include<stdio.h>
int main()
{
int n;
scanf("%d", &n);
int mas[n];
for(int i=0;i<n;i++)
scanf("%d", &mas[i]);
for(int i=n-1;i>=0;i--)
printf("%d\n", mas[i]);
return 0;
}
