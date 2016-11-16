#include <stdio.h>
int main() {
int ch, am, tp, d;
float pr;
scanf("%d %f %d", &ch, &pr, &am);
  tp = am * pr;
  ch = ch - am;
  d = pr * am;
while((ch - am) >= 0){
  d = d - ((d * 2) / 100.0);
  ch = ch - am;
  tp = tp + d;
}
  if(ch != 0){
    d = ch * pr;
    tp = tp + d;
  }
  printf("%d\n", tp);

return 0;
}
