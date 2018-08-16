#include <stdio.h>

void contar_seis_impares_consecutivos(int x) {
    for (int i = x; i < x + 13; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int x;
    scanf("%d", &x);
    contar_seis_impares_consecutivos(x);

    return 0;
}
