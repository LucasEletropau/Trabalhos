#include <stdio.h>

int main() {
    /*
    Aluno: Lucas Gabriel Oio Domiciano 
    Desafio de código: Super Trunfo - Nível Mestre.
    */

    
   const int qtd_cartas = 2; // Quantidade de cartas no jogo
   int identificador_carta, comparador; // Variáveis para comparações
    
    // **Declaração das variáveis**
    char estado_1, estado_2; // Estados das cartas (A-H)
    char codigo_carta_1[5], codigo_carta_2[5]; // Códigos das cartas (até 4 caracteres)
    char nome_cidade_1[18], nome_cidade_2[18]; // Nomes das cidades (até 17 caracteres)
    unsigned long int qtd_populacao_1, qtd_populacao_2; // População dos países
    float area_km_1, area_km_2; // Área em km²
    float pib_carta_1, pib_carta_2; // PIB em bilhões de reais
    int qtd_pontos_turisticos_1, qtd_pontos_turisticos_2; // Pontos turísticos

    // **Variaveis para estilo**
    const char estilo [50] = "\n+--------------------------------------+\n" ;

    // **Variáveis para cálculos**
    float densidade_carta_1, densidade_carta_2; // Densidade populacional (hab/km²)
    float pib_capita_carta_1, pib_capita_carta_2; // PIB per capita (PIB/população)
    float super_poder_carta_1, super_poder_carta_2; // Super poder da carta

    const float casting_bilhao = 1000000000.0; // Conversão de PIB para unidades
    const char validacao[30] = "Cadastro com sucesso!"; // Mensagem de validação
    
    // Entrada do usuário

    // Carta 1:
    
    printf("%s", estilo) ;
    
    printf("\nCarta 1:\n");

    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado_1);

    printf("Digite o código da primeira carta: ");
    scanf(" %s", codigo_carta_1);

    printf("Digite o nome da primeira cidade: ");
    scanf(" %17[^\n]", nome_cidade_1);

    printf("Digite a quantidade da população da primeira carta: ");
    scanf("%ld", &qtd_populacao_1);

    printf("Digite a área em km2 da primeira carta: ");
    scanf("%f", &area_km_1);

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib_carta_1);

    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &qtd_pontos_turisticos_1);

    printf("%s\n", validacao);

    // Carta 2:
    
    printf("%s", estilo);
    printf("\nCarta 2:\n");

    printf("Digite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado_2);

    printf("Digite o código da segunda carta: ");
    scanf(" %s", codigo_carta_2);

    printf("Digite o nome da segunda cidade: ");
    scanf(" %17[^\n]", nome_cidade_2);

    printf("Digite a quantidade da população da segunda carta: ");
    scanf("%ld", &qtd_populacao_2);

    printf("Digite a área em km2 da segunda carta: ");
    scanf("%f", &area_km_2);

    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib_carta_2);

    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &qtd_pontos_turisticos_2);

    printf("%s\n", validacao);

    // Calculo para densidade populacional 
    densidade_carta_1 = qtd_populacao_1 / area_km_1 ; 
    densidade_carta_2 = qtd_populacao_2 / area_km_2 ; 
    
    //Calculos para PIB per capita 
    pib_capita_carta_1 = (pib_carta_1 * casting_bilhao) / qtd_populacao_1 ;
    pib_capita_carta_2 = (pib_carta_2 * casting_bilhao) / qtd_populacao_2 ;

    //Calculo para o Super poder 
    super_poder_carta_1 = ((float)qtd_populacao_1 + area_km_1 + pib_carta_1 + (float)qtd_pontos_turisticos_1 + pib_capita_carta_1) - densidade_carta_1;
    super_poder_carta_2 = ((float)qtd_populacao_2 + area_km_2 + pib_carta_2 + (float)qtd_pontos_turisticos_2 + pib_capita_carta_2) - densidade_carta_2;
 
    
    // Saída de dados
    
    // Primeira Carta : 
    
    // Estilo de linha para melhorar a visualização
    printf("%s",estilo);

    printf("| Carta 1:                              \n")  ;
    printf("| Estado: %c                            \n", estado_1);
    printf("| Código: %s                            \n", codigo_carta_1);
    printf("| Nome da cidade: %s                    \n", nome_cidade_1);
    printf("| População: %ld                         \n", qtd_populacao_1);
    printf("| Área: %.2f km2                        \n", area_km_1);
    printf("| PIB: R$ %.2f bilhões de reais         \n", pib_carta_1);
    printf("| Número de pontos turísticos: %d       \n", qtd_pontos_turisticos_1);
    printf("| Densidade Populacional: %.2f hab/km2  \n", densidade_carta_1);
    printf("| PIB per capita: R$ %.2f               \n", pib_capita_carta_1);
    
    printf("%s", estilo); 

    // Segunda carta:
    
    printf("%s", estilo); 

    printf("| Carta 2:                              \n");
    printf("| Estado: %c                            \n", estado_2);
    printf("| Código: %s                            \n", codigo_carta_2);
    printf("| Nome da cidade: %s                    \n", nome_cidade_2);
    printf("| População: %ld                         \n", qtd_populacao_2);
    printf("| Área: %.2f km2                        \n", area_km_2);
    printf("| PIB: R$ %.2f bilhões de reais         \n", pib_carta_2);
    printf("| Número de pontos turísticos: %d       \n", qtd_pontos_turisticos_2);
    printf("| Densidade Populacional: %.2f hab/km2  \n", densidade_carta_2);
    printf("| PIB per capita: R$ %.2f               \n", pib_capita_carta_2);
   
    printf("%s", estilo); 


    // Comparações das cartas
    printf("%s", estilo);
    printf("\n| Comparações das cartas:\n");

    identificador_carta = qtd_cartas; // Inicializa o identificador de carta

    comparador = qtd_populacao_1 > qtd_populacao_2; // Compara população
    identificador_carta = qtd_cartas - comparador;
    printf("| População: Carta %d venceu (%d)\n", identificador_carta, comparador);

    comparador = area_km_1 > area_km_2; // Compara área
    identificador_carta = qtd_cartas - comparador;
    printf("| Área: Carta %d venceu (%d)\n", identificador_carta, comparador);

    comparador = pib_carta_1 > pib_carta_2; // Compara PIB
    identificador_carta = qtd_cartas - comparador;
    printf("| PIB: Carta %d venceu (%d)\n", identificador_carta, comparador);

    comparador = qtd_pontos_turisticos_1 > qtd_pontos_turisticos_2; // Compara pontos turísticos
    identificador_carta = qtd_cartas - comparador;
    printf("| Pontos Turísticos: Carta %d venceu (%d)\n", identificador_carta, comparador);

    comparador = densidade_carta_1 < densidade_carta_2; // Compara densidade populacional
    identificador_carta = qtd_cartas - comparador;
    printf("| Densidade Populacional: Carta %d venceu (%d)\n", identificador_carta, comparador);

    comparador = pib_capita_carta_1 > pib_capita_carta_2; // Compara PIB per capita
    identificador_carta = qtd_cartas - comparador;
    printf("| PIB per Capita: Carta %d venceu (%d)\n", identificador_carta, comparador);

    comparador = super_poder_carta_1 > super_poder_carta_2; // Compara super poder
    identificador_carta = qtd_cartas - comparador;
    printf("| Super poder: Carta %d venceu (%d)\n", identificador_carta, comparador);
    printf("%s", estilo);
    
    return 0;
}