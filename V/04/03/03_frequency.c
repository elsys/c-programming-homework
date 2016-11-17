#include<stdio.h>
#include<string.h>
     
int main()
{
char koce[1000];
int k=0,fam[26]={0},o;
fgets(koce,1000,stdin);
     while (koce[k] !='\0')
       {
     
          if (koce[k] >='a' && koce[k] <='z'){ 
                o=koce[k]-'a';
		fam[o]++;}
     	  if (koce [k] >='A' && koce[k] <='Z'){
		o=koce[k]-'A';
		fam[o]++;}
          k++;
       }
      
       for ( k = 0 ; k < 26 ; k++ )
       {
          if( fam[k] != 0 )
             printf("%c - %d\n",k+'a',fam[k]);
       }
return 0;
     }
      
    
     
