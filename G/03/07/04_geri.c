#include <stdio.h>

int main(){
    int j;
    int count;
    int height;
    int number = 0;
    scanf("%d", &height);
    number = (height * height) - (height + (height - 1) + (height - 2) * 2 + 1);
    printf("\n%d\n", number);
    for(count = 0; count < height; count++){
        int all_symbols = height + (height - 1);
        for(j = 0; j < height + (height - 1) ; j++){
            int symbols = (count * 2) + 1;
            if(count == 0 && j == (height + (height - 2)) / 2){
                printf("*");
            }else if(count == height - 1){
                printf("*");
            }else if(j == all_symbols / 2 - symbols / 2 || j == all_symbols / 2 + symbols / 2) {
                printf("*");
            }else if(j > all_symbols / 2 - symbols / 2 && j < all_symbols / 2 + symbols / 2){
                printf("#");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
