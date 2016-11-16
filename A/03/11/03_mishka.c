#include<stdio.h>

int main(){
 int n, m, k, kinti = 0;
float z = 0.0;
  scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);
while(n!=0){
for(int i=0; i<k; i++){

kinti += m-((m*z/100));
n--;

}
 z = z + 2;
}
           



    printf("%d", kinti);
 return 0;
   }
