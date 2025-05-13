#include <stdio.h>

int main() {

            /*
            Aluno: Lucas Gabriel Oio Domiciano 
            Desafio: Super Trunfo Lógica - Nível Novato.
            */

    char estado_1, estado_2;
    char codigo_carta_1[5], codigo_carta_2[5];
    char nome_cidade_1[18], nome_cidade_2[18];
    unsigned long int qtd_populacao_1, qtd_populacao_2;
    float area_km_1, area_km_2;
    float pib_carta_1, pib_carta_2;
    int qtd_pontos_turisticos_1, qtd_pontos_turisticos_2;
    float pib_capita_carta_1, pib_capita_carta_2;
    float densidade_carta_1, densidade_carta_2;
    float super_poder_carta_1, super_poder_carta_2;
    
    const float casting_bilhao = 1000000000;
    const char validacao[30] = "Cadastro com sucesso!";
    const char estilo[50] = "\n+--------------------------------------+\n";
    
    // Carta 1
    printf("%s\nCarta 1:\n", estilo);
    
    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado_1);
    
    printf("Digite o código da primeira carta: ");
    scanf(" %4s", codigo_carta_1);

    printf("Digite o nome da primeira cidade: ");
    while (getchar() != '\n'); // Limpa buffer
    scanf(" %17[^\n]", nome_cidade_1);

    printf("Digite a quantidade da população da primeira carta: ");
    scanf("%lu", &qtd_populacao_1);

    printf("Digite a área em km2 da primeira carta: ");
    scanf("%f", &area_km_1);

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib_carta_1);

    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &qtd_pontos_turisticos_1);

    printf("%s\n", validacao);

    // Carta 2
    printf("%s\nCarta 2:\n", estilo);
    
    printf("Digite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado_2);

    printf("Digite o código da segunda carta: ");
    scanf(" %4s", codigo_carta_2);

    printf("Digite o nome da segunda cidade: ");
    while (getchar() != '\n'); // Limpa buffer
    scanf(" %17[^\n]", nome_cidade_2);

    printf("Digite a quantidade da população da segunda carta: ");
    scanf("%lu", &qtd_populacao_2);

    printf("Digite a área em km2 da segunda carta: ");
    scanf("%f", &area_km_2);

    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib_carta_2);

    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &qtd_pontos_turisticos_2);

    printf("%s\n", validacao);

    // Cálculos corrigidos
    densidade_carta_1 = (area_km_1 != 0) ? qtd_populacao_1 / area_km_1 : 0;
    densidade_carta_2 = (area_km_2 != 0) ? qtd_populacao_2 / area_km_2 : 0;

    pib_capita_carta_1 = (qtd_populacao_1 != 0) ? (pib_carta_1 * casting_bilhao) / qtd_populacao_1 : 0;
    pib_capita_carta_2 = (qtd_populacao_2 != 0) ? (pib_carta_2 * casting_bilhao) / qtd_populacao_2 : 0;

    super_poder_carta_1 = ((float)qtd_populacao_1 + area_km_1 + pib_carta_1 + 
                           (float)qtd_pontos_turisticos_1 + pib_capita_carta_1) - densidade_carta_1;
    super_poder_carta_2 = ((float)qtd_populacao_2 + area_km_2 + pib_carta_2 + 
                           (float)qtd_pontos_turisticos_2 + pib_capita_carta_2) - densidade_carta_2;

    // Exibir informações das cartas
    printf("%s", estilo);
    printf("| Carta 1: %s\n", nome_cidade_1);
    printf("| Estado: %c\n", estado_1);
    printf("| População: %lu habitantes\n", qtd_populacao_1);
    printf("| Área: %.2f km²\n", area_km_1);
    printf("| PIB: R$ %.2f bilhões\n", pib_carta_1);
    printf("| Densidade Populacional: %.2f hab/km²\n", densidade_carta_1);
    printf("| PIB per capita: R$ %.2f\n", pib_capita_carta_1);
    printf("| Super poder: %.2f\n", super_poder_carta_1);
    printf("+--------------------------------------+\n");

    printf("%s", estilo);
    printf("| Carta 2: %s\n", nome_cidade_2);
    printf("| Estado: %c\n", estado_2);
    printf("| População: %lu habitantes\n", qtd_populacao_2);
    printf("| Área: %.2f km²\n", area_km_2);
    printf("| PIB: R$ %.2f bilhões\n", pib_carta_2);
    printf("| Densidade Populacional: %.2f hab/km²\n", densidade_carta_2);
    printf("| PIB per capita: R$ %.2f\n", pib_capita_carta_2);
    printf("| Super poder: %.2f\n", super_poder_carta_2);
    printf("+--------------------------------------+\n");

    // Comparação e vencedor
    printf("%s\n| Atributo usado: População\n", estilo);
    printf("| Carta 1: %s - %lu habitantes\n", nome_cidade_1, qtd_populacao_1);
    printf("| Carta 2: %s - %lu habitantes\n", nome_cidade_2, qtd_populacao_2);

    if (qtd_populacao_1 > qtd_populacao_2) {
        printf("| Vencedor: %s\n", nome_cidade_1);
    } else if (qtd_populacao_1 < qtd_populacao_2) {
        printf("| Vencedor: %s\n", nome_cidade_2);
    } else {
        printf("| Empate! Ambas têm a mesma população.\n");
    }
    printf("%s", estilo);

    return 0;
}