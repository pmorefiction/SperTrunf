#include <stdio.h>

int main() {
char codigo1[4] = "A1", nome1[50] = "Santos";
char codigo2[4] = "B2", nome2[50] = "Londrina";
int populacao1 = 418608, populacao2 = 577318;
int pontos1 = 10, pontos2 = 80;
float area1 = 280674, area2 = 1652569;
float pib1 = 22073535, pib2 = 23604749;

    printf("\n--- Cidade 1 ---\n");
    printf("Codigo: %s\nNome: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2f bilhoes\nPontos Turisticos: %d\n",
    codigo1, nome1, populacao1, area1, pontos1);

    printf("\n--- Cidade 2 ---\n");
    printf("Codigo: %s\nNome: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2f bilhoes\nPontos Turisticos: %d\n",
    codigo2, nome2, populacao2, area2, pontos2);

    return 0;
}
