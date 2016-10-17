



#include "stdio.h"


void main() {

  float n = 10.5, s=6.6,c=-2.6,l;
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



printf(" BIGGEST:%.1f\n ",l );


}