#include <stdio.h>
void lastrow(int j,int i,int n);
void total(int n);
int main(){
  int n;
  scanf("%d", &n);
  total(n);
  int j = 2*n - 1;
  int i=0, a=0, k=2, c=0;
  char hash='#',zvezd='*';
  for(;i<j;i++,j--) printf(" ");
  printf("%c\n",zvezd);
  i=2;
  for(;i<n;i++,k+=2,j--){
    for(c=0;c<j;c++) printf(" ");
    for(a=0;a<=k;a++){
      if (a == 0) printf("%c",zvezd);
      else if (a == k) printf("%c",zvezd);
      else printf("%c",hash);
    }
    printf("\n");
  }
  printf(" ");
  lastrow(j,i,n);
  return 0;

}
void lastrow(int j,int i,int n){
 //prints last row
  j = 2*n - 1;
  for(i=0;i<j;i++)printf("*");
  printf("\n");

}
void total(int n){
  //prints total number of hashtags
  int total = (n - 2);
  total*=total;
  printf("%d\n", total);

}
