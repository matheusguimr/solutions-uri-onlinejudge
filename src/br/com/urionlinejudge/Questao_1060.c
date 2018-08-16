#include <stdio.h>

int contar_positivos(float x[]) {
  int count = 0;
  for (int i = 0; i < 6; i++) {
    if (x[i] >= 0) {
      count++;
    }
  }
  return count;
}

int main() {
  float a, b, c, d, e, f, x[6];
  int positivos;
  scanf("%f", &a);
  x[0] = a;
  scanf("%f", &b);
  x[1] = b;
  scanf("%f", &c);
  x[2] = c;
  scanf("%f", &d);
  x[3] = d;
  scanf("%f", &e);
  x[4] = e;
  scanf("%f", &f);
  x[5] = f;
  printf("%d valores positivos\n", contar_positivos(x));

  return 0;
}
