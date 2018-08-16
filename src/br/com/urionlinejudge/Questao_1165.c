#include <stdio.h>

void flush_in() {
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}

int calcular_primos(long int numero) {
    for (long int i = 2; i < numero; i++) {
        if ((numero % i) == 0) {
            return 1;
        }
    }
    return 0;
}

void calcular_laco(int tamanho) {
    long int numero;
    for (int i = 0; i < tamanho; ++i) {
        int numero_calculado;
        scanf("%ld", &numero);
        flush_in();
        numero_calculado = calcular_primos(numero);
        if (numero_calculado == 1) {
            printf("%ld nao eh primo\n", numero);
        } else {
            printf("%ld eh primo\n", numero);
        }
    }
}

int main() {
    int tamanho;
    scanf("%d", &tamanho);
    flush_in();
    calcular_laco(tamanho);

    return 0;
}

