



#include "stdio.h"


int main() {

  int n, s,cif=0;
  float avg=0;
scanf("%d",&n);

for (int i = 0; 0 < n; ++i)
{
s = n%10;
cif = cif + s;
avg = (float)cif/(i+1);
n /=10;
}
if(avg > 7){

printf("heavy");

}else{

printf("light");
}

return 0;
}