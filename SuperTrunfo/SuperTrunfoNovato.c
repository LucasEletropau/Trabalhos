#include <stdio.h>

int main() {
    /*
    Aluno: Lucas Gabriel Oio Domiciano 
    Desafio de código: Super Trunfo - Nível Novato.
    */

    //**Declaração de variáveis**
    char estado_1, estado_2;
    char codigo_carta_1[5], codigo_carta_2[5];
    char nome_cidade_1[18], nome_cidade_2[18];
    int qtd_populacao_1, qtd_populacao_2;
    float area_km_1, area_km_2;
    float pib_carta_1, pib_carta_2;
    int qtd_pontos_turisticos_1, qtd_pontos_turisticos_2;
    const char validacao[30] = "Cadastro com sucesso!";

    //**Variaveis de estilo**
    const char estilo [50] = "\n+--------------------------------------+\n" ;

    // **Entrada do usuário**

    // Carta 1:
    
    printf("%s", estilo);
    
    printf("\nCarta 1:");
    
    printf("\nDigite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado_1);

    printf("Digite o código da primeira carta: ");
    scanf("%s", codigo_carta_1);

    printf("Digite o nome da primeira cidade: ");
    scanf(" %18[^\n]", nome_cidade_1);

    printf("Digite a quantidade da população da primeira carta: ");
    scanf("%d", &qtd_populacao_1);

    printf("Digite a área em km2 da primeira carta: ");
    scanf("%f", &area_km_1);

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib_carta_1);

    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &qtd_pontos_turisticos_1);

    printf("\n%s\n", validacao);
    
    // Carta 2:
    printf("%s", estilo);

    printf("\nCarta 2:\n");

    printf("\nDigite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado_2);

    printf("Digite o código da segunda carta: ");
    scanf("%s", codigo_carta_2);

    printf("Digite o nome da segunda cidade: ");
    scanf(" %18[^\n]", nome_cidade_2);

    printf("Digite a quantidade da população da segunda carta: ");
    scanf("%d", &qtd_populacao_2);

    printf("Digite a área em km2 da segunda carta: ");
    scanf("%f", &area_km_2);

    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib_carta_2);

    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &qtd_pontos_turisticos_2);

    printf("\n%s\n", validacao);

    // Saída para o usuário, cartas cadastradas

    // Primeira carta:
    
    printf("%s", estilo);
    printf("| Carta 1:                              \n");
    printf("| Estado: %c                            \n", estado_1);
    printf("| Código: %s                            \n", codigo_carta_1);
    printf("| Nome da cidade: %s                    \n", nome_cidade_1);
    printf("| População: %d                         \n", qtd_populacao_1);
    printf("| Área: %.2f km2                        \n", area_km_1);
    printf("| PIB: R$ %.2f bilhões                  \n", pib_carta_1);
    printf("| Pontos turísticos: %d                 \n", qtd_pontos_turisticos_1);
    printf("%s", estilo);
    

    // Segunda carta:
    printf("%s", estilo);
    printf("| Carta 2:                             \n");
    printf("| Estado: %c                           \n", estado_2);
    printf("| Código: %s                           \n", codigo_carta_2);
    printf("| Nome da cidade: %s                   \n", nome_cidade_2);
    printf("| População: %d                        \n", qtd_populacao_2);
    printf("| Área: %.2f km2                       \n", area_km_2);
    printf("| PIB: R$ %.2f bilhões                 \n", pib_carta_2);
    printf("| Pontos turísticos: %d                \n", qtd_pontos_turisticos_2);
    printf("%s", estilo);
    
    return 0;
}