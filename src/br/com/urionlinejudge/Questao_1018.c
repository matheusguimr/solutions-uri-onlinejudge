#include <stdio.h>

int main() {
    int N, note100, note50, note20, note10, note5, note2, note1;
    scanf("%d", &N);
    note100 = N / 100;
    note50 = (N % 100) / 50;
    note20 = ((N % 100) % 50) / 20;
    note10 = (((N % 100) % 50) % 20) / 10;
    note5 = ((((N % 100) % 50) % 20) % 10) / 5;
    note2 = (((((N % 100) % 50) % 20) % 10) % 5) / 2;
    note1 = ((((((N % 100) % 50) % 20) % 10) % 5) % 2);

    printf("%d\n", N);
    printf("%d nota(s) de R$ %d,00\n", note100, 100);
    printf("%d nota(s) de R$ %d,00\n", note50, 50);
    printf("%d nota(s) de R$ %d,00\n", note20, 20);
    printf("%d nota(s) de R$ %d,00\n", note10, 10);
    printf("%d nota(s) de R$ %d,00\n", note5, 5);
    printf("%d nota(s) de R$ %d,00\n", note2, 2);
    printf("%d nota(s) de R$ %d,00\n", note1, 1);

    return 0;
}
