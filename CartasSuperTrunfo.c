#include <stdio.h>

int main()
{
    char carta[4], cidades[50], estado;
    int habitantes, turista;
    float area, pib;

    //Primeiro Cartao
    printf("\n--> Preencha sua Primera Carta: <--\n\n");

    printf("Seu Estado (Letra de 'A' a 'H'): ");
    scanf("%c", &estado);

    printf("Codigo da Carta: ");
    scanf("%s", carta);

    printf("Informe o nome da Cidade: ");
    scanf("%s", cidades);

    printf("Informe a quantidade de Habitantes: ");
    scanf("%d", &habitantes);

    printf("Informe a Area Total: ");
    scanf("%f", &area);

    printf("Informe o PIB (R$): ");
    scanf("%f", &pib);

    printf("Quantos Pontos Turisticos: ");
    scanf("%d", &turista);

    //Resultado 1. Cartao
    printf("\n\n- Carta 01 -\n\n");

        printf("Estado: %c\n", estado);
        printf("Codigo: %s\n", carta);
        printf("Nome da Cidade: %s\n", cidades);
        printf("Habitantes: %d\n", habitantes);
        printf("Area: %.2f Km\n", area);
        printf("PIB: %.2f Mil Reais\n", pib);
        printf("Numero de Pontos Turisticos: %d\n", turista);


    
    //Segundo Cartao
    printf("\n\n--> Preencha sua Segunda Carta: <--\n\n");

    printf("Seu Estado (Letra de 'A' a 'H'): ");
    scanf(" %c", &estado);

    printf("Codigo da Carta: ");
    scanf("%s", carta);

    printf("Informe o nome da Cidade: ");
    scanf("%s", cidades);

    printf("Informe a quantidade de Habitantes: ");
    scanf("%d", &habitantes);

    printf("Informe a Area Total: ");
    scanf("%f", &area);

    printf("Informe o PIB (R$): ");
    scanf("%f", &pib);

    printf("Quantos Pontos Turisticos: ");
    scanf("%d", &turista);

    //Resultado 2. Cartao
    printf("\n\n- Carta 02 -\n\n");

        printf("Estado: %c\n", estado);
        printf("Codigo: %s\n", carta);
        printf("Nome da Cidade: %s\n", cidades);
        printf("Habitantes: %d\n", habitantes);
        printf("Area: %.2f Km\n", area);
        printf("PIB: %.2f Mil Reais\n", pib);
        printf("Numero de Pontos Turisticos: %d\n", turista);

        return 0;
}