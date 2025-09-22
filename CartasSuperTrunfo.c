#include <stdio.h>

int main() {
    char estado1[4];
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2[4];
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    int vitoriaPopulacao;
    int vitoriaArea;
    int vitoriaPib;
    int vitoriaPontos;
    int vitoriaDensidade;
    int vitoriaPibPerCapita;
    int vitoriaSuperPoder;

    printf("Insira os dados da primeira carta:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código da Carta: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    printf("\nInsira os dados da segunda carta:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código da Carta: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    vitoriaPopulacao = populacao1 > populacao2;
    vitoriaArea = area1 > area2;
    vitoriaPib = pib1 > pib2;
    vitoriaPontos = pontosTuristicos1 > pontosTuristicos2;
    vitoriaDensidade = densidade1 < densidade2;
    vitoriaPibPerCapita = pibPerCapita1 > pibPerCapita2;
    vitoriaSuperPoder = superPoder1 > superPoder2;

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\nComparação de Cartas:\n\n");
    printf("População: %s (%d)\n", vitoriaPopulacao ? "Carta 1 venceu" : "Carta 2 venceu", vitoriaPopulacao);
    printf("Área: %s (%d)\n", vitoriaArea ? "Carta 1 venceu" : "Carta 2 venceu", vitoriaArea);
    printf("PIB: %s (%d)\n", vitoriaPib ? "Carta 1 venceu" : "Carta 2 venceu", vitoriaPib);
    printf("Pontos Turísticos: %s (%d)\n", vitoriaPontos ? "Carta 1 venceu" : "Carta 2 venceu", vitoriaPontos);
    printf("Densidade Populacional: %s (%d)\n", vitoriaDensidade ? "Carta 1 venceu" : "Carta 2 venceu", vitoriaDensidade);
    printf("PIB per Capita: %s (%d)\n", vitoriaPibPerCapita ? "Carta 1 venceu" : "Carta 2 venceu", vitoriaPibPerCapita);
    printf("Super Poder: %s (%d)\n", vitoriaSuperPoder ? "Carta 1 venceu" : "Carta 2 venceu", vitoriaSuperPoder);

    return 0;
}
