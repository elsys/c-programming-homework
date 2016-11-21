#include<stdio.h>
#include<string.h>
int main(){
int noxid;
int nqma;
int legendarni;
char fag[1000];
fgets(fag,1000,stdin);
for(legendarni=0;legendarni<26;legendarni++){
nqma=0;

for(noxid=0;noxid<strlen(fag);noxid++){


if(fag[noxid]=='a'+legendarni)nqma++;
if(fag[noxid]=='A'+legendarni)nqma++;
}

if(nqma!=0)printf("%c - %d\n", 'a'+legendarni, nqma);

}
return 0;
}



