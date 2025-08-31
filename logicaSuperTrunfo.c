#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

    srand(time(0));

    printf("\n--- Dados da Carta 1 ---\n");

    printf("Estado: ");
    scanf("%s", estado);

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
    scanf("%s", estado2);

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

    // Sorteio da escolha do atributo e sorteia um numero de 1 a 6
    int atributoSorteado = rand() % 6 + 1;
    
    printf("\n=> ATRIBUTO SORTEADO: ");
    switch (atributoSorteado)
    {
    case 1:
        printf("População \n");
        break;
    case 2:
        printf("Área \n");
        break;
    case 3:
        printf("PIB Total \n");
        break;
    case 4:
        printf("Pontos Turísticos \n");
        break;
    case 5:
        printf("Densidade Demográfica \n");
        break;
    case 6:
        printf("PIB Per Capita \n");
        break;
    default:
        printf("Opção Inválida!\n");
        break;
    }
    // para exibir as comparações
    printf("\nComparando: %s (%s) VS %s (%s)\n", cidade, estado, cidade2, estado2);

    switch(atributoSorteado) {
    case 1: // Comparação de População
        printf("%s: %d habitantes\n", cidade, populacao);
        printf("%s: %d habitantes\n", cidade2, populacao2);
        if (populacao > populacao2)
            printf("Resultado: %s venceu!\n", cidade);
        else if (populacao2 > populacao)
            printf("Resultado: %s venceu!\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 2: // Comparação de Área
        printf("%s: %.2f km²\n", cidade, area);
        printf("%s: %.2f km²\n", cidade2, area2);
        if (area > area2)
            printf("Resultado: %s venceu!\n", cidade);
        else if (area2 > area)
            printf("Resultado: %s venceu!\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 3: // Comparação de PIB Total
        printf("%s: R$ %.2f\n", cidade, PIB);
        printf("%s: R$ %.2f\n", cidade2, PIB2);
        if (PIB > PIB2)
            printf("Resultado: %s venceu!\n", cidade);
        else if (PIB2 > PIB)
            printf("Resultado: %s venceu!\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 4: // Comparação de Pontos Turísticos
        printf("%s: %d pontos turísticos\n", cidade, pontosTuristicos);
        printf("%s: %d pontos turísticos\n", cidade2, pontosTuristicos2);
        if (pontosTuristicos > pontosTuristicos2)
            printf("Resultado: %s venceu!\n", cidade);
        else if (pontosTuristicos2 > pontosTuristicos)
            printf("Resultado: %s venceu!\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 5: // Comparação de Densidade Demográfica
        printf("%s: %.2f hab/km²\n", cidade, densidade);
        printf("%s: %.2f hab/km²\n", cidade2, densidade2);
        if (densidade < densidade2)
            printf("Resultado: %s venceu! (menor densidade)\n", cidade);
        else if (densidade2 < densidade)
            printf("Resultado: %s venceu! (menor densidade)\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 6: // Comparação de PIB per Capita
        printf("%s: R$ %.2f\n", cidade, percapita);
        printf("%s: R$ %.2f\n", cidade2, percapita2);
        if (percapita > percapita2)
            printf("Resultado: %s venceu!\n", cidade);
        else if (percapita2 > percapita)
            printf("Resultado: %s venceu!\n", cidade2);
        else
            printf("Empate!\n");
        break;

        default:
            printf("## ERRO! ##\n");
    }

    return 0;
}