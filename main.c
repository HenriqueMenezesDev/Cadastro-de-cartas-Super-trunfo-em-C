#include <stdio.h>

// Função para exibir o menu e capturar a escolha do usuário
int exibirMenu() {
    int escolha;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("0 - sair\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);
    return escolha;
}

int main() {
    // Declaração das variáveis
    char nomePais1[50], nomePais2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;

    // Entrada dos dados da Pais 1
    printf("Digite o nome do Pais 1: ");
    scanf(" %[^\n]", nomePais1);
    printf("Digite a população do Pais 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área do Pais 1 (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB do Pais 1 (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos do Pais 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional
    densidadePopulacional1 = (area1 > 0) ? (float)populacao1 / area1 : 0;

    // Entrada dos dados da Pais 2
    printf("\nDigite o nome do Pais 2: ");
    scanf(" %[^\n]", nomePais2);
    printf("Digite a população do Pais 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área do Pais 2 (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB do Pais 2 (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos do Pais 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional
    densidadePopulacional2 = (area2 > 0) ? (float)populacao2 / area2 : 0;

    // Exibição do menu para escolha do atributo
    int escolha = exibirMenu();

    // Comparação baseada no atributo escolhido
    printf("\nAtributo escolhido: ");
    switch (escolha) {
        case 1: // População
            printf("População\n");
            printf("%s: %d habitantes\n", nomePais1, populacao1);
            printf("%s: %d habitantes\n", nomePais2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nomePais1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Área\n");
            printf("%s: %.2f km²\n", nomePais1, area1);
            printf("%s: %.2f km²\n", nomePais2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", nomePais1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("PIB\n");
            printf("%s: %.2f bilhões\n", nomePais1, pib1);
            printf("%s: %.2f bilhões\n", nomePais2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nomePais1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Pontos Turísticos\n");
            printf("%s: %d pontos turísticos\n", nomePais1, pontosTuristicos1);
            printf("%s: %d pontos turísticos\n", nomePais2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", nomePais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade Populacional (REGRA INVERTIDA)
            printf("Densidade Populacional (quanto menor, melhor)\n");
            printf("%s: %.2f hab/km²\n", nomePais1, densidadePopulacional1);
            printf("%s: %.2f hab/km²\n", nomePais2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("Vencedor: %s\n", nomePais1);
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("Vencedor: %s\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 0:
            printf("Saindo...");
            break;

        default: // Opção inválida
            printf("Opção inválida! Escolha um número de 1 a 5 (0 - para sair).\n");
    }

    return 0;
}