#include<stdio.h>
int main()
{
char c,s;
printf("Input letter\n");
scanf("%c",&c);
s = 'z' - (c-'a');
printf("%c",s);
return 0;
}
