#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r[64];
    float n[64];
    float x=0,y=0;
    int g;
    int i=0,br,brn=0;
    for(i=0;scanf("\n%f",&r[i])!=EOF;i++){}
    g=i-1;
    br=1;
    do{
        i=0;
        do{
            if(r[i]<r[i+1]){
                    r[i]=r[i]+r[i+1];
                    r[i+1]=r[i]-r[i+1];
                    r[i]=r[i]-r[i+1];
            }
            i=i+1;
        }while(i!=g+1);
        br++;
    }while(br!=g);
    n[0]=r[0];
    for(i=0;i!=g;i++){
        if(r[i+1]!=n[brn]){
                brn=brn+1;
                n[brn]=r[i+1];
        }
    }
    printf("\n%d",brn);
    for(i=0;i<=brn;i++){
            if(n[i]>=brn){
                do{
                      n[i]=n[i]-brn;
                }while(n[i]>=brn);
            }
            x=x+n[i];
    }
    printf("\n%.3f",x);
}
