#include <stdio.h>

int main(){

    char estado1, estado2;
    char codigo1[15], codigo2[15], cidade1[15], cidade2[15];
    int populacao1, populacao2, pontost1, pontost2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibPer1, pibPer2;


    //Cadastro Carta 01
    printf("Cadastre sua primeira carta\n");
    printf("Estado(letra de A a H): ");
    scanf(" %c", &estado1);
    
    printf("Código(letra do estado + número de 01 a 04): \n");
    scanf(" %s", codigo1);
    
    printf("Cidade: \n");
    scanf(" %s", cidade1);
    
    printf("População: \n");
    scanf(" %d", &populacao1);

    printf("Área em km²: \n");
    scanf(" %f", &area1);

    printf("PIB: \n");
    scanf(" %f", &pib1);

    printf("Pontos turísticos: \n");
    scanf(" %d", &pontost1);

    densidade1 = (float) populacao1/area1;
    pibPer1 = (float) (pib1*1000000000)/populacao1;
    

    //Cadastro Carta 02
    printf("Cadastre sua segunda carta\n");
    printf("Estado(letra de A a H): ");
    scanf(" %c", &estado2);
    
    printf("Código(letra do estado + número de 01 a 04): \n");
    scanf(" %s", codigo2);
    
    printf("Cidade: \n");
    scanf(" %s", cidade2);
    
    printf("População: \n");
    scanf(" %d", &populacao2);

    printf("Área em km²: \n");
    scanf(" %f", &area2);

    printf("PIB: \n");
    scanf(" %f", &pib2);

    printf("Pontos turísticos: \n");
    scanf(" %d", &pontost2);

    densidade2 = (float) populacao2/area2;
    pibPer2 = (float) (pib2*1000000000)/populacao2;
    
    
    //Apresentando as cartas

    printf ("\nCarta 1\n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da Cidade: %s\n", cidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf ("PIB: %.2f bilhões de reais\n", pib1);
    printf ("Pontos Turísticos: %d\n", pontost1);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf ("PIB per Capita: %.2f reais\n", pibPer1);
    
    printf ("\nCarta 2\n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da Cidade: %s\n", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: %.2f bilhões de reais\n", pib2);
    printf ("Pontos Turísticos: %d\n", pontost2);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf ("PIB per Capita: %.2f reais\n", pibPer2);

    return 0;
}