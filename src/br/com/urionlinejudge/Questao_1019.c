#include <stdio.h>

int main() {

    int N, horas, minutos, segundos;
    scanf("%d", &N);
    horas = 0;
    minutos = 0;
    segundos = 0;
    for (int i = 0; i < N; ++i) {
        segundos = segundos + 1;
        if (segundos > 59) {
            segundos = 0;
            minutos = minutos + 1;
            if (minutos > 59) {
                segundos = 0;
                minutos = 0;
                horas = horas + 1;
            }
        }
    }
    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
