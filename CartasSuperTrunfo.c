#include <stdio.h>
    int main(){
        printf("Novato - Desafio Super Trunfo Países!\n");

        char codigo_da_cidade[10];
        char nome[50];
        double populacao;
        double area;
        float pib;
        int numero_de_pontos_turisticos;

        printf("Informe o código da cidade:\n");
        scanf("%s", codigo_da_cidade);

        printf("Informe o nome da cidade:\n");
        scanf("%s", nome);

        printf("Informe a população:\n");
        scanf("%lf", &populacao);

        printf("Informe a área:\n");
        scanf("%lf", &area);

        printf("Informe o PIB:\n");
        scanf("%f", &pib);

        printf("Informe o número de pontos turísticos:\n");
        scanf("%d", &numero_de_pontos_turisticos);

        printf("Codigo da cidade: %s\n", codigo_da_cidade);
        printf("Nome da cidade: %s\n", nome);
        printf("Populacao: %.2f\n", populacao);
        printf("Area: %.2f\n", area);
        printf("PIB: %.3f\n", pib);
        printf("Numero de pontos turisticos: %d\n", numero_de_pontos_turisticos);

        return 0;

    }
