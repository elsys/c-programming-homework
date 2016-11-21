#include <stdio.h>
 #include <stdlib.h>
 int main() {
int n,i;
do scanf("%d",&n);
while(n<=0);
int dodo[n];
i=0;
while(i<n){ scanf("%d",&dodo[i]);
            i++; }
i--;
do { printf("%d\n",dodo[i]);
     i--;
}while(i>=0); }
