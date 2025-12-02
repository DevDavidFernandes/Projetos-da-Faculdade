#include <stdio.h>

int main()
{
    char estado1[2];
    char codigo1[3];
    char cidade1[50];
    int populacao1, turistico1;
    float area1, pib1;

    printf("Cadastre a primeira carta do super trunfo\n");

    printf("Estado da carta:\n");
    scanf("%s", estado1);
    while (getchar() != '\n')
        ;

    printf("Código da carta:\n");
    scanf(" %s", codigo1);
    while (getchar() != '\n')
        ;

    printf("Nome da cidade da carta:\n");
    scanf(" %[^\n]", cidade1);
    while (getchar() != '\n')
        ;

    printf("População da carta:\n");
    scanf(" %d", &populacao1);
    while (getchar() != '\n')
        ;

    printf("Área da carta:\n");
    scanf(" %f", &area1);
    while (getchar() != '\n')
        ;

    printf("PIB da carta:\n");
    scanf(" %f", &pib1);
    while (getchar() != '\n')
        ;

    printf("Número de pontos turísticos:\n");
    scanf(" %d", &turistico1);
    while (getchar() != '\n')
        ;

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de pontos turísticos: %d\n", turistico1);

    return 0;
}