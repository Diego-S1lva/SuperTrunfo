#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // declaração de variáveis
    int opcaoComparar;
    int opcaoComparar2;
    char atributoComparacao1[100];
    char atributoComparacao2[100];

    // declaração de variáveis CARTA 1
    char estado_carta1;
    char codigocarta_carta1[4];
    char nomePais_carta1[100];
    unsigned long int populacao_carta1;
    double area_carta1;
    double pib_carta1;
    int quantidadePontosTuristicos_carta1;
    float densidadePopulacional_carta1;
    float pibPerCapita_carta1;
    double superPoder_carta1;
    double resultado_carta1;
    double resultado2_carta1;
    double resultadoFinal_carta1;

    // declaração de variáveis CARTA 2
    char estado_carta2;
    char codigocarta_carta2[4];
    char nomePais_carta2[100];
    unsigned long int populacao_carta2;
    double area_carta2;
    double pib_carta2;
    int quantidadePontosTuristicos_carta2;
    float densidadePopulacional_carta2;
    float pibPerCapita_carta2;
    double superPoder_carta2;
    double resultado_carta2;
    double resultado2_carta2;
    double resultadoFinal_carta2;

    // entrada dos dados CARTA 1
    printf("DIGITE OS DADOS DA CARTA 1: \n");
    printf("Digite o estado da carta(O estado vai de A a H)\n");
    scanf("%c", &estado_carta1);
    printf("Digite o codigo da carta: (O codigo deve conter o estado da carta e um numero de 01 a 04)\n");
    scanf("%3s", codigocarta_carta1);
    __fpurge(stdin);
    printf("Digite o nome do país: \n");
    scanf("%100[^\n]", nomePais_carta1);
    printf("Digite o número de habitantes: \n");
    scanf("%lu", &populacao_carta1);
    printf("Digite a área do país em km²: \n");
    scanf("%lf", &area_carta1);
    printf("Digite o pib do país: (Digite os zeros antes da vírgula) \n");
    scanf("%lf", &pib_carta1);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &quantidadePontosTuristicos_carta1);
    __fpurge(stdin);

    // entrada de dados CARTA 2
    printf("DIGITE OS DADOS DA CARTA 2: \n");
    printf("Digite o estado da carta(O estado vai de A a H)\n");
    scanf("%c", &estado_carta2);
    printf("Digite o codigo da carta: (O codigo deve conter o estado da carta e um numero de 01 a 04)\n");
    scanf("%3s", codigocarta_carta2);
    __fpurge(stdin);
    printf("Digite o nome do País: \n");
    scanf("%100[^\n]", nomePais_carta2);
    printf("Digite o número de habitantes: \n");
    scanf("%lu", &populacao_carta2);
    printf("Digite a área do país em km²: \n");
    scanf("%lf", &area_carta2);
    printf("Digite o pib do país: (Digite os zeros antes da vírgula)\n");
    scanf("%lf", &pib_carta2);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &quantidadePontosTuristicos_carta2);

    // calculo densidade populacional
    densidadePopulacional_carta1 = populacao_carta1 / area_carta1;
    densidadePopulacional_carta2 = populacao_carta2 / area_carta2;

    // calculo PIB per Capita
    pibPerCapita_carta1 = (float)pib_carta1 / populacao_carta1;
    pibPerCapita_carta2 = (float)pib_carta2 / populacao_carta2;

    // saída dos dados CARTA 1
    printf("CARTA 1:\n");
    printf("Estado: %c \n", estado_carta1);
    printf("Código: %s \n", codigocarta_carta1);
    printf("Nome do país: %s \n", nomePais_carta1);
    printf("População: %lu \n", populacao_carta1);
    printf("Área: %.2f km² \n", area_carta1);
    printf("Pib: %.2f bilhões de reais\n", pib_carta1);
    printf("Número de pontos turísticos: %d \n", quantidadePontosTuristicos_carta1);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional_carta1);
    printf("PIB per Capita: %.2f \n", pibPerCapita_carta1);

    // saída dos dados CARTA 2
    printf("CARTA 2:\n");
    printf("Estado: %c \n", estado_carta2);
    printf("Código: %s \n", codigocarta_carta2);
    printf("Nome do país: %s \n", nomePais_carta2);
    printf("População: %lu \n", populacao_carta2);
    printf("Área: %.2f km² \n", area_carta2);
    printf("Pib: %.2f bilhões de reais\n", pib_carta2);
    printf("Número de pontos turísticos: %d \n", quantidadePontosTuristicos_carta2);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional_carta2);
    printf("PIB per Capita: %.2f \n", pibPerCapita_carta2);

    // calculo super poder
    superPoder_carta1 = (double)populacao_carta1 + area_carta1 + pib_carta1 + quantidadePontosTuristicos_carta1 + pibPerCapita_carta1 + (1 / densidadePopulacional_carta1);
    superPoder_carta2 = (double)populacao_carta2 + area_carta2 + pib_carta2 + quantidadePontosTuristicos_carta2 + pibPerCapita_carta2 + (1 / densidadePopulacional_carta2);

    // Menu para escolher os atributos
    printf("------------------------------------------\n");
    printf("COMPARAÇÃO\n");
    printf("Qual o primeiro atributo que você deseja comparar?\n");
    printf("[1] População\n");
    printf("[2] Área\n");
    printf("[3] Pib\n");
    printf("[4] Quantidade de Pontos turísticos\n");
    printf("[5] Densidade Populacional\n");
    printf("[6] Pib per Capita\n");
    printf("[7] Super Poder\n");
    printf("-----------------------------------------------\n");
    __fpurge(stdin);
    scanf("%d", &opcaoComparar);
    switch (opcaoComparar)
    {
    case 1:
        resultado_carta1 = populacao_carta1;
        resultado_carta2 = populacao_carta2;
        strcpy(atributoComparacao1, "População");
        break;
    case 2:
        resultado_carta1 = area_carta1;
        resultado_carta2 = area_carta2;
        strcpy(atributoComparacao1, "Área");
        break;
    case 3:
        resultado_carta1 = pib_carta1;
        resultado_carta2 = pib_carta2;
        strcpy(atributoComparacao1, "PIB");
        break;
    case 4:
        resultado_carta1 = quantidadePontosTuristicos_carta1;
        resultado_carta2 = quantidadePontosTuristicos_carta2;
        strcpy(atributoComparacao1, "Quanditda de Pontos Turísticos");
        break;
    case 5:
        resultado_carta1 = densidadePopulacional_carta1;
        resultado_carta2 = densidadePopulacional_carta2;
        //lógica da densidade
        double max_densidade = 1000.0;
        resultado_carta1 = max_densidade - densidadePopulacional_carta1;
        resultado_carta2 = max_densidade - densidadePopulacional_carta2;
        strcpy(atributoComparacao1, "Densidade Populacional");
        break;
    case 6:
        resultado_carta1 = pibPerCapita_carta1;
        resultado_carta2 = pibPerCapita_carta2;
        strcpy(atributoComparacao1, "PIB Per Capita");
        break;
    case 7:
        resultado_carta1 = superPoder_carta1;
        resultado_carta2 = superPoder_carta2;
        strcpy(atributoComparacao1, "Super Poder");
        break;
    default:
        printf("Por favor digite um número/opção válida\n");
        break;
    }

    switch (opcaoComparar)
    {
    case 1:
        printf("------------------------------------------\n");
        printf("COMPARAÇÃO\n");
        printf("Qual o segundo atributo que você deseja comparar?\n");
        printf("[2] Área\n");
        printf("[3] Pib\n");
        printf("[4] Quantidade de Pontos turísticos\n");
        printf("[5] Densidade Populacional\n");
        printf("[6] Pib per Capita\n");
        printf("[7] Super Poder\n");
        printf("-----------------------------------------------\n");
        __fpurge(stdin);
        scanf("%d", &opcaoComparar2);
        break;
    case 2:
        printf("------------------------------------------\n");
        printf("COMPARAÇÃO\n");
        printf("Qual o segundo atributo que você deseja comparar?\n");
        printf("[1] População\n");
        printf("[3] Pib\n");
        printf("[4] Quantidade de Pontos turísticos\n");
        printf("[5] Densidade Populacional\n");
        printf("[6] Pib per Capita\n");
        printf("[7] Super Poder\n");
        printf("-----------------------------------------------\n");
        __fpurge(stdin);
        scanf("%d", &opcaoComparar2);
        break;
    case 3:
        printf("------------------------------------------\n");
        printf("COMPARAÇÃO\n");
        printf("Qual o segundo atributo que você deseja comparar?\n");
        printf("[1] População\n");
        printf("[2] Área\n");
        printf("[4] Quantidade de Pontos turísticos\n");
        printf("[5] Densidade Populacional\n");
        printf("[6] Pib per Capita\n");
        printf("[7] Super Poder\n");
        printf("-----------------------------------------------\n");
        __fpurge(stdin);
        scanf("%d", &opcaoComparar2);
        break;
    case 4:
        printf("------------------------------------------\n");
        printf("COMPARAÇÃO\n");
        printf("Qual o segundo atributo que você deseja comparar?\n");
        printf("[1] População\n");
        printf("[2] Área\n");
        printf("[3] Pib\n");
        printf("[5] Densidade Populacional\n");
        printf("[6] Pib per Capita\n");
        printf("[7] Super Poder\n");
        printf("-----------------------------------------------\n");
        __fpurge(stdin);
        scanf("%d", &opcaoComparar2);
        break;
    case 5:
        printf("------------------------------------------\n");
        printf("COMPARAÇÃO\n");
        printf("Qual o segundo atributo que você deseja comparar?\n");
        printf("[1] População\n");
        printf("[2] Área\n");
        printf("[3] Pib\n");
        printf("[4] Quantidade de Pontos turísticos\n");
        printf("[6] Pib per Capita\n");
        printf("[7] Super Poder\n");
        printf("-----------------------------------------------\n");
        __fpurge(stdin);
        scanf("%d", &opcaoComparar2);
        break;
    case 6:
        printf("------------------------------------------\n");
        printf("COMPARAÇÃO\n");
        printf("Qual o segundo atributo que você deseja comparar?\n");
        printf("[1] População\n");
        printf("[2] Área\n");
        printf("[3] Pib\n");
        printf("[4] Quantidade de Pontos turísticos\n");
        printf("[5] Densidade Populacional\n");
        printf("[7] Super Poder\n");
        printf("-----------------------------------------------\n");
        __fpurge(stdin);
        scanf("%d", &opcaoComparar2);
        break;
    case 7:
        printf("------------------------------------------\n");
        printf("COMPARAÇÃO\n");
        printf("Qual o segundo atributo que você deseja comparar?\n");
        printf("[1] População\n");
        printf("[2] Área\n");
        printf("[3] Pib\n");
        printf("[4] Quantidade de Pontos turísticos\n");
        printf("[5] Densidade Populacional\n");
        printf("[6] Pib per Capita\n");
        printf("-----------------------------------------------\n");
        __fpurge(stdin);
        scanf("%d", &opcaoComparar2);
        break;
    default:
        printf("Escolha uma opção válida");
        break;
    }

    switch (opcaoComparar2)
    {
    case 1:
        resultado2_carta1 = populacao_carta1;
        resultado2_carta2 = populacao_carta2;
        strcpy(atributoComparacao2, "População");
        break;
    case 2:
        resultado2_carta1 = area_carta1;
        resultado2_carta2 = area_carta2;
        strcpy(atributoComparacao2, "Área");
        break;
    case 3:
        resultado2_carta1 = pib_carta1;
        resultado2_carta2 = pib_carta2;
        strcpy(atributoComparacao2, "PIB");
        break;
    case 4:
        resultado2_carta1 = quantidadePontosTuristicos_carta1;
        resultado2_carta2 = quantidadePontosTuristicos_carta2;
        strcpy(atributoComparacao2, "Quantidade de Pontos Turísticos");
        break;
    case 5:
        resultado2_carta1 = densidadePopulacional_carta1;
        resultado2_carta2 = densidadePopulacional_carta2;
        //lógica da densidade
        double max_densidade = 1000.0;
        resultado2_carta1 = max_densidade - densidadePopulacional_carta1;
        resultado2_carta2 = max_densidade - densidadePopulacional_carta2;
        strcpy(atributoComparacao2, "Densidade Populacional");
        break;
    case 6:
        resultado2_carta1 = pibPerCapita_carta1;
        resultado2_carta2 = pibPerCapita_carta2;
        strcpy(atributoComparacao2, "PIB Per Capita");
        break;
    case 7:
        resultado2_carta1 = superPoder_carta1;
        resultado2_carta2 = superPoder_carta2;
        strcpy(atributoComparacao2, "Super Poder");
        break;
    default:
        printf("Por favor digite um número/opção válida\n");
        break;
    }

    printf("---------------------------------------\n");
    printf("RESULTADO:\n");
    printf("---------------------------------------\n");
    resultadoFinal_carta1 = (double)resultado_carta1 + resultado2_carta1;
    resultadoFinal_carta2 = (double)resultado_carta2 + resultado2_carta2;

    //dados do resultado
    printf("%s VS %s\n", nomePais_carta1, nomePais_carta2);
    printf("Primeiro atributo de comparação: %s\n", atributoComparacao1);
    printf("Segundo atributo de comparação: %s\n", atributoComparacao2);
    printf("Valor do(a) %s da carta1: %.2f\n", atributoComparacao1, resultado_carta1);
    printf("Valor do(a) %s da carta1: %.2f\n", atributoComparacao2, resultado2_carta1);
    printf("Valor do(a) %s da carta2: %.2f\n", atributoComparacao1, resultado_carta2);
    printf("Valor do(a) %s da carta2: %.2f\n", atributoComparacao2, resultado2_carta2);
    printf("Resultado da carta 1: %.2f\n", resultadoFinal_carta1);
    printf("Resultado da carta 2: %.2f\n", resultadoFinal_carta2);

    //verificar quem venceu, perdeu ou empatou
    printf("Resultado: %s\n", (resultadoFinal_carta1 > resultadoFinal_carta2) ? "A carta 1 venceu!" : (resultadoFinal_carta1 < resultadoFinal_carta2) ? "A carta 2 venceu!" : "Empate!");


    return 0;
}