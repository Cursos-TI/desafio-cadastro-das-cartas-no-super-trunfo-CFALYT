#include <stdio.h>

int main() {

    //----------------------------Carta 1---------------------------
    char estado1[3];  // Um pouco diferente do solicitado na aula, mas acredito que esteja certo
    char codigo_carta1[5];
    char nome_cidade1[20];
    int populacao1;
    float area_km1;
    float pib1;
    int pontos_turisticos1;


    //----------------------------Carta 2---------------------------
    char estado2[3];
    char codigo_carta2[5];
    char nome_cidade2[20];
    int populacao2;
    float area_km2;
    float pib2;
    int pontos_turisticos2;

    //----------------------------Carta 1---------------------------
    printf("Preencha o formulário abaixo.\n");
    printf("Carta 1\n");

    printf("Estado: ");
    scanf("%2s", estado1);  // %2s, %4s, %19s, vi num site que funcionaria melhor assim

    printf("Código:  ");
    scanf("%4s", codigo_carta1);

    printf("Cidade: ");
    scanf("%19s", nome_cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area_km1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    //----------------------------Carta 2---------------------------
    printf("\nCarta 2\n");

    printf("Estado: ");
    scanf("%2s", estado2);

    printf("Código:  ");
    scanf("%4s", codigo_carta2);

    printf("Cidade: ");
    scanf("%19s", nome_cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area_km2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    //--------------------Cartas cadastradas---------------------
    printf("\n\nCarta 1");
    printf("\nEstado: %s\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area_km1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

        //Cálculo de Densidade Populacional e PIB per Capita
    float densidade_populacional1 = populacao1 / area_km1;
    float pib_percapita1 = pib1 / populacao1;

            //Resultado de Densidade Populacional e PIB per Capita carta 1

    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_percapita1);

    printf("\n\nCarta 2");
    printf("\nEstado: %s\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area_km2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

        //Cálculo de Densidade Populacional e PIB per Capita carta 2
    float densidade_populacional2 = populacao2 / area_km2;
    float pib_percapita2 = pib2 / populacao2;

        //Resultado de Densidade Populacional e PIB per Capita
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_percapita1);

    return 0;
}
