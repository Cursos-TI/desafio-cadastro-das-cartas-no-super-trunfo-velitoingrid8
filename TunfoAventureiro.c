#include <stdio.h>

int main() {
    // Carta 1
    char estado1[30];
    char codigo1[10];
    char nome1[50];
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1;

    // Carta 2
    char estado2[30];
    char codigo2[10];
    char nome2[50];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2;

    // Entrada de dados da Carta 1
    printf("Carta1: \n");
    printf("Digite o Estado da Carta 1: ");
    scanf(" %[^\n]", estado1);

    printf("Digite o Codigo da Carta 1: ");
    scanf(" %s", codigo1);

    printf("Digite o Nome da Cidade da Carta 1: ");
    scanf(" %[^\n]", nome1);

    printf("Digite a Populacao da Cidade da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a Area da Cidade da Carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade da Carta 1 (em bilhoes de reais): ");
    scanf("%f", &pib1);


    printf("Digite o Numero de Pontos Turisticos da Carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    printf("A densidada da cidade da Carta 1 é(confirme . enter): %.2f", densidade1);
    scanf("%f", &densidade1);

    printf("O PIB da Cidade da Carta 1 é(confirme . enter): %.2f", pib_per_capita1);
    scanf("%f \n", &pib1);


    // Entrada de dados da Carta 2
    printf("Carta 2: \n");
    printf("\nDigite o Estado da Carta 2: ");
    scanf(" %[^\n]", estado2);

    printf("Digite o Codigo da Carta 2: ");
    scanf(" %s", codigo2);

    printf("Digite o Nome da Cidade da Carta 2: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a Populacao da Cidade da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a Area da Cidade da Carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade da Carta 2 (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    printf("A densidada da cidade da Carta 1 é(confirme . enter): %.2f", densidade2);
    scanf("%f", &densidade1);

    printf("O PIB da Cidade da Carta 2 é(confirme . enter): %.2f", pib_per_capita2);
    scanf("%f", &pib_per_capita2);

    // Saída formatada - Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Saída formatada - Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
