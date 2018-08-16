#include <stdio.h>

int main() {
    int notas, nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    int moedas, moeda50, moeda25, moeda10, moeda5, moeda1;
    double valorDouble;

    scanf("%lf", &valorDouble);

    if (notas > 1000001) { printf("Erro"); }
    else { valorDouble = valorDouble * 100; }

    notas = valorDouble / 100;
    valorDouble = valorDouble / 100;
    moedas = ((valorDouble - notas) * 100);

    if ((moedas * 1000) % 10 == 9) { moedas++; }

    nota100 = notas / 100;
    notas %= 100;
    nota50 = (notas) / 50;
    notas %= 50;
    nota20 = notas / 20;
    notas %= 20;
    nota10 = notas / 10;
    notas %= 10;
    nota5 = notas / 5;
    notas %= 5;
    nota2 = notas / 2;
    notas %= 2;

    nota1 = notas;
    moeda50 = moedas / 50;
    moedas %= 50;
    moeda25 = moedas / 25;
    moedas %= 25;
    moeda10 = moedas / 10;
    moedas %= 10;
    moeda5 = moedas / 5;
    moedas %= 5;
    moeda1 = moedas;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", nota1);
    printf("%d moeda(s) de R$ 0.50\n", moeda50);
    printf("%d moeda(s) de R$ 0.25\n", moeda25);
    printf("%d moeda(s) de R$ 0.10\n", moeda10);
    printf("%d moeda(s) de R$ 0.05\n", moeda5);
    printf("%d moeda(s) de R$ 0.01\n", moeda1);

    return 0;
}
