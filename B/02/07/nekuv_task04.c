#include <stdio.h>

int main()

{

 char c, f, p;
 scanf("%c", &c);
 if(c>='a' && c<='z')
{  f=c-'a';
   p='z'-f;
printf("%c", p);
}
else{printf("error");
}

return 0;
}
