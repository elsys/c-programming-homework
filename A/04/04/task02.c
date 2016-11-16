#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int odds[n];
    int i = 0;
    while(i < n) {
        scanf("%d", &odds[i]);

        if(odds[i] % 2) {
            i++;
        }
    }

    int left_index = 0, right_index = n - 1;
    int result;
    while(left_index <= right_index) {
        result = (left_index != right_index) ?
                    odds[left_index] - odds[right_index] :
                    odds[left_index];

        printf("%d\n", result);

        left_index++;
        right_index--;
    }

    return 0;
}
