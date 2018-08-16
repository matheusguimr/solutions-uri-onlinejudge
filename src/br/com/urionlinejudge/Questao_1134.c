#include <stdio.h>

void flush_in() {
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}

int main() {
    int end = 0;
    int alcool = 0;
    int gasolina = 0;
    int diesel = 0;
    do {
        scanf("%d", &end);
        flush_in();
        if (end == 1) {
            alcool++;
        } else if (end == 2) {
            gasolina++;
        } else if (end == 3) {
            diesel++;
        }
    } while (end != 4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}
