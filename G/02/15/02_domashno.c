#include <stdio.h>


    int main() {
       float kj,ni,nov;
       scanf("%f", &kj);
       scanf("%f", &ni);
       scanf("%f", &nov);
       if (kj>ni)
            if (kj>nov)
            printf("%.1f", kj);
       else printf("%.1f", nov);
       else if (ni>nov)
        printf("%.1f", ni);
       else printf("%.1f", nov);

       return 0;

    }
