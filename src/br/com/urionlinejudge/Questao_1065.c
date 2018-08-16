#include <stdio.h>

int contar_valores_pares(int x[]) {
  int count = 0;
  for (int i = 0; i < 5; i++) {
    if (x[i] % 2 == 0) {
      count++;
    }
  }
  return count;
}

int main() {
  int a, b, c, d, e, x[5];
  int positivos;
  scanf("%d", &a);
  x[0] = a;
  scanf("%d", &b);
  x[1] = b;
  scanf("%d", &c);
  x[2] = c;
  scanf("%d", &d);
  x[3] = d;
  scanf("%d", &e);
  x[4] = e;
  printf("%d valores pares\n", contar_valores_pares(x));

  return 0;
}
