#include <stdio.h>
#include <math.h>

double calcular_primeira_parte(double a, double b, double c) {
    double x = (b * b) - (4 * a * c);
    return x;
}

double calcular_segunda_parte_positiva(double a, double b, double c) {
    double x = (-b + (sqrt(calcular_primeira_parte(a, b, c)))) / (2 * a);
    return x;
}

double calcular_segunda_parte_negativa(double a, double b, double c) {
    double x = (-b - (sqrt(calcular_primeira_parte(a, b, c)))) / (2 * a);
    return x;
}

int main() {
    double a, b, c, delta, x_positivo, x_negativo;
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = calcular_primeira_parte(a, b, c);
    x_positivo = calcular_segunda_parte_positiva(a, b, c);
    x_negativo = calcular_segunda_parte_negativa(a, b, c);
    if (a != 0 && delta > 0) {
        printf("R1 = %.5f\n", x_positivo);
        printf("R2 = %.5f\n", x_negativo);
    } else {
        printf("Impossivel calcular\n");
    }

    return 0;
}

