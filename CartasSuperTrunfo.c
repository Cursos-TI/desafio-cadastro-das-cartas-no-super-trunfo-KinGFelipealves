

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

#include <stdio.h>

int main(){
   
    // CARTA 1
    char estado;
    char carta [4];
    char cidade [25];
    int populaçao, pontos_turisticos;
    float PIB, area;

    // CARTA 2
    
    char estado2;
    char carta2 [4];
    char cidade2 [25];
    int populaçao2, pontos_turisticos2;
    float PIB2, area2;

    printf ("Digite o Estado: \n");
    scanf (" %c", &estado);

    printf("Digite o Código da Carta: \n");
    scanf ("%s", carta);

    printf("Digite a Cidade:\n");
    scanf ("%s", cidade);

    printf("Digite a População:\n");
    scanf("%d", &populaçao);

    printf("Digite a Área em km²:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos);

    // CARTA 2

    printf ("Digite o Estado: \n");
    scanf (" %c", &estado2);

    printf("Digite o Código da Carta: \n");
    scanf ("%s", carta2);

    printf("Digite a Cidade:\n");
    scanf ("%s", cidade2);

    printf("Digite a População:\n");
    scanf("%d", &populaçao2);

    printf("Digite a Área em km²:\n");
    scanf("%f", &area2);

     printf("Digite o PIB:\n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    return 0;
    
}
