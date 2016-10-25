#include<stdio.h>
int main()
{
  char c;
  int beg,end,p=0;
  do{
  scanf("%c",&c);
  }while(c<'a' || c>'z');
  beg=97;
  end=122;
  p=c-beg;
  printf("%c\n",end-p);

  return 0;
}
