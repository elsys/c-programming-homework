#include<stdio.h>
#include<math.h>
int main(){
float xD, kappa[64], shieet=0;
int lol=0, lol2, eksdee=0, ez=0;
for(lol=0;scanf("%f", &xD)!=EOF;lol++)
{
if(lol==0){
kappa[eksdee]=xD;
}else
{
for(lol2=0;lol2<(lol-1);lol2++)
{
if(kappa[lol2]==xD)ez=1;
}
if(ez==0){
eksdee++;
kappa[eksdee]=xD;
}
}
ez=0;
}
printf("%d\n", eksdee);
for(lol=0;lol<=eksdee;lol++)
{
shieet=shieet+fmod(kappa[lol],eksdee);
}
printf("%.3f", shieet);
return 0;
}
