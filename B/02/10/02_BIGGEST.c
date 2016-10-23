



#include "stdio.h"


int main() {

  float n, s, c, l;
  scanf("%f",&n);
  scanf("%f",&s);
  scanf("%f",&c);

if(n>s){
  if(n>c){
    l=n;
  }else{
    l=c;
  }
}else{
  if(s>c){
    l=s;
  }else{
    l=c;
  }
}



printf("%.1f",l );
return 0;

}