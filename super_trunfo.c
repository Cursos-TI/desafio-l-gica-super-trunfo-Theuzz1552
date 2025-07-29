#include <stdio.h>

int main(){

    char estado[30], estado2[30];
    char codigo[30], codigo2[30];
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    float area, area2;
    float PIB, PIB2;
    int pontosTuristicos, pontosTuristicos2;
    float densidade, densidade2;
    float percapita, percapita2;

    printf("\n--- Dados da Carta 1 ---\n");

    printf("Estado: ");
    scanf(" %29[^\n]", estado);

    printf("Codigo: ");
    scanf("%s", codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (km²): ");
    scanf("%f", &area);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &PIB);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos);

    densidade = populacao / area;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);

    PIB *= 1000000000; // Multiplicando PIB por 1 bilhão para ajustar para reais
    percapita = PIB / populacao;
    printf("PIB Per Capita: %.2f reais\n", percapita);

    printf("\n--- Dados da Carta 2 ---\n");

    printf("Estado: ");
    scanf(" %29[^\n]", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &PIB2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    PIB2 *= 1000000000; // Multiplicando PIB por 1 bilhão para ajustar para reais
    percapita2 = PIB2 / populacao2;
    printf("PIB Per Capita: %.2f reais\n", percapita2);

    // Comparação de Cartas:
    printf("\n*** COMPARAÇÃO DAS CARTAS ***\n");
    printf("\n Atributo: População \n");
    printf("Carta 1 - %s (%s): %d habitantes\n", cidade, estado, populacao);
    printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);

    if (populacao > populacao2) {
        printf("Resultado: Carta 1 (%s) Venceu!\n", cidade);
    } else if (populacao2 > populacao) {
        printf("Resultado: Carta 2 (%s) Venceu!\n", cidade2);
    } else {
        printf("Resultado foi empate\n");
    }

    return 0;
}