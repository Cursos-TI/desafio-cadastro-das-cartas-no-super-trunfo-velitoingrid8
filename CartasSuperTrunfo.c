#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // ===== CARTA 1 =====
    char estado1;
    char codigo1[4];        // Exemplo: A01
    char nomeCidade1[30];   // Aqui só aceita 1 palavra
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // ===== CARTA 2 =====
    char estado2;
    char codigo2[5];
    char nomeCidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //breve apresentação do jogo
    printf("Bem-vindo ao desaio do super trunfo!\n\n");

    // Entrada dos dados da carta 1
    printf("=== Cadastro da Carta 1 ===\n\n");

    printf("Estado, somente a inicial (A-H): ");
    scanf(" %c", &estado1);  // corrigido: adicionado &

    printf("Codigo da carta (ex: A01): ");
    scanf("%3s", codigo1);   // limite de 3 + '\0'

    printf("Nome da cidade (sem espacos): ");
    scanf("%29s", nomeCidade1); // limite de 29 + '\0'

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada dos dados da carta 2
    printf("\n=== Cadastro da Carta 2 ===\n\n");

    printf("Estado, somente a inicial (A-H): ");
    scanf(" %c", &estado2);  // corrigido: adicionado &

    printf("Codigo da carta (ex: B02): ");
    scanf("%4s", codigo2);   // limite de 4 + '\0'

    printf("Nome da cidade (sem espacos): ");
    scanf("%29s", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados
    printf("\n=== Carta 1 ===\n\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    //encerramento.

    return 0;
}
