#include <stdio.h>
#include <stdlib.h>


int main(){

    //declaração de variáveis CARTA 1
    char estado_carta1;
    char codigocarta_carta1[4];
    char nomecidade_carta1[100];
    int populacao_carta1;
    double area_carta1;
    float pib_carta1;
    int quantidadePontosTuristicos_carta1;


    //declaração de variáveis CARTA 2
    char estado_carta2;
    char codigocarta_carta2[4];
    char nomecidade_carta2[100];
    int populacao_carta2;
    double area_carta2;
    float pib_carta2;
    int quantidadePontosTuristicos_carta2;

    //entrada dos dados CARTA 1
    printf("DIGITE OS DADOS DA CARTA 1: \n");
    printf("Digite o estado da carta(O estado vai de A a H)\n");
    scanf("%c", &estado_carta1);
    printf("Digite o codigo da carta: (O codigo deve conter o estado da carta e um numero de 01 a 04)\n");
    scanf("%3s", codigocarta_carta1);
    __fpurge(stdin);
    printf("Digite o nome da cidade: \n");
    scanf("%100[^\n]", nomecidade_carta1);
    printf("Digite o número de de habitantes: \n");
    scanf("%d", &populacao_carta1);
    printf("Digite a área da cidade em km²: \n");
    scanf("%le", &area_carta1);
    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib_carta1);
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
    printf("Digite o número de de habitantes: \n");
    scanf("%d", &populacao_carta2);
    printf("Digite a área da cidade em km²: \n");
    scanf("%le", &area_carta2);
    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib_carta2);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &quantidadePontosTuristicos_carta2);



    //saída dos dados CARTA 1
    printf("CARTA 1:\n");
    printf("Estado: %c \n", estado_carta1);
    printf("Código: %s \n" , codigocarta_carta1);
    printf("Nome da cidade: %s \n", nomecidade_carta1);
    printf("População: %d \n", populacao_carta1);
    printf("Área: %.2f km² \n", area_carta1);
    printf("Pib: %.2f bilhões de reais\n", pib_carta1);
    printf("Número de pontos turísticos: %d \n", quantidadePontosTuristicos_carta1);


    //saída dos dados CARTA 2
    printf("CARTA 2:\n");
    printf("Estado: %c \n", estado_carta2);
    printf("Código: %s \n" , codigocarta_carta2);
    printf("Nome da cidade: %s \n", nomecidade_carta2);
    printf("População: %d \n", populacao_carta2);
    printf("Área: %.2f km² \n", area_carta2);
    printf("Pib: %.2f bilhões de reais\n", pib_carta2);
    printf("Número de pontos turísticos: %d \n", quantidadePontosTuristicos_carta2);
    return 0;

}