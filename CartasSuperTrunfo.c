#include <stdio.h>

int main() {

        //----------------------------Carta 1---------------------------
        char estado1;
        char codigo_carta1[5];
        char nome_cidade1[20];
        int populacao1;
        float area_km1;
        float pib1;
        int pontos_turisticos1;

        //----------------------------Carta 2---------------------------
        char estado2;
        char codigo_carta2[5];
        char nome_cidade2[20];
        int populacao2;
        float area_km2;
        float pib2;
        int pontos_turisticos2;

        //----------------------------Carta 1---------------------------
        printf("Preencha o formulário a baixo.\n");
        printf("Carta 1\n");

        printf("Estado: ");
        scanf("%s", &estado1);

        printf("Código:  ");
        scanf("%s", &codigo_carta1);

        printf("Cidade: ");
        scanf("%s", &nome_cidade1);

        printf("População: ");
        scanf("%d", &populacao1);

        printf("Área: ");
        scanf("%f", &area_km1);

        printf("PIB: ");
        scanf("%f", &pib1);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &pontos_turisticos1);

        //----------------------------Carta 2---------------------------
        printf("\nCarta 2\n");

        printf("Estado: ");
        scanf("%s", &estado2);

        printf("Código:  ");
        scanf("%s", &codigo_carta2);

        printf("Cidade: ");
        scanf("%s", &nome_cidade2);

        printf("População: ");
        scanf("%d", &populacao2);

        printf("Área: ");
        scanf("%f", &area_km2);

        printf("PIB: ");
        scanf("%f", &pib2);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &pontos_turisticos2);

        //--------------------Cartas cadastradas---------------------
        printf("\n\nCarta 1");
        printf("\nEstado: %s\n", &estado1);
        printf("Código: %s\n", &codigo_carta1);
        printf("Cidade: %s\n", &nome_cidade1);
        printf("População: %d\n", &populacao1);
        printf("Área: %f\n", &area_km1);
        printf("PIB: %f\n", &pib1);
        printf("Número de Pontos Turísticos: %d", &pontos_turisticos1);

        printf("\n\nCarta 2");
        printf("\nEstado: %s\n", &estado2);
        printf("Código: %s\n", &codigo_carta2);
        printf("Cidade: %s\n", &nome_cidade2);
        printf("População: %d\n", &populacao2);
        printf("Área: %f\n", &area_km2);
        printf("PIB: %f\n", &pib2);
        printf("Número de Pontos Turísticos: %d", &pontos_turisticos2);

        
        return 0;
}