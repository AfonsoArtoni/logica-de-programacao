#include <stdio.h>

int main() {
  char op;
  int linha, i, j;
  double soma = 0, media = 0;
  double matriz[12][12];
  scanf("%d ", &linha);
  scanf("%c", &op);

  for (i = 0; i < 12; i++)
    for (j = 0; j < 12; j++)
      scanf("%lf", &matriz[i][j] );

  for (j = 0; j < 12; j++) {
    soma += matriz[linha][j];
  }

  if ( op == 'S' ) {
    printf("%.1lf\n", soma);
  } else if (op == 'M') {
    printf("%.1lf\n", (soma / 12.0f));
  }

  return 0;
}
