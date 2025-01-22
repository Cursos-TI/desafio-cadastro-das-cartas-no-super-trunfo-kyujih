#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    int codigo_cidade;
    char nome[50];
    float populacao;
    float area;
    float pib;
    int pontos_turisticos;

    
    printf("Digite o código da cidade Ex: 123\n>>> ");
    scanf("%d", &codigo_cidade); 

    printf("Digite o nome da cidade Ex: São_paulo\n>>> ");
    scanf("%s", &nome);//Não aperte espaço, ele finaliza o código.

    printf("Digite a população Ex: 157.248\n>>> ");
    scanf(" %f", &populacao);

    printf("Digite a área da cidade Ex: 465\n>>> ");//não precisa colocar km, ele coloca no output
    scanf("%f", &area);

    printf("Digite o PIB da cidade Ex: 123.254.234\n>>> ");
    scanf("%f", &pib);

    printf("Digite quantos pontos turisticos tem a cidade Ex: 14\n>>> ");
    scanf("%d", &pontos_turisticos);

    printf("Código da cidade: %d\nCidade: %s", codigo_cidade, nome);
    printf("População total: %f\nÁrea: %.2fKm²\n", populacao, area);
    printf("PIB: %fR$\nPontos turisticos: %d\n", pib, pontos_turisticos);

    return 0;
}
