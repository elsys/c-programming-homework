#include <stdio.h>
 
int main() {
    int size;
    scanf("%d", &size);
 
    int nums[size];
    int i;
    for(i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }
 
    for(i = size - 1; i >= 0; i--) {
        printf("%d\n", nums[i]);
    }
    return 0;
}
