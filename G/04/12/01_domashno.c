#include<stdio.h>
int main (){
int z,l;
scanf("%d",&z);
int pecho[z];
l=0;
do{scanf("%d",&pecho[l]);
   l++;
  }while (l<z);
z--;
do{printf("%d\n",pecho[z]);
   z--;
  }while(z>=0);
}
