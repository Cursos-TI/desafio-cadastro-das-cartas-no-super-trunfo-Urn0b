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
    

    printf("Estado: \n");              //--- Informações da 2º Carta ---
    scanf("%c", estado2);

    printf("Código da Carta: \n");
    scanf("%s", codigo2);

    printf("Nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área em km²: \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: \n");
    scanf("%d", &pontos2);

                                  // Exibição carta 1  
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fKm²\n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

                                 // Exibição carta 2
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fKm²\n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);                             
    

    return 0;
    
                                                                      
}