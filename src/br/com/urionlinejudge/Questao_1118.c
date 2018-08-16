#include <stdio.h>

void flush_in() {
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}

float analizar_input(float x) {
    while (x > 10 || x < 0) {
        printf("nota invalida\n");
        scanf("%f", &x);
        flush_in();
    }
    return x;
}

float calcular_media(float x, float y) {
    return (x + y) / 2;
}

float analizar_retorno(float x) {
    while (x < 1 || x > 2) {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%f", &x);
        flush_in();
    }
}

int main() {
    float valor_1, valor_2, nova_media, media_1, media_2;
    do{
        scanf("%f", &valor_1);
        flush_in();
        media_1 = analizar_input(valor_1);
        scanf("%f", &valor_2);
        flush_in();
        media_2 = analizar_input(valor_2);
        printf("media = %.2f\n", calcular_media(media_1, media_2));
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%f", &nova_media);
        flush_in();
        analizar_retorno(nova_media);
    } while (nova_media != 2);

    return 0;
}
