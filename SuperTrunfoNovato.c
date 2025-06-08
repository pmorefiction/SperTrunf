#include <stdio.h>

int main() {
  char codigo1[4] = "A1", nome1[50] = "Santos";
  char codigo2[4] = "B2", nome2[50] = "Londrina";
  int populacao1 = 418608, populacao2 = 577318;
  int pontos1 = 10, pontos2 = 80;
  float area1 = 280.674, area2 = 1.652.569;
  float pib1 = 22.073.535, 23.604.749;

  printf("\n--- Cidade 1 ---\n");
  printf("Código: %s\nNome %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\n",
    codigo1, nome1, populacao1, area1, pontos1);
  printf("Código: %s\nNome %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\n",
    codigo2, nome2, populacao2, area2, pontos2);

  return 0;
}
