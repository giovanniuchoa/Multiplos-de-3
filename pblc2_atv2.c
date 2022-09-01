#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int lim_inf, lim_sup, tentativas = 0;

  printf("\nLimite inferior: ");
  scanf("%d", &lim_inf);

  printf("Limite superior: ");
  scanf("%d", &lim_sup);

  while (lim_inf >= lim_sup) {

    tentativas++;

    if (tentativas == 3) {

      printf("\nPrograma encerrado. Limite de tentativas excedido.");
      exit(0);
    }

    if (lim_inf > lim_sup) {

      printf("\n*Limite inferior maior que o superior, tente novamente.*\n");

    } else if (lim_inf == lim_sup) {

      printf("\n*Limite inferior igual ao superior, tente novamente.*\n");
    }

    printf("\nLimite inferior: ");
    scanf("%d", &lim_inf);

    printf("Limite superior: ");
    scanf("%d", &lim_sup);
  }

  printf("\n---Múltiplos de 3:---\n\n");
  int j = 0;
  for (int i = lim_inf; i <= lim_sup; i++) {

    if (i % 3 == 0) {

      j++;

      printf(" [%d]", i);

      if (j % 4 == 0) {
        printf("\n\n");
      }
    }
  }

  return 0;
}