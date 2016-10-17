#include <stdio.h>

int main()
{
    float n, m, p;
    scanf("%f", &n);
    scanf("%f", &m);
    scanf("%f", &p);
    if (n>m && n>p) {
        printf("%.1f", n);
    }
    else if (m>n && m>p) {
        printf("%.1f", m);
    }
    else {
        printf("%.1f", p);
    }
    return 0;
}
