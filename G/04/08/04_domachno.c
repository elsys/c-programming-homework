#include<stdio.h>
int main (){
int a=0,b=0,c=0,d=0;
float poredno,salata[64],sum=0,ostatak;
while(scanf("%f",&poredno)!=EOF){while(a<64){if(salata[a]==poredno){break;}
                                             else d++;
                                             a++;}
                                 a=0;
                                 if(d==64){salata[b]=poredno;
                                           b++;}
                                 d=0;}
printf("%d",b);
a=0;
while(a<b){c=salata[a]/b;
           ostatak=salata[a]-c*b;
           sum=sum+ostatak;
           a++;}
printf("\n%.3f",sum);
}
