#include <stdio.h>

int main(){
   
    // CARTA 1
    char estado;
    char carta [4];
    char cidade [25];
    int populaçao, pontos_turisticos;
    float PIB, area,densidade_populacional, PIB_per_capita;

    // CARTA 2
    
    char estado2;
    char carta2 [4];
    char cidade2 [25];
    int populaçao2, pontos_turisticos2;
    float PIB2, area2, densidade_populacional2, PIB_per_capita2;

   // Carta 1:
//  Estado: A
//  Código: A01
//  Nome da Cidade: São Paulo
//  População: 12325000
//  Área: 1521.11 km²
//  PIB: 699.28 bilhões de reais
//  Número de Pontos Turísticos: 50
//  Densidade Populacional: 8102.47 hab/km²
//  PIB per Capita: 56724.32 reais

    // Carta 2:
//  Estado: B
//  Código: B02
//  Nome da Cidade: Rio de Janeiro
//  População: 6748000
//  Área: 1200.25 km²
//  PIB: 300.50 bilhões de reais
//  Número de Pontos Turísticos: 30
//  Densidade Populacional: 5622.24 hab/km²
//  PIB per Capita: 44532.91 reais

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

    printf("Digite a Densidade Populacional:\n");
    scanf("%f", &densidade_populacional);
    
    printf("Digite o PIB per Capita:\n");
    scanf("%f", &PIB_per_capita);

    densidade_populacional = populaçao / area;
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional );
    
    PIB_per_capita = PIB * 1000000000 / populaçao;
    printf("Pib Per Capita: %.2f reais\n", PIB_per_capita );



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

    printf("Digite a Densidade Populacional:\n");
    scanf("%f", &densidade_populacional2);

    printf("Digite o PIB per Capita:\n");
    scanf("%f", &PIB_per_capita2);
    
    densidade_populacional2 = populaçao2 / area2;
    printf("Densidade populacional: %.2f Hab/km²\n", densidade_populacional2 );
    
    PIB_per_capita2 = PIB2 * 1000000000 / populaçao2;
    printf("Pib Per Capita: %.2f reais\n", PIB_per_capita2  );



    /////////////////////////////////////////////////////////////

    printf("\n\n---INFORMAÇÕES DOS DADOS--- \n");
	printf("CARTA 1\n");
	printf("Estado: %c\n", estado);  
    printf("Codigo: %s\n", carta );
    printf("Cidade: %s\n", cidade );
    printf("População: %d\n", populaçao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de Reais\n", PIB);
    printf("Pontos Turisticos: %d\n", pontos_turisticos );
    printf("Densidade Populacional:%.2f\n", densidade_populacional);
    printf("PIB Per Capital: %.2f \n", PIB_per_capita);
    
   
    ///////////////////////////////////////////////////////////////

 printf("\n\n---INFORMAÇÕES DOS DADOS--- \n");
	printf("CARTA 2\n");
	printf("Estado: %c\n", estado2);  
    printf("Codigo: %s\n", carta2 );
    printf("Cidade: %s\n", cidade2 );
    printf("População: %d\n", populaçao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2 );
    printf("Densidade Populacional:%.2f\n", densidade_populacional2);
    printf("PIB Per Capital: %.2f \n", PIB_per_capita2);
   
    return 0;
    
}
