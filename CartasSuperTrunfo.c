#include <stdio.h>


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado;
    char codigo[4];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("Digite /n");
    scanf("%c", &estado);
    printf("Digite /n");
    scanf("%s", &codigo);
    printf("Digite /n");
    scanf("%c", &cidade);
    printf("Digite /n");
    scanf("%d", &populacao);
    printf("Digite /n");
    scanf("%f", &area);
    printf("Digite /n");
    scanf("%f", &pib);
    printf("Digite /n");
    scanf("%d", &pontosturisticos);
    return 0;
}
