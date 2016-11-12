#include <stdio.h>
#include <string.h>

const static int MAX_LEN = 1000;

int is_lowercase(char);
int is_uppercase(char);
int is_alphabetic(char);
char to_lowercase(char);
void convert_to_lowercase(char*, size_t);
void remove_non_alphabetic_chars(char*, size_t);
void swap_chars(char*, char*);
void sort_string(char*, size_t);
void print_as_counter(char*, size_t);

int main() {
    char seq[MAX_LEN];
    fgets(seq, MAX_LEN, stdin);
    size_t len = strlen(seq);

    convert_to_lowercase(seq, len);
    remove_non_alphabetic_chars(seq, len);
    sort_string(seq, len);
    print_as_counter(seq, len);

    return 0;
}

int is_lowercase(char c) {
    return (c >= 'a' && c <= 'z');
}

int is_uppercase(char c) {
    return (c >= 'A' && c <= 'Z');
}

int is_alphabetic(char c) {
    return is_lowercase(c) || is_uppercase(c);
}

char to_lowercase(char c) {
    if(is_uppercase(c)) {
        c += ' ';
    }

    return c;
}

void convert_to_lowercase(char* seq, size_t len) {
    for(int i = 0; i < len; i++) {
        seq[i] = to_lowercase(seq[i]);
    }
}

void remove_non_alphabetic_chars(char* seq, size_t len) {
    for(int i = 0; i < len; i++) {
        if(!is_alphabetic(seq[i])) {
            seq[i] = ' ';
        }
    }
}

void swap_chars(char* c1, char* c2) {
    char temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}

void sort_string(char* seq, size_t len) {
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < len - 1; j++) {
            if(seq[j] - seq[j + 1] > 0) {
                swap_chars(&seq[j], &seq[j + 1]);
            }
        }
   }
}

void print_as_counter(char* seq, size_t len) {
    for(int i = 0; i < len; i++) {
        if(is_alphabetic(seq[i])) {
            int current_count = 1;
            char current_letter = seq[i];

            for(int j = i + 1; j < len; j++) {
                if(seq[j] == current_letter) {
                    current_count++;
                    seq[j] = ' ';
                }
            }

            printf("%c - %d\n", current_letter, current_count);
        }
    }
}
