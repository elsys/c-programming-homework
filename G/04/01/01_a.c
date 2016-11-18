#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,broi;
    int a[200];
    scanf("%d",&broi);
    for(i=0;i<broi;i++){
        scanf("%d",&a[i]);
    }

    for(i=broi-1;i>=0;i--){
        printf("\n%d",a[i]);
    }

return 0;
}

