#include <stdio.h>
#include <ctype.h>

void tokenize(const char *code) {
    int i = 0;

    while (code[i]) {
        if (isalpha(code[i])) {
            printf("IDENTIFIER: ");
            while (isalnum(code[i])) {
                putchar(code[i++]);
            }
            printf("\n");
        } else if (isdigit(code[i])) {
            printf("NUMBER: ");
            while (isdigit(code[i])) {
                putchar(code[i++]);
            }
            printf("\n");
        } else {
            i++;
        }
    }
}

int main() {
    const char *source = "var1 = 100";
    tokenize(source);
    return 0;
}
