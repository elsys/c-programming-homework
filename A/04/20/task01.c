#include <stdio.h>

int main()
{
    int n, i, nums[100];
    scanf("%d", &n);
    for (i=1; i <= n; i++){
        scanf ("%d", &nums[i]);
    }
    for (i = n; i != 0; i--){
        printf("%d\n", nums[i]);
    }
}
