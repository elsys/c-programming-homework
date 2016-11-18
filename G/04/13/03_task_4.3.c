#include <stdio.h>
#include <string.h>

int main()
{
  int a[26],i,f,j;
  char c[1000],m='a',g='A';

  for(i=0;i<26;i++)
    a[i]=0;
  fgets(c,1000,stdin);

  f=strlen(c)+1;

  for(i=0;i<f;i++)
  {
    for(j=0;j<26;j++)
    {
      if(c[i]==m||c[i]==g)
      {
        a[j]++;break;
      }
      m++;g++;
    }
    m='a';
    g='A';
  }
  m='a';
  
  for(i=0;i<26;i++,m++)
  {
    if(a[i]==0)
    continue;
    printf("%c - %d\n" , m, a[i]);
  }

  return 0;
}
