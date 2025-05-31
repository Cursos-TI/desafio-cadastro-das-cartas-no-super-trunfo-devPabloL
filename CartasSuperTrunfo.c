/*
Estado (char) // ceara
Código da carta (char[]) //A01
Nome da cidade (char[]) // Fortaleza
População (int) // 2700000
Área em km² (float) // 10000000
PIB (float) //300000000
Número de pontos turísticos (int) //50
*/
#include <stdio.h>

int main() {
    //Carta 1:

    //Definição das variaveis
    char estado1[20];
    char codigo_carta1[4];
    char nome_cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    //Entrada de dados
    printf("------------------------- CARTA 1 -----------------------\n");
    printf("Digite o estado da carta 1(Nome Simples): ");
    scanf("%s", estado1);
    printf("Digite o código da carta 1(3 caracteres sendo uma letra e dois números): ");
    scanf("%s", codigo_carta1);
    printf("Digite o nome da cidade da carta 1(Nome simples): ");
    scanf("%s", nome_cidade1);
    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área em km² da carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontos_turisticos1);


    //Carta 2:
    char estado2[20];
    char codigo_carta2[4];
    char nome_cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //Entrada de dados
    printf("------------------------- CARTA 2 -----------------------\n");
    printf("Digite o estado da carta 2(Nome simples): ");
    scanf("%s", estado2);
    printf("Digite o código da carta 2(3 caracteres sendo uma letra e dois números): ");
    scanf("%s", codigo_carta2);
    printf("Digite o nome da cidade da carta 2(Nome simples): ");
    scanf("%s", nome_cidade2);
    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área em km² da carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);

    //Exibição dos dados
    printf("-----------------------------------\n");
    printf(" Carta 1:\n");
    printf("-----------------------------------\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("\n");
    printf("-----------------------------------\n");
    printf(" Carta 2:\n");
    printf("-----------------------------------\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);



    return 0;

}

/*
------------------------- CARTA 1 -----------------------
Digite o estado da carta 1(Nome Simples): Amazonas
Digite o código da carta 1(3 caracteres sendo uma letra e dois números): A01
Digite o nome da cidade da carta 1(Nome simples): Manaus
Digite a população da carta 1: 220000
Digite a área em km² da carta 1: 11401.00
Digite o PIB da carta 1: 103000000000.00
Digite o número de pontos turísticos da carta 1: 40


------------------------- CARTA 2 -----------------------
Digite o estado da carta 2(Nome simples): Pernambuco
Digite o código da carta 2(3 caracteres sendo uma letra e dois números): A02
Digite o nome da cidade da carta 2(Nome simples): Recife
Digite a população da carta 2: 160000
Digite a área em km² da carta 2: 218.50
Digite o PIB da carta 2: 50000000000.00
Digite o número de pontos turísticos da carta 2: 55
-----------------------------------
 Carta 1:
-----------------------------------
Estado: Amazonas
Código da carta: A01
Nome da cidade: Manaus
População: 220000
Área em km²: 11401.00 km²
PIB: R$ 102999998464.00
Número de pontos turísticos: 40

-----------------------------------
 Carta 2:
-----------------------------------
Estado: Pernambuco
Código da carta: A02
Nome da cidade: Recife
População: 160000
Área em km²: 218.50 km²
PIB: R$ 49999998976.00
Número de pontos turísticos: 55
*/