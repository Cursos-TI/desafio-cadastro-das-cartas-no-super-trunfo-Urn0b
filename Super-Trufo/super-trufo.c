#include <stdio.h>

int main(){
    char estado = 'A';                  //--- 1º Carta ---
    char codigo[5] = "A01";
    char cidade[20] = "Fortaleza";
    int populacao = 2.429;
    float area = 313.8; 
    float pib = 73.4;
    int pontos = 30;

    printf("Estado: \n");              //--- Informações da 1º Carta ---
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
    

    //-- FIM da 1º Carta --


    char estado = 'B';                  //--- 2º Carta ---
    char codigo[5] = "B01";
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





