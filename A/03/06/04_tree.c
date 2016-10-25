#include<stdio.h>

int main(){
    int h, base, count; 
    scanf("%d", &h);
    base = 1 + (h - 1) * 2;
    int base_hash = base - 4;
    int h_hash = h - 2;
    
    if(h_hash%2==0) count = (base_hash + 1) * (h_hash / 2);
    else count = (base_hash - 1) * ((h_hash - 1) / 2) + base_hash;
    
    printf("%d\n", count);
    
    for(int i = 0 ; i < h ; i ++){
        for(int j = 0 ; j < base ; j ++){ 
            if(i == h - 1) printf("*");
            else if(j == (base/2)+i || j == (base/2)-i) printf("*");
            else if(j < (base/2)+i && j > (base/2)-i) printf("#");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
