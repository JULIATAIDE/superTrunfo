#include <stdio.h>
int main (){
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    int turistico1, turistico2;
    float area1, area2;
    float pib1, pib2;
    float densidade1 = 0, densidade2 = 0;
    float percapita1 = 0, percapita2 = 0;


 // Informações da primeira carta


    printf("Preencha as informações da primeira carta!\n");


    printf("Digite a inicial do Estado (A-H):\n");
    scanf (" %c", &estado1);


    printf("Digite o Código da carta (ex: A01):\n");
    scanf("%3s", codigo1);


    printf("Digite o nome da Cidade:\n");
    scanf("%s", cidade1);


    printf("Digite a população da Cidade:\n");
    scanf("%d", &populacao1);


    printf("Digite a Área da cidade (em km²):\n");
    scanf("%f", &area1);


    printf("Digite o PIB da Cidade (em bilhões):\n");
    scanf("%f", &pib1);


    printf("Digite o número de Pontos Turísticos da cidade:\n");
    scanf("%d", &turistico1);


// Cálculos para Carta 1:
if (area1 > 0) { // Evita divisão por zero
    densidade1 = (float) populacao1 / area1;
} else {
    densidade1 = 0;
}
if (populacao1 > 0) { // Evita divisão por zero
    percapita1 = (pib1 * 1000000000.0) / (float) populacao1;
} else {
    percapita1 = 0;
}


 // Informações da segunda carta


    printf("\nPreencha as informações da segunda carta!\n");


    printf("Digite a inicial do Estado (A-H):\n");
    scanf(" %c", &estado2);


    printf("Digite o Código da carta (ex: B02):\n");
    scanf("%3s", codigo2);


    printf("Digite o Nome da Cidade:\n");
    scanf("%s", cidade2);


    printf("Digite a População da cidade:\n");
    scanf("%d", &populacao2);


    printf("Digite a Área da cidade(em km²):\n");
    scanf("%f", &area2);


    printf("Digite o PIB da cidade (em bilhões):\n");
    scanf("%f", &pib2);


    printf("Digite o número de Pontos Turísticos da cidade:\n");
    scanf("%d", &turistico2);


// Cálculos para carta 2:
    if (area2 > 0) {
        densidade2 = (float) populacao2 / area2;
   } else {
        densidade2 = 0;
   }
    if (populacao2 > 0) {
        percapita2 = (pib2 * 1000000000.0) / (float) populacao2;
    } else {
        percapita2 = 0;
    }


 // Dados que o usuário inseriu


    printf("\n   PRIMEIRA CARTA     \n");
    printf("Inicial do Estado: %c\n", estado1);
    printf("Código da Cidade: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População da Cidade: %d\n", populacao1);
    printf("Área da Cidade: %.2fkm²\n", area1);
    printf("PIB da Cidade: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$%.2f\n", percapita1);


    printf("\n      SEGUNDA CARTA     \n");
    printf("Inicial do Estado: %c\n", estado2);
    printf("Código da Cidade: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População da Cidade: %d\n", populacao2);
    printf("Área da Cidade: %.2fkm²\n", area2);
    printf("PIB da Cidade: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$%.2f\n", percapita2);


    return 0;
}
