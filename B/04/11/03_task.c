#include<stdio.h>
#include<string.h>
int main()
{ 
  int i,l=0,br=1,pro=0,c=0,swap2,a=0,s=0,g,broi[1000],h=0;
  char masiv[1000],bukwa,swap,mass[1000];
  fgets(masiv,1000,stdin);
  l=strlen(masiv);
  for(i=0;i<l;i++)
  if(masiv[i]>='A' && masiv[i]<='Z')masiv[i]=masiv[i]+32; 
  for(i=0;i<l;i++)
  if(masiv[i]>='a' && masiv[i]<='z')
    {      
    	    bukwa=masiv[i];
	    for(c=i+1;c<l;c++)if (bukwa==masiv[c]){br++;masiv[c]='*';}
	    mass[pro]=bukwa;
            pro++;
	    broi[h]=br;
	    h++;
	    br=1;
    }
            for(a = 0; a < (pro-1); a++)
            {
              for(s=0; s<pro-a-1;s++)
              {
                if(mass[s] > mass[s+1])
                {
                      swap = mass[s];
	              swap2=broi[s];
                      mass[s] = mass[s+1];
	      	      broi[s]=broi[s+1];
                      mass[s+1] = swap;
		      broi[s+1]=swap2;
                }
                }
            }
for(g=0;g<pro;g++)printf("%c - %d\n",mass[g],broi[g]);
return 0;
}
