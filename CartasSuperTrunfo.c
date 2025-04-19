#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    char estado_carta_1[50];
    char codigo_carta_1[4];
    char nomeCidade_carta_1[50];
    int populacao_carta_1;
    float area_carta_1;
    float pib_carta_1;
    int numPontosTuristicos_carta_1;

    char estado_carta_2[50];
    char codigo_carta_2[4];
    char nomeCidade_carta_2[50];
    int populacao_carta_2;
    float area_carta_2;
    float pib_carta_2;
    int numPontosTuristicos_carta_2;

    printf("Carta 1:\n");

    printf("Digite o estado: ");
    scanf("%s", estado_carta_1);

    printf("Digite o código: ");
    scanf(" %s", codigo_carta_1);

    printf("Digite o nome da cidade: ");
    getchar();
    fgets(nomeCidade_carta_1, sizeof(nomeCidade_carta_1), stdin);
    nomeCidade_carta_1[strcspn(nomeCidade_carta_1, "\n")] = 0;

    printf("Digite a população: ");
    scanf(" %d", &populacao_carta_1);

    printf("Digite a área: ");
    scanf(" %f", &area_carta_1);

    printf("Digite o PIB: ");
    scanf(" %f", &pib_carta_1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &numPontosTuristicos_carta_1);

    printf("Carta 2:\n");

    printf("Digite o estado: ");
    scanf(" %s", estado_carta_2);

    printf("Digite o código: ");
    scanf(" %s", codigo_carta_2);

    printf("Digite o nome da cidade: ");
    getchar();
    fgets(nomeCidade_carta_2, sizeof(nomeCidade_carta_2), stdin);
    nomeCidade_carta_2[strcspn(nomeCidade_carta_2, "\n")] = 0;

    printf("Digite a população: ");
    scanf(" %d", &populacao_carta_2);

    printf("Digite a área: ");
    scanf(" %f", &area_carta_2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib_carta_2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &numPontosTuristicos_carta_2);

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado_carta_1);
    printf("Código: %s\n", codigo_carta_1);
    printf("Nome da cidade: %s\n", nomeCidade_carta_1);
    printf("População: %d\n", populacao_carta_1);
    printf("Área: %.2f\n", area_carta_1);
    printf("PIB: %.2f\n", pib_carta_1);
    printf("Número de pontos turísticos: %d\n", numPontosTuristicos_carta_1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado_carta_2);
    printf("Código: %s\n", codigo_carta_2);
    printf("Nome da cidade: %s\n", nomeCidade_carta_2);
    printf("População: %d\n", populacao_carta_2);
    printf("Área: %.2f\n", area_carta_2);
    printf("PIB: %.2f\n", pib_carta_2);
    printf("Número de pontos turísticos: %d\n", numPontosTuristicos_carta_2);

    return 0;
}
