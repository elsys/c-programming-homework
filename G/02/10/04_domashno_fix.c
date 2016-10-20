#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    c=getchar();
    if(c>='a'||c<='z'){
          if(c=='a')printf("z");
          if(c=='b')printf("y");
          if(c=='c')printf("x");
          if(c=='d')printf("w");
          if(c=='e')printf("v");
          if(c=='f')printf("u");
          if(c=='g')printf("t");
          if(c=='h')printf("s");
          if(c=='i')printf("r");
          if(c=='j')printf("q");
          if(c=='k')printf("p");
          if(c=='l')printf("o");
          if(c=='m')printf("n");
          if(c=='n')printf("m");
          if(c=='o')printf("l");
          if(c=='p')printf("k");
          if(c=='q')printf("j");
          if(c=='r')printf("i");
          if(c=='s')printf("h");
          if(c=='t')printf("g");
          if(c=='u')printf("f");
          if(c=='v')printf("e");
          if(c=='w')printf("d");
          if(c=='x')printf("c");
          if(c=='y')printf("b");
          if(c=='z')printf("a");
    }
    else printf("not acceptable");
    return 0;
}
