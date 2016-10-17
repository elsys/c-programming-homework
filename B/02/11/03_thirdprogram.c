#include<stdio.h>
int main()
{
  int i;
  do{
      scanf("%d",&i);
     }while(i<0 || i>9);
  if(i==0)printf("zero\n");
  else if(i==1)printf("one\n");
  else if(i==2)printf("two\n");
  else if(i==3)printf("three\n");
  else if(i==4)printf("four\n");
  else if(i==5)printf("five\n");
  else if(i==6)printf("six\n");
  else if(i==7)printf("seven\n");
  else if(i==8)printf("eight\n");
  else printf("nine\n");

  return 0;


}


