#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1, pib1;
    int pontos1;

    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Codigo: ");
    scanf("%3s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    printf("\nCarta 1 cadastrada:\n");
    printf("Estado: %c\nCodigo: %s\nNome: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\n",
        estado1, codigo1, nome1, populacao1, area1, pib1, pontos1);

    // Carta 2
    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2, pib2;
    int pontos2;

    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf("%3s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    printf("\nCarta 2 cadastrada:\n");
    printf("Estado: %c\nCodigo: %s\nNome: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\n",
        estado2, codigo2, nome2, populacao2, area2, pib2, pontos2);


    return 0;
}
