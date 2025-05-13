#include <stdio.h>

    /*
        Aluno: Lucas Gabriel Oio Domiciano 
        Desafio de código: Super Trunfo Lógica - Nível Mestre.
    */

    // **Declaração das variáveis para cadastro e exibição**
    char nome_pais_1[18], nome_pais_2[18]; // Nome dos países (até 17 caracteres)
    char codigo_carta_1[5], codigo_carta_2[5]; // Código das cartas (até 4 caracteres)
    unsigned long int qtd_populacao_1, qtd_populacao_2; // População dos países
    float area_km_1, area_km_2; // Área em km²
    float pib_carta_1, pib_carta_2; // PIB em bilhões
    int qtd_pontos_turisticos_1, qtd_pontos_turisticos_2; // Pontos turísticos

    // **Declaração de variáveis para cálculos**
    float densidade_carta_1, densidade_carta_2; // Densidade populacional (hab/km²)
    float pib_capita_carta_1, pib_capita_carta_2; // PIB per capita (PIB/população)
    float super_poder_carta_1, super_poder_carta_2; // Super poder da carta
    const float casting_bilhao = 1000000000.0; // Conversão de PIB de bilhões para reais

    // **Declaração de variáveis para comparação de dois atributos**
    float total_carta_1 = 0.0f, total_carta_2 = 0.0f; // Soma dos valores ao comparar dois atributos
    char *vencedor_rodada; // Armazena quem vence a rodada final

    // **Declaração de variáveis para o menu e escolhas**
    int selecao;            // (1) = comparar 1 atributo, (2) = comparar 2 atributos
    int batalha_1, batalha_2; // Armazena a escolha de atributos
    int conversao_calculo_menu; 
    char *resultado; 
    int temp; // Usado para trocar valores caso batalha_2 < batalha_1

    // **Declaração de variáveis de estilo e mensagens**
    const char estilo[50] = "\n+--------------------------------------+\n";

    // **Função principal**
    int main()
    {
        // **Cadastro da Carta 1**
        printf("%s", estilo);
        printf("Carta 1:\n");

        printf("\nDigite o nome do país: ");
        scanf(" %17[^\n]", nome_pais_1);

        printf("Digite o código da primeira carta: ");
        scanf(" %4s", codigo_carta_1);
        
        printf("Digite a quantidade da população da primeira carta: ");
        scanf("%lu", &qtd_populacao_1);

        printf("Digite a área em km² da primeira carta: ");
        scanf("%f", &area_km_1);

        printf("Digite o PIB da primeira carta (em bilhões): ");
        scanf("%f", &pib_carta_1);

        printf("Digite o número de pontos turísticos da primeira carta: ");
        scanf("%d", &qtd_pontos_turisticos_1);

        printf("\nCadastro com sucesso!\n");

        // **Cadastro da Carta 2**
        printf("%s", estilo);
        printf("Carta 2:\n");

        printf("\nDigite o nome do país: ");
        scanf(" %17[^\n]", nome_pais_2);

        printf("Digite o código da segunda carta: ");
        scanf(" %4s", codigo_carta_2);
        
        printf("Digite a quantidade da população da segunda carta: ");
        scanf("%lu", &qtd_populacao_2);

        printf("Digite a área em km² da segunda carta: ");
        scanf("%f", &area_km_2);

        printf("Digite o PIB da segunda carta (em bilhões): ");
        scanf("%f", &pib_carta_2);

        printf("Digite o número de pontos turísticos da segunda carta: ");
        scanf("%d", &qtd_pontos_turisticos_2);

        printf("\nCadastro com sucesso!\n");

        // **Cálculo da densidade populacional**
        densidade_carta_1 = qtd_populacao_1 / area_km_1;
        densidade_carta_2 = qtd_populacao_2 / area_km_2;

        // **Cálculo do PIB per capita**
        pib_capita_carta_1 = (pib_carta_1 * casting_bilhao) / qtd_populacao_1;
        pib_capita_carta_2 = (pib_carta_2 * casting_bilhao) / qtd_populacao_2;

        // **Cálculo do super poder (apenas exibição)**
        super_poder_carta_1 = ((float)qtd_populacao_1 + area_km_1 + pib_carta_1
                            + (float)qtd_pontos_turisticos_1 + pib_capita_carta_1)
                            - densidade_carta_1;
        super_poder_carta_2 = ((float)qtd_populacao_2 + area_km_2 + pib_carta_2
                            + (float)qtd_pontos_turisticos_2 + pib_capita_carta_2)
                            - densidade_carta_2;

        // **Exibição dos dados da Carta 1**
        printf("%s", estilo);
        printf("| Carta 1:                             \n");
        printf("| País: %s                             \n", nome_pais_1);
        printf("| Código: %s                           \n", codigo_carta_1);
        printf("| População: %lu                       \n", qtd_populacao_1);
        printf("| Área: %.2f km²                       \n", area_km_1);
        printf("| PIB: R$ %.2f bilhões                  \n", pib_carta_1);
        printf("| Pontos turísticos: %d                 \n", qtd_pontos_turisticos_1);
        printf("| Densidade Populacional: %.2f hab/km²  \n", densidade_carta_1);
        printf("| PIB per capita: R$ %.2f               \n", pib_capita_carta_1);
        printf("| Super poder: %.2f                     \n", super_poder_carta_1);
        printf("%s", estilo);

        // **Exibição dos dados da Carta 2**
        printf("%s", estilo);
        printf("| Carta 2:                             \n");
        printf("| País: %s                             \n", nome_pais_2);
        printf("| Código: %s                           \n", codigo_carta_2);
        printf("| População: %lu                       \n", qtd_populacao_2);
        printf("| Área: %.2f km²                       \n", area_km_2);
        printf("| PIB: R$ %.2f bilhões                  \n", pib_carta_2);
        printf("| Pontos turísticos: %d                 \n", qtd_pontos_turisticos_2);
        printf("| Densidade Populacional: %.2f hab/km²  \n", densidade_carta_2);
        printf("| PIB per capita: R$ %.2f               \n", pib_capita_carta_2);
        printf("| Super poder: %.2f                     \n", super_poder_carta_2);
        printf("%s", estilo);

        // **Escolha do número de atributos para comparar**
        printf("\nVocê deseja comparar (1) ou (2) atributos : ");
        scanf("%d", &selecao);

        // **Primeiro menu de atributos (1 a 5)**
        printf("%s", estilo);
        printf("\nEscolha os atributos para comparar:");
        printf("\n(1) População");
        printf("\n(2) Área");
        printf("\n(3) PIB");
        printf("\n(4) Pontos turísticos");
        printf("\n(5) Densidade populacional\n");
        printf("%s", estilo);

        printf("Digite a opção : ");
        scanf("%d", &batalha_1);

        // **Se for comparar apenas 1 atributo**
        if (selecao == 1) {
            conversao_calculo_menu = 100 + batalha_1; // ex: 101, 102...
        }
        // **Se for comparar 2 atributos**
        else if (selecao == 2) {
            printf("\nAtributo escolhido primeiro: %d\n", batalha_1);
            printf("%s", estilo);
            printf("\nEscolha o segundo atributo (diferente do primeiro): \n");

            // Menu dinâmico (retiramos a opção escolhida)
            switch (batalha_1) {
                case 1:
                    printf("(2) Área\n(3) PIB\n(4) Pontos turísticos\n(5) Densidade populacional\n");
                    break;
                case 2:
                    printf("(1) População\n(3) PIB\n(4) Pontos turísticos\n(5) Densidade populacional\n");
                    break;
                case 3:
                    printf("(1) População\n(2) Área\n(4) Pontos turísticos\n(5) Densidade populacional\n");
                    break;
                case 4:
                    printf("(1) População\n(2) Área\n(3) PIB\n(5) Densidade populacional\n");
                    break;
                case 5:
                    printf("(1) População\n(2) Área\n(3) PIB\n(4) Pontos turísticos\n");
                    break;
                default:
                    // Se o primeiro atributo estiver fora do range, cairá no default do final
                    break;
            }

            printf("\nDigite a segunda opção: ");
            scanf("%d", &batalha_2);

            // Garante batalha_1 < batalha_2 para formar 12, 13, etc.
            if (batalha_2 < batalha_1) {
                temp = batalha_1;
                batalha_1 = batalha_2;
                batalha_2 = temp;
            }

            conversao_calculo_menu = batalha_1 * 10 + batalha_2;
            printf("%s", estilo);
        }

        // **SWITCH principal de comparação**
        switch (conversao_calculo_menu) {

            // (População e Área) -> 12
            case 12:
                printf("\n| Atributos usados: (População e Área)\n");

                // População
                printf("| Carta 1: %-20s %lu habitantes\n", nome_pais_1, qtd_populacao_1);
                printf("| Carta 2: %-20s %lu habitantes\n", nome_pais_2, qtd_populacao_2);
                resultado = (qtd_populacao_1 > qtd_populacao_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (População): %s\n", resultado);

                printf("%s", estilo);

                // Área
                printf("| Carta 1: %-20s %.2f km²\n", nome_pais_1, area_km_1);
                printf("| Carta 2: %-20s %.2f km²\n", nome_pais_2, area_km_2);
                resultado = (area_km_1 > area_km_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Área): %s\n", resultado);

                // Soma final
                total_carta_1 = (float)qtd_populacao_1 + area_km_1;
                total_carta_2 = (float)qtd_populacao_2 + area_km_2;
                break;

            // (População e PIB) -> 13
            case 13:
                printf("\n| Atributos usados: (População e PIB)\n");

                // População
                printf("| Carta 1: %-20s %lu habitantes\n", nome_pais_1, qtd_populacao_1);
                printf("| Carta 2: %-20s %lu habitantes\n", nome_pais_2, qtd_populacao_2);
                resultado = (qtd_populacao_1 > qtd_populacao_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (População): %s\n", resultado);

                printf("%s", estilo);

                // PIB
                printf("| Carta 1: %-20s R$ %.2f bilhões\n", nome_pais_1, pib_carta_1);
                printf("| Carta 2: %-20s R$ %.2f bilhões\n", nome_pais_2, pib_carta_2);
                resultado = (pib_carta_1 > pib_carta_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (PIB): %s\n", resultado);

                total_carta_1 = (float)qtd_populacao_1 + pib_carta_1;
                total_carta_2 = (float)qtd_populacao_2 + pib_carta_2;
                break;

            // (População e Pontos turísticos) -> 14
            case 14:
                printf("\n| Atributos usados: (População e Pontos turísticos)\n");

                // População
                printf("| Carta 1: %-20s %lu habitantes\n", nome_pais_1, qtd_populacao_1);
                printf("| Carta 2: %-20s %lu habitantes\n", nome_pais_2, qtd_populacao_2);
                resultado = (qtd_populacao_1 > qtd_populacao_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (População): %s\n", resultado);

                printf("%s", estilo);

                // Pontos turísticos
                printf("| Carta 1: %-20s %d pontos turísticos\n", nome_pais_1, qtd_pontos_turisticos_1);
                printf("| Carta 2: %-20s %d pontos turísticos\n", nome_pais_2, qtd_pontos_turisticos_2);
                resultado = (qtd_pontos_turisticos_1 > qtd_pontos_turisticos_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Pontos turísticos): %s\n", resultado);

                total_carta_1 = (float)qtd_populacao_1 + (float)qtd_pontos_turisticos_1;
                total_carta_2 = (float)qtd_populacao_2 + (float)qtd_pontos_turisticos_2;
                break;

            // (População e Densidade populacional) -> 15
            case 15:
                printf("\n| Atributos usados: (População e Densidade populacional)\n");

                // População
                printf("| Carta 1: %-20s %lu habitantes\n", nome_pais_1, qtd_populacao_1);
                printf("| Carta 2: %-20s %lu habitantes\n", nome_pais_2, qtd_populacao_2);
                resultado = (qtd_populacao_1 > qtd_populacao_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (População): %s\n", resultado);

                printf("%s", estilo);

                // Densidade (menor vence)
                printf("| Carta 1: %-20s %.2f hab/km²\n", nome_pais_1, densidade_carta_1);
                printf("| Carta 2: %-20s %.2f hab/km²\n", nome_pais_2, densidade_carta_2);
                resultado = (densidade_carta_1 < densidade_carta_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Densidade populacional): %s\n", resultado);

                total_carta_1 = (float)qtd_populacao_1 + densidade_carta_1;
                total_carta_2 = (float)qtd_populacao_2 + densidade_carta_2;
                break;

            // (Área e PIB) -> 23
            case 23:
                printf("\n| Atributos usados: (Área e PIB)\n");

                printf("| Carta 1: %-20s %.2f km²\n", nome_pais_1, area_km_1);
                printf("| Carta 2: %-20s %.2f km²\n", nome_pais_2, area_km_2);
                resultado = (area_km_1 > area_km_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Área): %s\n", resultado);

                printf("%s", estilo);

                printf("| Carta 1: %-20s R$ %.2f bilhões\n", nome_pais_1, pib_carta_1);
                printf("| Carta 2: %-20s R$ %.2f bilhões\n", nome_pais_2, pib_carta_2);
                resultado = (pib_carta_1 > pib_carta_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (PIB): %s\n", resultado);

                total_carta_1 = area_km_1 + pib_carta_1;
                total_carta_2 = area_km_2 + pib_carta_2;
                break;

            // (Área e Pontos turísticos) -> 24
            case 24:
                printf("\n| Atributos usados: (Área e Pontos turísticos)\n");

                printf("| Carta 1: %-20s %.2f km²\n", nome_pais_1, area_km_1);
                printf("| Carta 2: %-20s %.2f km²\n", nome_pais_2, area_km_2);
                resultado = (area_km_1 > area_km_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Área): %s\n", resultado);

                printf("%s", estilo);

                printf("| Carta 1: %-20s %d pontos turísticos\n", nome_pais_1, qtd_pontos_turisticos_1);
                printf("| Carta 2: %-20s %d pontos turísticos\n", nome_pais_2, qtd_pontos_turisticos_2);
                resultado = (qtd_pontos_turisticos_1 > qtd_pontos_turisticos_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Pontos turísticos): %s\n", resultado);

                total_carta_1 = area_km_1 + (float)qtd_pontos_turisticos_1;
                total_carta_2 = area_km_2 + (float)qtd_pontos_turisticos_2;
                break;

            // (Área e Densidade populacional) -> 25
            case 25:
                printf("\n| Atributos usados: (Área e Densidade populacional)\n");

                printf("| Carta 1: %-20s %.2f km²\n", nome_pais_1, area_km_1);
                printf("| Carta 2: %-20s %.2f km²\n", nome_pais_2, area_km_2);
                resultado = (area_km_1 > area_km_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Área): %s\n", resultado);

                printf("%s", estilo);

                printf("| Carta 1: %-20s %.2f hab/km²\n", nome_pais_1, densidade_carta_1);
                printf("| Carta 2: %-20s %.2f hab/km²\n", nome_pais_2, densidade_carta_2);
                resultado = (densidade_carta_1 < densidade_carta_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Densidade populacional): %s\n", resultado);

                total_carta_1 = area_km_1 + densidade_carta_1;
                total_carta_2 = area_km_2 + densidade_carta_2;
                break;

            // (PIB e Pontos turísticos) -> 34
            case 34:
                printf("\n| Atributos usados: (PIB e Pontos turísticos)\n");

                printf("| Carta 1: %-20s R$ %.2f bilhões\n", nome_pais_1, pib_carta_1);
                printf("| Carta 2: %-20s R$ %.2f bilhões\n", nome_pais_2, pib_carta_2);
                resultado = (pib_carta_1 > pib_carta_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (PIB): %s\n", resultado);

                printf("%s", estilo);

                printf("| Carta 1: %-20s %d pontos turísticos\n", nome_pais_1, qtd_pontos_turisticos_1);
                printf("| Carta 2: %-20s %d pontos turísticos\n", nome_pais_2, qtd_pontos_turisticos_2);
                resultado = (qtd_pontos_turisticos_1 > qtd_pontos_turisticos_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Pontos turísticos): %s\n", resultado);

                total_carta_1 = pib_carta_1 + (float)qtd_pontos_turisticos_1;
                total_carta_2 = pib_carta_2 + (float)qtd_pontos_turisticos_2;
                break;

            // (PIB e Densidade populacional) -> 35
            case 35:
                printf("\n| Atributos usados: (PIB e Densidade populacional)\n");

                printf("| Carta 1: %-20s R$ %.2f bilhões\n", nome_pais_1, pib_carta_1);
                printf("| Carta 2: %-20s R$ %.2f bilhões\n", nome_pais_2, pib_carta_2);
                resultado = (pib_carta_1 > pib_carta_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (PIB): %s\n", resultado);

                printf("%s", estilo);

                printf("| Carta 1: %-20s %.2f hab/km²\n", nome_pais_1, densidade_carta_1);
                printf("| Carta 2: %-20s %.2f hab/km²\n", nome_pais_2, densidade_carta_2);
                resultado = (densidade_carta_1 < densidade_carta_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Densidade populacional): %s\n", resultado);

                total_carta_1 = pib_carta_1 + densidade_carta_1;
                total_carta_2 = pib_carta_2 + densidade_carta_2;
                break;

            // (Pontos turísticos e Densidade populacional) -> 45
            case 45:
                printf("\n| Atributos usados: (Pontos turísticos e Densidade populacional)\n");

                printf("| Carta 1: %-20s %d pontos turísticos\n", nome_pais_1, qtd_pontos_turisticos_1);
                printf("| Carta 2: %-20s %d pontos turísticos\n", nome_pais_2, qtd_pontos_turisticos_2);
                resultado = (qtd_pontos_turisticos_1 > qtd_pontos_turisticos_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Pontos turísticos): %s\n", resultado);

                printf("%s", estilo);

                printf("| Carta 1: %-20s %.2f hab/km²\n", nome_pais_1, densidade_carta_1);
                printf("| Carta 2: %-20s %.2f hab/km²\n", nome_pais_2, densidade_carta_2);
                resultado = (densidade_carta_1 < densidade_carta_2) ? nome_pais_1 : nome_pais_2;
                printf("| Vencedor (Densidade populacional): %s\n", resultado);

                total_carta_1 = (float)qtd_pontos_turisticos_1 + densidade_carta_1;
                total_carta_2 = (float)qtd_pontos_turisticos_2 + densidade_carta_2;
                break;

            // (Somente 1 atributo) -> 101, 102, 103, 104, 105
            case 101: // População
                printf("%s", estilo);
                printf("\n| Atributo usado: (População)\n");
                printf("| Carta 1: %-20s %lu habitantes\n", nome_pais_1, qtd_populacao_1);
                printf("| Carta 2: %-20s %lu habitantes\n", nome_pais_2, qtd_populacao_2);
                if (qtd_populacao_1 > qtd_populacao_2)
                    printf("| Vencedor: %s\n", nome_pais_1);
                else if (qtd_populacao_1 < qtd_populacao_2)
                    printf("| Vencedor: %s\n", nome_pais_2);
                else
                    printf("| Empate!\n");
                break;

            case 102: // Área
                printf("%s", estilo);
                printf("\n| Atributo usado: (Área)");
                    printf("| Carta 1: %-20s %.2f km²\n", nome_pais_1, area_km_1);
                printf("| Carta 2: %-20s %.2f km²\n", nome_pais_2, area_km_2);
                if (area_km_1 > area_km_2)
                    printf("| Vencedor: %s\n", nome_pais_1);
                else if (area_km_1 < area_km_2)
                    printf("| Vencedor: %s\n", nome_pais_2);
                else
                    printf("| Empate!\n");
                break;

            case 103: // PIB
                printf("%s", estilo);
                printf("\n| Atributo usado: (PIB)\n");
                printf("| Carta 1: %-20s R$ %.2f bilhões\n", nome_pais_1, pib_carta_1);
                printf("| Carta 2: %-20s R$ %.2f bilhões\n", nome_pais_2, pib_carta_2);
                if (pib_carta_1 > pib_carta_2)
                    printf("| Vencedor: %s\n", nome_pais_1);
                else if (pib_carta_1 < pib_carta_2)
                    printf("| Vencedor: %s\n", nome_pais_2);
                else
                    printf("| Empate!\n");
                break;

            case 104: // Pontos turísticos
                printf("%s", estilo);
                printf("\n| Atributo usado: (Pontos turísticos)\n");
                printf("| Carta 1: %-20s %d pontos turísticos\n", nome_pais_1, qtd_pontos_turisticos_1);
                printf("| Carta 2: %-20s %d pontos turísticos\n", nome_pais_2, qtd_pontos_turisticos_2);
                if (qtd_pontos_turisticos_1 > qtd_pontos_turisticos_2)
                    printf("| Vencedor: %s\n", nome_pais_1);
                else if (qtd_pontos_turisticos_1 < qtd_pontos_turisticos_2)
                    printf("| Vencedor: %s\n", nome_pais_2);
                else
                    printf("| Empate!\n");
                break;

            case 105: // Densidade (menor vence)
                printf("%s", estilo);
                printf("\n| Atributo usado: (Densidade populacional)\n");
                printf("| Carta 1: %-20s %.2f hab/km²\n", nome_pais_1, densidade_carta_1);
                printf("| Carta 2: %-20s %.2f hab/km²\n", nome_pais_2, densidade_carta_2);
                if (densidade_carta_1 < densidade_carta_2)
                    printf("| Vencedor: %s\n", nome_pais_1);
                else if (densidade_carta_1 > densidade_carta_2)
                    printf("| Vencedor: %s\n", nome_pais_2);
                else
                    printf("| Empate!\n");
                break;

            // Se o usuário escolheu algo inválido (ex.: duplicado)
            default:
                printf("Por favor tente novamente, você escolheu dois atributos iguais ou fora do range.\n");
                break;
        }

        // **Exibe resultado final apenas se comparar 2 atributos**
        printf("%s", estilo);
        if (selecao == 2) {
            if (total_carta_1 == total_carta_2) {
                printf("| Empate ! \n");
            } else {
                vencedor_rodada = (total_carta_1 > total_carta_2) ? "Carta 1" : "Carta 2";
                printf("Total %-20s : %.2f\n", nome_pais_1, total_carta_1);
                printf("Total %-20s : %.2f\n", nome_pais_2, total_carta_2);
                printf("%s", estilo);
                printf("| Rodada vencedora é : %s \n", vencedor_rodada);
            }
        }

        return 0;
    }