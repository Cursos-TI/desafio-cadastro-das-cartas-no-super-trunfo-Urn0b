#include <stdio.h>

int main(){
    char estado1, estado2;                 
    char codigo1[5],codigo2[5];
    char cidade1[20],cidade2[20];
    int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int pontos1,pontos2;

    printf("Estado: \n");              //--- Informações da 1º Carta ---
    scanf("%c", estado1);

    printf("Código da Carta: \n");
    scanf("%s", codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área em km²: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: \n");
    scanf("%d", &pontos1);


    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fKm²\n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    

    //-- FIM da 1º Carta --


    char estado = 'A2';                  //--- 2º Carta ---
    char codigo[5] = "A02";
    char cidade[20] = "Salvador";
    int populacao = 2.418;
    float area = 693.4; 
    float pib = 62.9;
    int pontos = 45;

    printf("Estado: \n");              //--- Informações da 2º Carta ---
    scanf("%c", estado);

    printf("Código da Carta: \n");
    scanf("%s", codigo);

    printf("Nome da Cidade: \n");
    scanf("%s", cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área em km²: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Pontos Turísticos: \n");
    scanf("%d", &pontos);


    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2fKm²\n", area);
    printf("PIB: %.2f \n", pib);
    printf("Pontos Turisticos: %d\n", pontos);

    //-- FIM da 2º Carta -- 

    return 0;
    
                                                                      
}