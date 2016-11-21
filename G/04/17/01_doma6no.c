#include <stdio.h>

int main() {
int n,i;

scanf("%d", &n);

int l[n];

for(i=0;i<n;i++)

scanf("%d", &l[i]);
n=n-1;
for(i=n;i>=0;i--)

printf("\n%d", l[i]);

return 0;

}

