#include<stdio.h>
#include<string.h>
int main(){
int i,i2,n=0;
char a[1000];
fgets(a,1000,stdin);
for(i2=0;i2<26;i2++){
for(i=0;i<strlen(a);i++){
if(a[i]>='A'&&a[i]<='Z'){
a[i]=a[i]-('A'-'a');}
if(a[i]=='a'+i2){
n++;}}
if(n!=0){
printf("%c - %d\n", 'a'+i2, n);}
n=0;}
return 0;}
