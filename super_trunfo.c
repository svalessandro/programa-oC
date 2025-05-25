#include <stdio.h>

int main(){

    char estado1, estado2;
    char codigo1[2], codigo2[2], cidade1[15], cidade2[15];
    unsigned long int populacao1, populacao2;
    int pontost1, pontost2, compPopulacao, compArea, compPib, compPontost, compDensidade, compPibPer, compSuper;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibPer1, pibPer2, superPoder1, superPoder2;



    //Cadastro Carta 01
    printf("Cadastre sua primeira carta\n");
    printf("Estado(letra de A a H): ");
    scanf(" %c", &estado1);
    
    printf("Código(letra do estado + número de 01 a 04): \n");
    scanf(" %s", codigo1);
    
    printf("Cidade: \n");
    scanf(" %s", cidade1);
    
    printf("População: \n");
    scanf(" %lu", &populacao1);

    printf("Área em km²: \n");
    scanf(" %f", &area1);

    printf("PIB: \n");
    scanf(" %f", &pib1);

    printf("Pontos turísticos: \n");
    scanf(" %d", &pontost1);

    densidade1 = (float) populacao1/area1;
    pibPer1 = (float) (pib1*1000000000)/populacao1;
    superPoder1 = (long double) populacao1 + area1 + pib1 + pontost1 + pibPer1 + ((1/densidade1)*1000);

    //Cadastro Carta 02
    printf("\nCadastre sua segunda carta\n");
    printf("Estado(letra de A a H): ");
    scanf(" %c", &estado2);
    
    printf("Código(letra do estado + número de 01 a 04): \n");
    scanf(" %s", codigo2);
    
    printf("Cidade: \n");
    scanf(" %s", cidade2);
    
    printf("População: \n");
    scanf(" %lu", &populacao2);

    printf("Área em km²: \n");
    scanf(" %f", &area2);

    printf("PIB: \n");
    scanf(" %f", &pib2);

    printf("Pontos turísticos: \n");
    scanf(" %d", &pontost2);

    densidade2 = (float) populacao2/area2;
    pibPer2 = (float) (pib2*1000000000)/populacao2;
    superPoder2 = (long double) populacao2 + area2 + pib2 + pontost2 + pibPer2 + ((1/densidade2)*1000); // Multiplicando o inverso da densidade para que o número seja significativo e menor.

    //Comparação das cartas
    compPopulacao = populacao1 > populacao2;
    compArea = area1 > area2;
    compPib = pib1 > pib2;
    compPontost = pontost1 > pontost2;
    compDensidade = densidade1 < densidade2;
    compPibPer = pibPer1 > pibPer2;
    compSuper = superPoder1 > superPoder2;

    printf ("\nComparação de Cartas\n");
    printf ("População: Carta 1 venceu (%d)\n", compPopulacao);
    printf ("Área: Carta 1 venceu (%d)\n", compArea);
    printf ("PIB: Carta 1 venceu (%d)\n", compPib);
    printf ("Pontos Turísticos: Carta 1 venceu (%d)\n", compPontost);
    printf ("Densidade Populacional: Carta 1 venceu (%d)\n", compDensidade);
    printf ("PIB per Capita: Carta 1 venceu (%d)\n", compPibPer);
    printf ("Super Poder: Carta 1 venceu (%d)\n", compSuper);

    return 0;
}