#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Desafio: nível mestre

int main() {
    char estado1, estado2;
    int numeroCidade1, numeroCidade2;
    char codigo1[4], codigo2[4]; 
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;


    // Entrada dos dados
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1); // Lê um caractere com espaço em branco antes do %c para consumir o \n do buffer do teclado
    
    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &numeroCidade1); // Lê um número inteiro e armazena na variável numeroCidade
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê uma string com espaços

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Gerar o código da cidade
    sprintf(codigo1, "%c%02d", estado1, numeroCidade1);

    // Calcular a densidade populacional
    densidadePopulacional1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    pibPerCapita1 = (populacao1 > 0) ? (pib1 * 1000000000) / populacao1 : 0;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (densidadePopulacional1 > 0 ? 1 / densidadePopulacional1 : 0);




    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado2); // Lê um caractere com espaço em branco antes do %c para consumir o \n do buffer do teclado
    
    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &numeroCidade2); // Lê um número inteiro e armazena na variável numeroCidade
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2); // Lê uma string com espaços

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Gerar o código da cidade
    sprintf(codigo2, "%c%02d", estado2, numeroCidade2);

    // Calcular a densidade populacional
    densidadePopulacional2 = (area2 > 0) ? (float)populacao2 / area2 : 0;
    pibPerCapita2 = (populacao2 > 0) ? (pib2 * 1000000000) / populacao2 : 0;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (densidadePopulacional2 > 0 ? 1 / densidadePopulacional2 : 0);

    //cidade que venceu

    int cidade1venceu = (superPoder1) > (superPoder2);
    int cidade2venceu = (superPoder2) > (superPoder1);
    int empate = (superPoder1 == superPoder2);


    // Saída dos dados cadastrados

    printf("\n\nCidade 1\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Tamanho do Poder: %.3f\n", superPoder1);

    printf("\n\nCidade 2\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Tamanho do Poder: %.3f\n", superPoder2);

    printf("\n\nQUEM GANHOU?\n");
    printf("Cidade 1 ganhou: %d\n", cidade1venceu);
    printf("Cidade 2 ganhou: %d\n", cidade2venceu);
    printf("Empate: %d\n", empate);


    return 0;
}