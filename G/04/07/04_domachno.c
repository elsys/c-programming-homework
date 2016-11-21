

    #include <stdio.h>
     
    int main() {
        double nums[64];
     
        int nums_size = 0;
        while(scanf("%lf", &nums[nums_size]) != EOF) {
            nums_size++;
        }
       
        double not_repeated_nums[64];
        int i;
        int j;
        int not_repeated_size = 0;
        for(i = 0; i < nums_size; i++) {
            for(j = 0; j < not_repeated_size; j++) {
                if(nums[i] == not_repeated_nums[j]) {
                    break;
                }
            }
     
            if(j == not_repeated_size) {
                not_repeated_nums[not_repeated_size] = nums[i];
                not_repeated_size++;
            }
        }
     
        double sum = 0;
     
        for(i = 0; i < not_repeated_size; i++) {
            // Fake %
            double num = not_repeated_nums[i];
     
            while(num >= not_repeated_size) {
                num -= not_repeated_size;
            }
     
            sum += num;
        }
     
        printf("%d\n", not_repeated_size);
        printf("%.3lf\n", sum);
       
        return 0;
    }

