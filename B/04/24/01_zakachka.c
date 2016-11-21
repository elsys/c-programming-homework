#include <stdio.h>

int main(){
int num, j=0, s[1234];
scanf("%d", &num);
for(int k = 0; k < num; k++){
scanf("%d", &j);
s[k+1] = j;
}
s[num+1] = '\0';
int z=num;
while(z>0){ 
printf("%d\n", s[z]);
z--;
   }
return 0;
}
