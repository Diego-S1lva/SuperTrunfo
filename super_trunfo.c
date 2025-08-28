#include <stdio.h>
#include <stdlib.h>


int main(){
    //declaração de variáveis
    int opcaoComparar;

    //declaração de variáveis CARTA 1
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

    //declaração de variáveis CARTA 2
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

    //entrada dos dados CARTA 1
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


    //entrada de dados CARTA 2
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
    printf("Nome do país: %s \n", nomePais_carta1);
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
    printf("Nome do país: %s \n", nomePais_carta2);
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
    printf("Qual atributo você desea comparar?\n");
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
        if (populacao_carta1 > populacao_carta2)
        {   
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: A População\n");
            printf("Valor carta 1: %lu\n", populacao_carta1);
            printf("Valor carta 2: %lu\n", populacao_carta2);
            printf("Carta 1 venceu\n");
        }else if (populacao_carta1 < populacao_carta2)
        {
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: A População\n");
            printf("Valor carta 1: %lu\n", populacao_carta1);
            printf("Valor carta 2: %lu\n", populacao_carta2);
            printf("Carta 2 venceu\n");
        }
        else{
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: A População\n");
            printf("Valor carta 1: %lu\n", populacao_carta1);
            printf("Valor carta 2: %lu\n", populacao_carta2);
            printf("Empate!\n");
            }   
    break;
    case 2:
        if (area_carta1 > area_carta2)
        {
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: A área\n");
            printf("Valor carta 1: %.2f\n",area_carta1);
            printf("Valor carta 2: %.2f\n", area_carta2);
            printf("Carta 1 venceu \n");
        }else if(area_carta1 < area_carta2){
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: A área\n");
            printf("Valor carta 1: %.2f\n", area_carta1);
            printf("Valor carta 2: %.2f\n", area_carta2);
            printf("Carta 2 venceu\n");
        }        
        else{
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: A área\n");
            printf("Valor carta 1: %.2f\n", area_carta1);
            printf("Valor carta 2: %.2f\n", area_carta2);
            printf("Empate!\n"); 
            
        }
    break;
    case 3:
        if (pib_carta1 > pib_carta2)
        {   
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: O Pib\n");
            printf("Valor carta 1: %.2f\n", pib_carta1);
            printf("Valor carta 2: %.2f\n", pib_carta2);
            printf("Carta 1 venceu\n");
        }else if(pib_carta1 < pib_carta2){
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: O Pib\n");
            printf("Valor carta 1: %.2f\n", pib_carta1);
            printf("Valor carta 2: %.2f\n", pib_carta2);
            printf("Carta 2 venceu\n");
        }    
        else{
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: O Pib\n");
            printf("Valor carta 1: %.2f\n", pib_carta1);
            printf("Valor carta 2: %.2f\n", pib_carta2);
            printf("Empate!\n");
        }
    break;
    case 4:
        if (quantidadePontosTuristicos_carta1 > quantidadePontosTuristicos_carta2)
        {   
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: A Quantidade de Pontos Turísticos\n");
            printf("Valor carta 1: %d\n", quantidadePontosTuristicos_carta1);
            printf("Valor carta 2: %d\n", quantidadePontosTuristicos_carta2);
            printf("Carta 1 venceu\n");
        }else if(quantidadePontosTuristicos_carta1 < quantidadePontosTuristicos_carta2){
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: A Quantidade de Pontos Turísticos\n");
            printf("Valor carta 1: %d\n", quantidadePontosTuristicos_carta1);
            printf("Valor carta 2: %d\n", quantidadePontosTuristicos_carta2);
            printf("Carta 2 venceu\n");
        }
        else{
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: A Quantidade de Pontos Turísticos\n");
            printf("Valor carta 1: %d\n", quantidadePontosTuristicos_carta1);
            printf("Valor carta 2: %d\n", quantidadePontosTuristicos_carta2);
            printf("Empate!\n");
        }
    break;
    case 5:
        if (densidadePopulacional_carta1 > densidadePopulacional_carta2)
        {
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: A Densidade Populacional\n");
            printf("Valor carta 1: %.2f\n", densidadePopulacional_carta1);
            printf("Valor carta 2: %.2f\n", densidadePopulacional_carta2);
            printf("Carta 2 venceu\n");
        }else if(densidadePopulacional_carta1 < densidadePopulacional_carta2){
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: A Densidade Populacional\n");
            printf("Valor carta 1: %.2f\n", densidadePopulacional_carta1);
            printf("Valor carta 2: %.2f\n", densidadePopulacional_carta2);
            printf("Carta 1 venceu\n");
        }
        else{
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: A Densidade Populacional\n");
            printf("Valor carta 1: %.2f\n", densidadePopulacional_carta1);
            printf("Valor carta 2: %.2f\n", densidadePopulacional_carta2);
            printf("Empate!\n");
        }
    break;
    case 6:
        if (pibPerCapita_carta1 > pibPerCapita_carta2)
        {   
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: O PIB Per Capita\n");
            printf("Valor carta 1: %.2f\n", pibPerCapita_carta1);
            printf("Valor carta 2: %.2f\n", pibPerCapita_carta2);
            printf("Carta 1 venceu\n");
        }else if(pibPerCapita_carta1 < pibPerCapita_carta2){
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: O PIB Per Capita\n");
            printf("Valor carta 1: %.2f\n", pibPerCapita_carta1);
            printf("Valor carta 2: %.2f\n", pibPerCapita_carta2);
            printf("Carta 2 venceu\n");
        } 
        else{
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: O PIB Per Capita\n");
            printf("Valor carta 1: %.2f\n", pibPerCapita_carta1);
            printf("Valor carta 2: %.2f\n", pibPerCapita_carta2);
            printf("Empate!\n");
        }  
    break;
    case 7:
        if (superPoder_carta1 > superPoder_carta2)
        {   
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: O Super Poder\n");
            printf("Valor carta 1: %.2f\n", superPoder_carta1);
            printf("Valor carta 2: %.2f\n", superPoder_carta2);
            printf("Carta 1 venceu\n");
        }else if(superPoder_carta1 < superPoder_carta2){
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: O Super Poder\n");
            printf("Valor carta 1: %.2f\n", superPoder_carta1);
            printf("Valor carta 2: %.2f\n", superPoder_carta2);
            printf("Carta 2 venceu\n");
        }
        else{
            printf("Países: %s ----- %s\n", nomePais_carta1, nomePais_carta2);
            printf("Atibruto usado na comparação foi: O Super Poder\n");
            printf("Valor carta 1: %.2f\n", superPoder_carta1);
            printf("Valor carta 2: %.2f\n", superPoder_carta2);
            printf("Empate!\n");
        }
    break;
    default:
        printf("Por favor digite um número/opção válido\n");
        break;
    }
    

    return 0;

}