#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int i=0;
int cnt[256];   
char shot[1000];
/*while(p != '\n')    
    {
        p = getchar();
        shot[i] = p;
        i++;
    }
    shot[i] = '\0';*/
fgets(shot,1000,stdin);       
for(i=0;i<256;i++)
{
cnt[i]=0;
}



for(i=0;i<strlen(shot);i++)
{
if((shot[i]>='A')&&(shot[i]<='Z'))
{
(cnt[shot[i]+('a'-'A')])++;
}
else{  
(cnt[(int)shot[i]])++;
}
}


for(i=0;i<256;i++)
{
if(cnt[i]>0)
if(((i>='a')&&(i<='z')))
printf("%c - %d\n",i,cnt[i]);
}
return 0;
}


