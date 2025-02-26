# Comparador de Países

## Descrição
Este programa, desenvolvido na linguagem C, permite comparar dois países com base em diversos atributos, como população, área territorial, Produto Interno Bruto (PIB), número de pontos turísticos e densidade populacional. O usuário insere os dados referentes a dois países, seleciona dois atributos para comparação e o programa determina qual país se destaca com base nos critérios escolhidos.

## Objetivo Educacional
O projeto serve como material de estudo para estudantes de programação e introduz conceitos fundamentais da linguagem C, incluindo:
- Entrada e saída de dados (`printf` e `scanf`);
- Estruturas condicionais (`if`, `else`);
- Uso de laços de repetição e decisão (`switch case`);
- Modularização por meio de funções;
- Manipulação de variáveis e diferentes tipos de dados.

## Funcionamento do Programa
1. O programa solicita que o usuário insira informações sobre dois países: nome, população, área, PIB e número de pontos turísticos.
2. A densidade populacional de cada país é calculada automaticamente.
3. O usuário seleciona dois atributos para realizar a comparação.
4. O programa analisa os atributos escolhidos e determina o país vencedor com base nos valores inseridos.
5. O resultado da comparação é exibido, incluindo a soma dos atributos avaliados.

## Estrutura do Código
### Declaração de Variáveis
As principais variáveis armazenam os dados informados pelo usuário:
- `char nomePais1[50], nomePais2[50];` → Nomes dos países.
- `int populacao1, populacao2;` → População total de cada país.
- `float area1, area2;` → Extensão territorial em km².
- `float pib1, pib2;` → PIB em bilhões de unidades monetárias.
- `int pontosTuristicos1, pontosTuristicos2;` → Quantidade de pontos turísticos.
- `float densidadePopulacional1, densidadePopulacional2;` → Densidade populacional calculada (habitantes por km²).

### Função `exibirMenu`
Esta função:
- Exibe as opções disponíveis para comparação de atributos.
- Garante que o usuário escolha dois atributos distintos, evitando repetições.

### Entrada de Dados
O programa recebe os valores informados pelo usuário utilizando a função `scanf`. Exemplos:
- `scanf(" %[^\n]", nomePais1);` → Lê o nome do país como uma string completa.
- `scanf("%d", &populacao1);` → Lê um valor inteiro correspondente à população.
- `scanf("%f", &area1);` → Lê um valor decimal para representar a área e o PIB.

### Cálculo da Densidade Populacional
A densidade populacional é determinada pela fórmula:
```c
    densidadePopulacional1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
```
Essa abordagem evita erros matemáticos decorrentes de divisão por zero.

### Comparação dos Atributos Escolhidos
A estrutura `switch case` relaciona a escolha do usuário com os respectivos atributos:
```c
    switch (escolhaAtributo1) {
        case 1: valorAtributo1_pais1 = populacao1; valorAtributo1_pais2 = populacao2; break;
        case 2: valorAtributo1_pais1 = (int)area1; valorAtributo1_pais2 = (int)area2; break;
        case 3: valorAtributo1_pais1 = (int)pib1; valorAtributo1_pais2 = (int)pib2; break;
    }
```

### Determinação do País com Maior Soma de Atributos
O país que apresenta a maior soma dos atributos selecionados é declarado vencedor. Em caso de empate, o programa informa essa condição ao usuário.

## Exemplo de Entrada e Saída
### Entrada
```
Digite o nome do Pais 1: Brasil
Digite a população do Pais 1: 214000000
Digite a área do Pais 1 (km²): 8515767
Digite o PIB do Pais 1 (em bilhões): 14472
Digite o número de pontos turísticos do Pais 1: 50

Digite o nome do Pais 2: Argentina
Digite a população do Pais 2: 45300000
Digite a área do Pais 2 (km²): 2780400
Digite o PIB do Pais 2 (em bilhões): 500
Digite o número de pontos turísticos do Pais 2: 40
```

### Escolhas do Usuário
```
Escolha o atributo para comparar:
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Populacional
Digite sua escolha: 1

Escolha o atributo para comparar:
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Populacional
Digite sua escolha: 3
```

### Saída
```
Brasil: 214000000, 14472
Argentina: 45300000, 500

Soma dos atributos:
Brasil: 214014472
Argentina: 45300500

Vencedor: Brasil
```

## Compilação e Execução
Para compilar e executar o código utilizando o compilador `gcc`, siga as etapas abaixo:
1. Abra o terminal e navegue até o diretório onde o arquivo do programa está salvo.
2. Compile o código com o comando:
   ```bash
   gcc comparador_paises.c -o comparador
   ```
3. Execute o programa com:
   ```bash
   ./comparador
   ```

## Considerações Finais
Este programa ilustra conceitos fundamentais da programação em C, incluindo entrada e saída de dados, manipulação de variáveis, estrutura condicional, modularização e funções. Seu desenvolvimento proporciona um exercício prático para estudantes que desejam aprimorar suas habilidades na construção de programas interativos e lógicos.