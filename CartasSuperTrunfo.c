#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    char carta1_estado;
    char carta2_estado;

    int carta1_nome_da_cidade;
    int carta2_nome_da_cidade;

    unsigned long int carta1_populacao;
    unsigned long int carta2_populacao;

    float carta1_area;
    float carta2_area;

    float carta1_PIB;
    float carta2_PIB;

    int carta1_pontos_turisticos;
    int carta2_pontos_turisticos;

    float carta1_densidade_populacional;
    float carta2_densidade_populacional;

    float carta1_PIB_PER_CAPITA;
    float carta2_PIB_PER_CAPITA;

    float carta1_Suoerpoder;
    float carta2_Superpoder;


    printf("Digite seu carta1_estado: \n");
    scanf(" %c", &carta1_estado);

    printf("Digite seu carta1_nome_da_cidade: \n");
    scanf("%d", &carta1_nome_da_cidade);
    
    printf("Digite sua carta1_populacao: \n");
    scanf("%u", &carta1_populacao);

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
    scanf("%u", &carta2_populacao);

    printf("Digite sua carta2_area: \n");
    scanf("%f", &carta2_area);

    printf("Digite sua carta2_PIB: \n");
    scanf("%f", &carta2_PIB);

    printf("Digite sua carta2_pontos_turisticos: \n");
    scanf("%d", &carta2_pontos_turisticos);

    carta1_densidade_populacional = (float) carta1_populacao / carta1_area;
    carta2_densidade_populacional =(float) carta2_populacao / carta2_area;

    carta1_PIB_PER_CAPITA = (float) carta1_PIB / carta1_populacao;
    carta2_PIB_PER_CAPITA = (float) carta2_PIB / carta2_populacao;

    carta1_Suoerpoder = carta1_populacao + carta1_PIB + carta1_area + carta1_pontos_turisticos + carta1_PIB_PER_CAPITA + (1.0 / carta1_densidade_populacional);
    carta2_Superpoder = carta2_populacao + carta2_PIB + carta2_area + carta2_pontos_turisticos + carta2_PIB_PER_CAPITA + (1.0 / carta2_densidade_populacional);


    printf("CARTA 1\n");
    
    printf("Código da carta: %c0%d\n", carta1_estado, carta1_nome_da_cidade);   
    printf("Populacao: %u \n", carta1_populacao);
    printf("Area: %f \n", carta1_area);
    printf("PIB: %f \n", carta1_PIB);
    printf("Pontos turisticos: %d \n", carta1_pontos_turisticos);
    printf("Densidade populacional: %f\n", carta1_densidade_populacional);
    printf("PIB PER CAPITA: %f\n", carta1_PIB_PER_CAPITA);
    printf("Superpoder: %f\n", carta1_Suoerpoder);

    printf("CARTA 2\n");

    printf("Código da carta: %c0%d\n", carta2_estado, carta2_nome_da_cidade);   
    printf("Populacao: %u \n", carta2_populacao);
    printf("Area: %f \n", carta2_area);
    printf("PIB: %f \n", carta2_PIB);
    printf("Pontos turisticos: %d \n", carta2_pontos_turisticos);
    printf("Densidade populacional: %f\n", carta2_densidade_populacional);
    printf("PIB PER CAPITA: %f\n", carta2_PIB_PER_CAPITA);
    printf("Superpoder: %f\n", carta2_Superpoder);


    printf("Vencedor\n");

    printf("Vencedor da populacao: %d\n", carta1_populacao > carta2_populacao);
    printf("Vencedor de area: %d\n", carta1_area > carta2_area);
    printf("Vencedor do PIB: %d\n", carta1_PIB > carta2_PIB);
    printf("Vencedor Pontos Turisticos: %d\n", carta1_pontos_turisticos > carta2_pontos_turisticos);
    printf("Vencedor da Densidade populaciona: %d\n", carta1_densidade_populacional < carta2_densidade_populacional);
    printf("Vencedor do PIB PER CAPITA: %d\n", carta1_PIB_PER_CAPITA > carta2_PIB_PER_CAPITA);
    printf("Vencedor do Superpoder: %d\n", carta1_Suoerpoder > carta2_Superpoder);



    return 0;
}
