#include <stdio.h>

void draw_symbol(int, char);
void draw_top_line(int);
void draw_inner_line(int, int);
void draw_bottom_line(int, int);
void draw_tree(int, int);

int main() {
    int n;
    scanf("%d", &n);

    int total_hashtags_count = (n - 2) * (n - 2);
    printf("%d\n", total_hashtags_count);

    draw_tree(n, total_hashtags_count);

    return 0;
}

void draw_symbol(int length, char c) {
    for(int i = 0; i < length; i++) {
        printf("%c", c);
    }
}

void draw_top_line(int spaces_count) {
    draw_symbol(spaces_count + 1, ' ');
    printf("*");
    draw_symbol(spaces_count, ' ');
}

void draw_inner_line(int spaces_count, int hashtags_count) {
    draw_symbol(spaces_count, ' ');
    printf("*");
    draw_symbol(hashtags_count, '#');
    printf("*");
    draw_symbol(spaces_count, ' ');
}

void draw_bottom_line(int spaces_count, int bottom_line_length) {
    draw_symbol(spaces_count, ' ');
    draw_symbol(bottom_line_length, '*');
    draw_symbol(spaces_count, ' ');
}

void draw_tree(int n, int total_hashtags) {
    int bottom_line_length = 2*n - 1;
    int spaces_count = bottom_line_length / 2 - 1, hashtags_count = 1;

    draw_top_line(spaces_count);
    printf("\n");

    for(int i = 1; i < n - 1; i++) {
        draw_inner_line(spaces_count, hashtags_count);
        printf("\n");

        spaces_count--;
        hashtags_count += 2;
    }

    draw_bottom_line(spaces_count, bottom_line_length);
    printf("\n");
}
