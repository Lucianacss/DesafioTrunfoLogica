#include <stdio.h>

int main() {
    char estado1[2], estado2[2];
    char codigo1[3], codigo2[3];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2, densidade1, densidade2;
    float pib1, pib2, pibpercapita1, pibpercapita2;
    int ptoturismo1, ptoturismo2;

    printf("Forneça as informações para a Carta 1:\n");
        printf("Digite a sigla do estado: \n");
        scanf(" %s", &estado1);
        printf("Digite o código da cidade ('A01', 'B03'...): \n");
        scanf("%s", &codigo1);
        printf("Digite o nome da cidade: \n");
        scanf("%s", &cidade1);
        printf("Digite a população: \n");
        scanf("%d", &populacao1);
        printf("Digite a área em km²: \n");
        scanf("%f", &area1);
        printf("Digite o PIB: \n");
        scanf("%f", &pib1);
        printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &ptoturismo1);
        densidade1 = populacao1/area1;
        pibpercapita1 = pib1/populacao1;
        
    printf("\nAgora forneça as informações para a Carta 2:\n");
        printf("Digite a sigla do estado: \n");
        scanf(" %s", &estado2);
        printf("Digite o código da cidade ('A01', 'B03'...): \n");
        scanf("%s", &codigo2);
        printf("Digite o nome da cidade: \n");
        scanf("%s", &cidade2);
        printf("Digite a população: \n");
        scanf("%d", &populacao2);
        printf("Digite a área em km²: \n");
        scanf("%f", &area2);
        printf("Digite o PIB: \n");
        scanf("%f", &pib2);
        printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &ptoturismo2);
        densidade2 = populacao2/area2;
        pibpercapita2 = pib2/populacao2;

    printf("\nAqui estão as suas cartas: \n");
    printf("Carta 1:\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %f km²\n", area1);
        printf("PIB: %f\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", ptoturismo1);

    printf("Carta 2:\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %f km²\n", area2);
        printf("PIB: %f\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", ptoturismo2);

    // Vamos escolher o número de pontos turísticos para determinar a carta vencedora

    printf("\nComparação de cartas (Atributo: Num. de pontos turísticos):\n");
    printf("Carta 1 - %s (%c): %d\n", cidade1, estado1, ptoturismo1);
    printf("Carta 2 - %s (%c): %d\n", cidade2, estado2, ptoturismo2);

    if(ptoturismo1>ptoturismo2){
        printf("Resultado: Carta 1 (%s) venceu!\n",cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n",cidade2);
    }
  
    return 0;
}