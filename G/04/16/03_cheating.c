#include <stdio.h>
#include <stdlib.h>

int main()
{
    char zdr[1000],cor;
    int i,azbyki[26]={0};
    fgets(zdr,1000,stdin);
    for(i=0;zdr[i]!='\0';i++){
        if(zdr[i]=='a'||zdr[i]=='A')azbyki[0]++;
        if(zdr[i]=='b'||zdr[i]=='B')azbyki[1]++;
        if(zdr[i]=='c'||zdr[i]=='C')azbyki[2]++;
        if(zdr[i]=='d'||zdr[i]=='D')azbyki[3]++;
        if(zdr[i]=='e'||zdr[i]=='E')azbyki[4]++;
        if(zdr[i]=='f'||zdr[i]=='F')azbyki[5]++;
        if(zdr[i]=='g'||zdr[i]=='G')azbyki[6]++;
        if(zdr[i]=='h'||zdr[i]=='H')azbyki[7]++;
        if(zdr[i]=='i'||zdr[i]=='I')azbyki[8]++;
        if(zdr[i]=='j'||zdr[i]=='J')azbyki[9]++;
        if(zdr[i]=='k'||zdr[i]=='K')azbyki[10]++;
        if(zdr[i]=='l'||zdr[i]=='L')azbyki[11]++;
        if(zdr[i]=='m'||zdr[i]=='M')azbyki[12]++;
        if(zdr[i]=='n'||zdr[i]=='N')azbyki[13]++;
        if(zdr[i]=='o'||zdr[i]=='O')azbyki[14]++;
        if(zdr[i]=='p'||zdr[i]=='P')azbyki[15]++;
        if(zdr[i]=='q'||zdr[i]=='Q')azbyki[16]++;
        if(zdr[i]=='r'||zdr[i]=='R')azbyki[17]++;
        if(zdr[i]=='s'||zdr[i]=='S')azbyki[18]++;
        if(zdr[i]=='t'||zdr[i]=='T')azbyki[19]++;
        if(zdr[i]=='u'||zdr[i]=='U')azbyki[20]++;
        if(zdr[i]=='v'||zdr[i]=='V')azbyki[21]++;
        if(zdr[i]=='w'||zdr[i]=='W')azbyki[22]++;
        if(zdr[i]=='x'||zdr[i]=='X')azbyki[23]++;
        if(zdr[i]=='y'||zdr[i]=='Y')azbyki[24]++;
        if(zdr[i]=='z'||zdr[i]=='Z')azbyki[25]++;
    }
    for(i=0;i<25;i++){
        cor='a'+i;
        if(azbyki[i]!=0)printf("\n%c-%d",cor,azbyki[i]);
    }
    return 0;
}
