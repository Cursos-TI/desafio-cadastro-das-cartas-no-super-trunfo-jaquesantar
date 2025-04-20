#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    char carta1_estado;
    char carta2_estado;

    int carta1_nome_da_cidade;
    int carta2_nome_da_cidade;

    int carta1_populacao;
    int carta2_populacao;

    float carta1_area;
    float carta2_area;

    float carta1_PIB;
    float carta2_PIB;

    int carta1_pontos_turisticos;
    int carta2_pontos_turisticos;

    printf("Digite seu carta1_estado: \n");
    scanf(" %c", &carta1_estado);

    printf("Digite seu carta1_nome_da_cidade: \n");
    scanf("%d", &carta1_nome_da_cidade);
    
    printf("Digite sua carta1_populacao: \n");
    scanf("%d", &carta1_populacao);

    printf("Digite sua carta1_area: \n");
    scanf("%f", &carta1_area);

    printf("Digite sua carta1_PIB: \n");
    scanf("%f", &carta1_PIB);
    
    printf("Digite sua carta1_pontos_turisticos: \n");
    scanf("%d", &carta1_pontos_turisticos);

    printf("Digite seu carta2_estado: \n");
    scanf(" %c", &carta2_estado);

    printf("Digite seu carta2_nome_da_cidade: \n");
    scanf("%d", &carta2_nome_da_cidade);

    printf("Digite sua carta2_populacao: \n");
    scanf("%d", &carta2_populacao);

    printf("Digite sua carta2_area: \n");
    scanf("%f", &carta2_area);

    printf("Digite sua carta2_PIB: \n");
    scanf("%f", &carta2_PIB);

    printf("Digite sua carta2_pontos_turisticos: \n");
    scanf("%d", &carta2_pontos_turisticos);

    printf("CARTA 1\n");
    
    printf("Código da carta: %c0%d\n", carta1_estado, carta1_nome_da_cidade);   
    printf("Populacao: %d \n", carta1_populacao);
    printf("Area: %f \n", carta1_area);
    printf("PIB: %f \n", carta1_PIB);
    printf("Pontos turisticos: %d \n", carta1_pontos_turisticos);

    printf("CARTA 2\n");

    printf("Código da carta: %c0%d\n", carta2_estado, carta2_nome_da_cidade);   
    printf("Populacao: %d \n", carta2_populacao);
    printf("Area: %f \n", carta2_area);
    printf("PIB: %f \n", carta2_PIB);
    printf("Pontos turisticos: %d \n", carta2_pontos_turisticos);

    return 0;
}
