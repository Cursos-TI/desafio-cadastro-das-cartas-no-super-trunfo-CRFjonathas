#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Jonathas Nicacio Silva

int main() {

    printf("REGRAS:\n");
    printf(" \n");
    printf("- Cada país será dividido em 8 estados (identificadas pelas letras A a H).\n");
    printf("- Cada estado terá 4 cidades (numerados de 1 a 4).\n");
    printf("- A combinação de letras e números formarão o código da carta.\n ");
    printf(" \n");
    printf("EXEMPLO: A01; A02; B01; B02...");
    printf(" \n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char cod_carta[10];
    char estado[20];
    char cidade[20];
    int pontos_tur;
    double populacao;
    double area;
    double pib;

    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("CADASTRO DAS CARTAS:\n");
    printf(" \n");
    printf("Codigo da carta: ");
    scanf("%s", &cod_carta);
    printf("Estado: ");
    scanf("%s", &estado);
    printf("Cidade: ");
    scanf("%s", &cidade);
    printf("Área da cidade: ");
    scanf("%lf", &area);
    printf("População da cidade: ");
    scanf("%lf", &populacao);
    printf("PIB a cidade: ");
    scanf("%lf", &pib);
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontos_tur);


    //AREA DE CALCULO:

    double pib_per_capita =  pib  / populacao;
    double densidade_pop = populacao / area;

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf(" \n");
    printf(" \n");
    printf("DADOS DA CARTA:\n");
    printf(" \n");
    printf("CODIGO DA CIDADE: %s\n", cod_carta);
    printf("ESTADO: %s\n", estado);
    printf("CIDADE: %s\n", cidade);
    printf("ÁREA: %.0f km²\n", area);
    printf("POPULAÇÃO: %.0f habitates\n", populacao);
    printf("PIB: R$ %.2f\n", pib);
    printf("PONTOS TURISTICOS: %d\n", pontos_tur);
    printf("Densidade Populacional: %.4f habitantes por Km².\n", densidade_pop);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita);


    return 0;
}
