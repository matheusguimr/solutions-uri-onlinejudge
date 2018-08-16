#include <stdio.h>

void flush_in() {
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}

int main() {
    int entrada = 0;
    while (1) {
        scanf("%d", &entrada);
        flush_in();
        if (entrada == 0) break;
        for (int i = 1; i < entrada; ++i) {
            printf("%d ", i);
        }
        printf("%d\n", entrada);
    }

    return 0;
}
