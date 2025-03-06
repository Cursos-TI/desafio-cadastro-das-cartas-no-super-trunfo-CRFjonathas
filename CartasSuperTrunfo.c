#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Jonathas Nicacio Silva

int main(){

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado_1[2],codigo_1, cidade_1[50];
    char estado_2[2],codigo_2, cidade_2[50];
    long int populacao_1, populacao_2;   
    float area_1, area_2, pib_1, pib_2;
    int  pontos_turisticos_1, pontos_turisticos_2;

    printf("REGRAS:\n");
    printf("\n- Cada país será dividido em 8 estados (identificadas pelas letras A a H).\n");
    printf("- Cada estado terá 4 cidades (numerados de 1 a 4).\n");
    printf("- A combinação de letras e números formarão o código da carta.\n ");
    printf("\nEXEMPLO: A01; A02; B01; B02...\n");
    printf(" \n");    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("\nCarta 1: \n");
    printf(" \n");
    printf("\nEstado: ");
    scanf("%s", &estado_1);
    printf("Código: %s0", estado_1);
    scanf("%s", &codigo_1);
    
    //limpar buffer de entrada
    getchar(); // isso consome o '\n' que sobra apos o scanf

    printf("Nome da cidade: ");
    fgets(cidade_1, 50, stdin);
    cidade_1[strcspn(cidade_1, "\n")] = 0;
    
    printf("População: ");
    scanf("%ld", &populacao_1);
    printf("Área: ");
    scanf("%f", &area_1);
    printf("PIB: ");
    scanf("%f", &pib_1);
    printf("Número de Pontos Turisticos: ");
    scanf("%d",&pontos_turisticos_1);


    // DADOS DA CARTA 2:

    printf("\nCarta 2: \n");
    printf(" \n");
    printf("\nEstado: ");
    scanf("%s", &estado_2);
    printf("Código: %s0", estado_2);
    scanf("%s", &codigo_2);
    
    getchar();

    printf("Nome da cidade: ");
    fgets(cidade_2, 50, stdin);
    cidade_2[strcspn(cidade_2, "\n")] = 0;
    
    printf("População: ");
    scanf("%ld", &populacao_2);
    printf("Área: ");
    scanf("%f", &area_2);
    printf("PIB: ");
    scanf("%f", &pib_2);
    printf("Número de Pontos Turisticos: ");
    scanf("%d",&pontos_turisticos_2);

    //calculo densidade populacional e pib per capita:

    float pib_per_capita_1 =  (pib_1 * 1000000000) / populacao_1; 
    float densidade_pop_1 = populacao_1 / area_1;
    float pib_per_capita_2 =  (pib_2 * 1000000000) / populacao_2;
    float densidade_pop_2 = populacao_2 / area_2;
    
    //calculo da força da carta:

    float super_poder_1 = populacao_1 + area_1 + (pib_1 * 1000000000) + pontos_turisticos_1 + pib_per_capita_1 +(1 / densidade_pop_1);
    float super_poder_2 = populacao_2 + area_2 + (pib_2 * 1000000000) + pontos_turisticos_2 + pib_per_capita_2 +(1 / densidade_pop_2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf(" \n");
    printf("\nCARTA 1:\n");
    printf("\nESTADO: %s\n", estado_1);
    printf("CODIGO DA CIDADE: %s0%s\n",estado_1, codigo_1 );
    printf("CIDADE: %s\n",cidade_1 );
    printf("POPULAÇÃO: %ld habitates\n",populacao_1 );
    printf("ÁREA: %.2f km²\n",area_1 );
    printf("PIB: R$ %.2f BILHÕES\n",pib_1 );
    printf("NÚMERO DE PONTOS TURISTICOS: %d\n",pontos_turisticos_1 );
    printf("Densidade Populacional: %.2f hab/Km².\n", densidade_pop_1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita_1);
    printf("Super poder: %.2f\n", super_poder_1);

    printf(" \n");
    printf("\nCARTA 2:\n");
    printf("\nESTADO: %s\n", estado_2);
    printf("CODIGO DA CIDADE: %s0%s\n",estado_2, codigo_2 );
    printf("CIDADE: %s\n",cidade_2 );
    printf("POPULAÇÃO: %ld habitates\n",populacao_2 );
    printf("ÁREA: %.2f km²\n",area_2 );
    printf("PIB: R$ %.2f BILHÕES\n",pib_2 );
    printf("PONTOS TURISTICOS: %d\n",pontos_turisticos_2 );
    printf("Densidade Populacional: %.2f hab/Km².\n", densidade_pop_2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita_2);
    printf("Super poder: %.2f\n", super_poder_2);

    // comparação das cartas:

    printf("\nCOMPARAÇÃO DE CARTAS:\n");
    printf("população: Carta %d venceu\n", populacao_1 > populacao_2 ? 1 : 2);
    printf("Área: Carta %d venceu\n", area_1 > area_2 ? 1 : 2);
    printf("PIB: Carta %d venceu\n", pib_1 > pib_2 ? 1 : 2);
    printf("Pontos Turisticos: Carta %d venceu\n", pontos_turisticos_1 > pontos_turisticos_2 ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", densidade_pop_1 < densidade_pop_2 ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n", pib_per_capita_1 > pontos_turisticos_2 ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", super_poder_1 < super_poder_2 ? 1 : 2);

    return 0;
}
