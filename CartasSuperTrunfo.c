#include <stdio.h>
#include <string.h>

int main() {
// declaração de variaveis:
    char lixo[2];
    char estado1[3], estado2[3];
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
//Leitura das cartas:
    printf("Coloque os dados da PRIMEIRA carta:\n");
    printf("Digite o Estado\n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0; //retirar caractere \n residual após inserir o dado para não interferir no proximo fgets
    printf("Digite o Codigo da carta\n");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = 0;
    printf("Digite a Cidade\n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;  
    printf("Digite a população em numero inteiro\n");
    scanf("%d", &populacao1);
    printf("Digite a Área em decimal\n");
    scanf("%f", &area1);
    printf("Digite o PIB em decimal\n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos\n");
    scanf(" %d", &pontosturisticos1);
    fgets(lixo,2,stdin); //fgets dummy para retirar newlines residual.
    float denspop1 = (float) populacao1/area1;
    float pibpercap1 = (float) pib1/populacao1;
    printf("Agora coloque os dados da SEGUNDA carta:\n");
    printf("Digite o Estado\n");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;
    printf("Digite o Codigo da carta\n");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;
    printf("Digite a Cidade\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;  
    printf("Digite a população em numero inteiro\n");
    scanf("%d", &populacao2);
    printf("Digite a Área em decimal\n");
    scanf("%f", &area2);
    printf("Digite o PIB em decimal\n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos\n");
    scanf("%d", &pontosturisticos2);
//exibição das cartas:
    printf("Carta 1:\nEstado: %s\nCodigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nPontos turísticos: %d\nDensidade Populacional: %f\nPIB per capita: %f\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontosturisticos1, denspop1, pibpercap1);
    
    printf("Carta 2:\nEstado: %s\nCodigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nPontos turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontosturisticos2, denspop1, pibpercap1);
    return 0;


}
