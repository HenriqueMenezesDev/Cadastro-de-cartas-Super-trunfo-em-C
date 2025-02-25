#include <stdio.h>

// Função para exibir o menu e capturar a escolha do usuário
int exibirMenu(int atributo1Escolhido) {
    int escolha;
    printf("\nEscolha o atributo para comparar:\n");

    // Exibe apenas os atributos que ainda não foram escolhidos
    if (atributo1Escolhido != 1) printf("1 - População\n");
    if (atributo1Escolhido != 2) printf("2 - Área\n");
    if (atributo1Escolhido != 3) printf("3 - PIB\n");
    if (atributo1Escolhido != 4) printf("4 - Pontos Turísticos\n");
    if (atributo1Escolhido != 5) printf("5 - Densidade Populacional\n");

    printf("Digite sua escolha: ");
    scanf("%d", &escolha); // Captura a escolha do usuário

    return escolha;
}

int main() {
    // Declaração das variáveis
    char nomePais1[50], nomePais2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;

    // Entrada dos dados do primeiro país
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

    // Entrada dos dados do segundo país
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

    // Exibição do menu para escolha do primeiro atributo de comparação
    int escolhaAtributo1 = exibirMenu(0);

    // Validação da escolha do primeiro atributo
    if (escolhaAtributo1 < 1 || escolhaAtributo1 > 5) {
        printf("Opção inválida para o primeiro atributo! Encerrando.\n");
        return 1;
    }

    // Exibição do menu para escolha do segundo atributo (diferente do primeiro escolhido)
    int escolhaAtributo2 = exibirMenu(escolhaAtributo1);

    // Validação da escolha do segundo atributo
    if (escolhaAtributo2 < 1 || escolhaAtributo2 > 5 || escolhaAtributo2 == escolhaAtributo1) {
        printf("Opção inválida para o segundo atributo! Encerrando.\n");
        return 1;
    }

    // Variáveis para armazenar os valores dos atributos escolhidos
    int valorAtributo1_pais1, valorAtributo1_pais2;
    int valorAtributo2_pais1, valorAtributo2_pais2;

    // Obtenção dos valores dos atributos escolhidos para cada país
    switch (escolhaAtributo1) {
        case 1: valorAtributo1_pais1 = populacao1; valorAtributo1_pais2 = populacao2; break;
        case 2: valorAtributo1_pais1 = (int)area1; valorAtributo1_pais2 = (int)area2; break;
        case 3: valorAtributo1_pais1 = (int)pib1; valorAtributo1_pais2 = (int)pib2; break;
        case 4: valorAtributo1_pais1 = pontosTuristicos1; valorAtributo1_pais2 = pontosTuristicos2; break;
        case 5: valorAtributo1_pais1 = (int)densidadePopulacional1; valorAtributo1_pais2 = (int)densidadePopulacional2; break;
    }

    switch (escolhaAtributo2) {
        case 1: valorAtributo2_pais1 = populacao1; valorAtributo2_pais2 = populacao2; break;
        case 2: valorAtributo2_pais1 = (int)area1; valorAtributo2_pais2 = (int)area2; break;
        case 3: valorAtributo2_pais1 = (int)pib1; valorAtributo2_pais2 = (int)pib2; break;
        case 4: valorAtributo2_pais1 = pontosTuristicos1; valorAtributo2_pais2 = pontosTuristicos2; break;
        case 5: valorAtributo2_pais1 = (int)densidadePopulacional1; valorAtributo2_pais2 = (int)densidadePopulacional2; break;
    }

    // Exibição dos valores dos atributos escolhidos
    printf("%s: %d, %d\n", nomePais1, valorAtributo1_pais1, valorAtributo2_pais1);
    printf("%s: %d, %d\n", nomePais2, valorAtributo1_pais2, valorAtributo2_pais2);

    // Contadores de pontos para determinar o país vencedor
    int pontosPais1 = 0, pontosPais2 = 0;

    // Comparação do primeiro atributo escolhido
    if (escolhaAtributo1 == 5) { // Densidade Populacional (menor valor é melhor)
        if (valorAtributo1_pais1 < valorAtributo1_pais2) pontosPais1++;
        else if (valorAtributo1_pais2 < valorAtributo1_pais1) pontosPais2++;
    } else {
        if (valorAtributo1_pais1 > valorAtributo1_pais2) pontosPais1++;
        else if (valorAtributo1_pais2 > valorAtributo1_pais1) pontosPais2++;
    }

    // Comparação do segundo atributo escolhido
    if (escolhaAtributo2 == 5) { // Densidade Populacional (menor valor é melhor)
        if (valorAtributo2_pais1 < valorAtributo2_pais2) pontosPais1++;
        else if (valorAtributo2_pais2 < valorAtributo2_pais1) pontosPais2++;
    } else {
        if (valorAtributo2_pais1 > valorAtributo2_pais2) pontosPais1++;
        else if (valorAtributo2_pais2 > valorAtributo2_pais1) pontosPais2++;
    }

    // Soma dos valores dos atributos escolhidos
    int somaPais1 = valorAtributo1_pais1 + valorAtributo2_pais1;
    int somaPais2 = valorAtributo1_pais2 + valorAtributo2_pais2;

    printf("Soma dos atributos:\n%s: %d\n%s: %d\n", nomePais1, somaPais1, nomePais2, somaPais2);

    // Determinação do país vencedor
    if (somaPais1 > somaPais2) printf("Vencedor: %s\n", nomePais1);
    else if (somaPais2 > somaPais1) printf("Vencedor: %s\n", nomePais2);
    else printf("Empate entre %s e %s!\n", nomePais1, nomePais2);

    return 0;
}
