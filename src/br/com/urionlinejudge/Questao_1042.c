#include <stdio.h>

void imprimir_vetor(int x[]) {
    for (int i = 0; i < 3; ++i) {
        printf("%d\n", x[i]);
    }
}

int *organizar_numeros(int x[]) {
    int aux;
    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 3; ++j) {
            if (x[i] > x[j]) {
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    }
    return x;
}

int main() {
    int a, b, c, vetor_crescente[3], vetor_primario[3];
    scanf("%d %d %d", &a, &b, &c);
    vetor_crescente[0] = a;
    vetor_crescente[1] = b;
    vetor_crescente[2] = c;
    vetor_primario[0] = a;
    vetor_primario[1] = b;
    vetor_primario[2] = c;
    organizar_numeros(vetor_crescente);
    imprimir_vetor(vetor_crescente);
    printf("\n");
    imprimir_vetor(vetor_primario);

    return 0;
}
