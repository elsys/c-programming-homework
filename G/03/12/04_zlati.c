#include <stdio.h>
int main(){
    int j;
    int i;
    int height;
    int number = 0;
    scanf("%d", &height);
    number = (height * height) - (height + (height - 1) + (height - 2) * 2 + 1);
    printf("\n%d\n", number);
    for(i = 0; i < height; i++)
    {
        int all_symbols = height + (height - 1);
        for(j = 0; j < height + (height - 1) ; j++)
        {
            int symbols = (i * 2) + 1;
            if(i == 0 && j == (height + (height - 2)) / 2)
            {
                printf("*");
            }else if(i == height - 1){
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
