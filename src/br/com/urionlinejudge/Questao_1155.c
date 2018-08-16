#include <stdio.h>

int main() {
    double entrada = 0;
        for (double i = 1; i < 101; i++) {
            entrada = entrada + (1/i);
        }
        printf("%.2lf\n", entrada);

    return 0;
}

