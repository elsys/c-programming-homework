#include <stdio.h>
#include <string.h>
int main ()
{
	char str[1000];
	fgets (str,1000,stdin);

	char azbuka[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};

	int i,j,count,ok;

for(i=0;i<strlen(azbuka);i++){
	count=0;
	ok=0;
	
	for(j=0;j<strlen(str);j++){ 
	
          if((str[j]>='a' && str[j]<='z') || (str[j]>='A' && str[j]<='Z')){ 
			 
		 if(str[j]==azbuka[i])count++,ok++;
		 if(str[j]+32==azbuka[i])count++,ok++;
          	    }
     		}
    if(ok!=0) printf("%c - %d\n",azbuka[i],count);
}
return 0 ;
}
