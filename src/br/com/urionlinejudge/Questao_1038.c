#include <stdio.h>

double analizar_codigo(double a) {
    if (a == 1) {
        return 4.00;
    } else if (a == 2) {
        return 4.50;
    } else if (a == 3) {
        return 5.00;
    } else if (a == 4) {
        return 2.00;
    } else if (a == 5) {
        return 1.50;
    }
}

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("Total: R$ %.2lf\n", analizar_codigo(a) * b);

    return 0;
}
