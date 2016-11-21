#include <stdio.h>
 
int main() {
    int count;
    scanf("%d", &count);
 
    int nums[count];
    int size = 0;
 
    while(size < count) {
        int new_num;
        scanf("%d", &new_num);
 
        if(new_num % 2 != 0) {
            nums[size] = new_num;
            size++;
        }
    }
 
    int middle = size / 2;
 
    if(size % 2 != 0) {
        middle++;
    }
 
    int i;
    for(i = 0; i < middle; i++) {
        if(i == size - i - 1) {
            printf("%d\n", nums[i]);
        }
        else {
            printf("%d\n", nums[i] - nums[size - i - 1]);
        }
    }
 
    return 0;
}
