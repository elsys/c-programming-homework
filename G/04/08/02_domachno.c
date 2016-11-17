#include<stdio.h>
int main (){
int a,b,c=0,d=0;
scanf("%d",&a);
int salata[a];
while(c<a){scanf("%d",&b);
           if(b%2==1){salata[c]=b;
                      c++;}}
while(d<a/2){printf("%d\n",(salata[d]-salata[a-d-1]));
             if(a%2!=0)printf("%d",salata[a/2]);
             d++;}
}
