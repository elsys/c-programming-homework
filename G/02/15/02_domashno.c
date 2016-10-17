#include <stdio.h>


    int main() {
       float kj,ni,nov;
       scanf("%f", &kj);
       scanf("%f", &ni);
       scanf("%f", &nov);
       if (kj>ni)
            if (kj>nov)
            printf("%1.f", kj);
       else printf("%1.f", nov);
       else if (ni>nov)
        printf("%1.f", ni);
       else printf("%1.f", nov);

       return 0;

    }
