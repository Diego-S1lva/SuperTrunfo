#include <stdio.h>
#include <stdlib.h>


int main(){

    //declaração de variáveis CARTA 1
    char estado_carta1;
    char codigocarta_carta1[4];
    char nomecidade_carta1[100];
    unsigned long int populacao_carta1;
    double area_carta1;
    double pib_carta1;
    int quantidadePontosTuristicos_carta1;
    float densidadePopulacional_carta1;
    float pibPerCapita_carta1;
    double superPoder_carta1;

    //declaração de variáveis CARTA 2
    char estado_carta2;
    char codigocarta_carta2[4];
    char nomecidade_carta2[100];
    unsigned long int populacao_carta2;
    double area_carta2;
    double pib_carta2;
    int quantidadePontosTuristicos_carta2;
    float densidadePopulacional_carta2;
    float pibPerCapita_carta2;
    double superPoder_carta2;

    //entrada dos dados CARTA 1
    printf("DIGITE OS DADOS DA CARTA 1: \n");
    printf("Digite o estado da carta(O estado vai de A a H)\n");
    scanf("%c", &estado_carta1);
    printf("Digite o codigo da carta: (O codigo deve conter o estado da carta e um numero de 01 a 04)\n");
    scanf("%3s", codigocarta_carta1);
    __fpurge(stdin);
    printf("Digite o nome da cidade: \n");
    scanf("%100[^\n]", nomecidade_carta1);
    printf("Digite o número de habitantes: \n");
    scanf("%lu", &populacao_carta1);
    printf("Digite a área da cidade em km²: \n");
    scanf("%lf", &area_carta1);
    printf("Digite o pib da cidade: (Digite os zeros antes da vírgula) \n");
    scanf("%lf", &pib_carta1);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &quantidadePontosTuristicos_carta1);
    __fpurge(stdin);


    //entrada de dados CARTA 2
    printf("DIGITE OS DADOS DA CARTA 2: \n");
    printf("Digite o estado da carta(O estado vai de A a H)\n");
    scanf("%c", &estado_carta2);
    printf("Digite o codigo da carta: (O codigo deve conter o estado da carta e um numero de 01 a 04)\n");
    scanf("%3s", codigocarta_carta2);
    __fpurge(stdin);
    printf("Digite o nome da cidade: \n");
    scanf("%100[^\n]", nomecidade_carta2);
    printf("Digite o número de habitantes: \n");
    scanf("%lu", &populacao_carta2);
    printf("Digite a área da cidade em km²: \n");
    scanf("%lf", &area_carta2);
    printf("Digite o pib da cidade: (Digite os zeros antes da vírgula)\n");
    scanf("%lf", &pib_carta2);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &quantidadePontosTuristicos_carta2);

    //calculo densidade populacional
    densidadePopulacional_carta1 = populacao_carta1/area_carta1;
    densidadePopulacional_carta2 = populacao_carta2/area_carta2;

    //calculo PIB per Capita
    pibPerCapita_carta1 = (float)pib_carta1/populacao_carta1;
    pibPerCapita_carta2 = (float)pib_carta2/populacao_carta2;

    //saída dos dados CARTA 1
    printf("CARTA 1:\n");
    printf("Estado: %c \n", estado_carta1);
    printf("Código: %s \n" , codigocarta_carta1);
    printf("Nome da cidade: %s \n", nomecidade_carta1);
    printf("População: %lu \n", populacao_carta1);
    printf("Área: %.2f km² \n", area_carta1);
    printf("Pib: %.2f bilhões de reais\n", pib_carta1);
    printf("Número de pontos turísticos: %d \n", quantidadePontosTuristicos_carta1);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional_carta1);
    printf("PIB per Capita: %.2f \n", pibPerCapita_carta1);


    //saída dos dados CARTA 2
    printf("CARTA 2:\n");
    printf("Estado: %c \n", estado_carta2);
    printf("Código: %s \n" , codigocarta_carta2);
    printf("Nome da cidade: %s \n", nomecidade_carta2);
    printf("População: %lu \n", populacao_carta2);
    printf("Área: %.2f km² \n", area_carta2);
    printf("Pib: %.2f bilhões de reais\n", pib_carta2);
    printf("Número de pontos turísticos: %d \n", quantidadePontosTuristicos_carta2);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional_carta2);
    printf("PIB per Capita: %.2f \n", pibPerCapita_carta2);

    //calculo super poder
    superPoder_carta1 = (double) populacao_carta1+area_carta1+pib_carta1+quantidadePontosTuristicos_carta1+pibPerCapita_carta1+(1/densidadePopulacional_carta1);
    superPoder_carta2 = (double) populacao_carta2+area_carta2+pib_carta2+quantidadePontosTuristicos_carta2+pibPerCapita_carta2+(1/densidadePopulacional_carta2);
    //comparação de todos os dados das cartas
    printf("------------------------------------------\n");
    printf("COMPARAÇÃO\n");
    if (populacao_carta1 > populacao_carta2)
    {
        printf("Carta 1 venceu (1)\n");
    }else{
        printf("Carta 2 venceu (0)\n");
    }
    if (area_carta1 > area_carta2)
    {
        printf("Carta 1 venceu (1)\n");
    }else{
        printf("Carta 2 venceu (0)\n");
    }
    if (pib_carta1 > pib_carta2)
    {
        printf("Carta 1 venceu (1)\n");
    }else{
        printf("Carta 2 venceu (0)\n");
    }
    if (quantidadePontosTuristicos_carta1 > quantidadePontosTuristicos_carta2)
    {
        printf("Carta 1 venceu (1)\n");
    }else{
        printf("Carta 2 venceu (0)\n");
    }
    if (densidadePopulacional_carta1 > densidadePopulacional_carta2)
    {
        printf("Carta 2 venceu (0)\n");
    }else{
        printf("Carta 1 venceu (1)\n");
    }
    if (pibPerCapita_carta1 > pibPerCapita_carta2)
    {
        printf("Carta 1 venceu (1)\n");
    }else{
        printf("Carta 2 venceu (0)\n");
    }   
    if (superPoder_carta1 > superPoder_carta2)
    {
        printf("Carta 1 venceu (1)\n");
    }else{
        printf("Carta 2 venceu (0)\n");
    }

    //comparação população
    printf("----------------------------\n");
    printf("COMPARAÇÃO POPULAÇÃO:\n");
    if (populacao_carta1 > populacao_carta2)
    {
        printf("Carta 1 - %s : %lu\n", nomecidade_carta1, populacao_carta1);
        printf("Carta 2 - %s : %lu\n", nomecidade_carta2, populacao_carta2);
        printf("Carta 1 (%s) venceu!\n", nomecidade_carta1);
    }else{
        printf("Carta 1 - %s : %lu\n", nomecidade_carta1, populacao_carta1);
        printf("Carta 2 - %s : %lu\n", nomecidade_carta2, populacao_carta2);
        printf("Resultado: Carta 2 (%s) venceu!", nomecidade_carta2);
    }









    return 0;

}