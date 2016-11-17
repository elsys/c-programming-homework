#include<stdio.h>
#include<string.h>
int main(){
int dank, memes, lol=0;
char xD[1000];
fgets(xD,1000,stdin);
for(memes=0;memes<26;memes++)
{
for(dank=0;dank<strlen(xD);dank++)
{
if(xD[dank]>='A'&&xD[dank]<='Z')
{
xD[dank]=xD[dank]-('A'-'a');
}
if(xD[dank]=='a'+memes)
{
lol++;
}
}
if(lol!=0)
{
printf("%c - %d\n", 'a'+memes, lol);
}
lol=0;
}
return 0;
}
