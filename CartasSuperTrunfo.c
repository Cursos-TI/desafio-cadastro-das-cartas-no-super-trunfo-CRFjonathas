#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Jonathas Nicacio Silva

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int codigo_cidade;
    char nome[100];
    int populacao;
    double area;
    double pib;
    int pontos_turisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("CADASTRO DAS CARTAS:\n");
    printf(" \n");
    printf("Codigo da carta: ");
    scanf("%d", &codigo_cidade);
    printf("Nome da cidade: ");
    scanf("%s", &nome);
    printf("Área da cidade: ");
    scanf("%f", &area);
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    printf("População da cidade: ");
    scanf("%d", &populacao);
    printf("PIB a cidade: ");
    scanf("%f", &pib);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("DADOS DA CARTA:\n");
    printf(" \n");
    printf("CODIGO DA CIDADE: A0%d\n", codigo_cidade);
    printf("CIDADE: %s\n", nome);
    printf("ÁREA: %2.f km²\n", area);
    printf("PONTOS TURISTICOS: %d\n", pontos_turisticos);
    printf("POPULAÇÃO: %d milhões\n", populacao);
    printf("PIB: %.2f", pib);

    return 0;
}
