/*
  super_trunfo.c
  Projeto: Cadastro de 2 cartas do Super Trunfo (Países / Cidades)
  Autor: (seu nome)
  Descrição: Leitura via teclado de duas cartas com:
    - Estado (char 'A'..'H')
    - Código da carta (string, ex: "A01")
    - Nome da cidade (string, com espaços)
    - População (int)
    - Área (float, km²)
    - PIB (float, em bilhões)
    - Número de pontos turísticos (int)

  Observações:
    - Não usa estruturas de repetição ou decisão (conforme solicitado).
    - Comentários explicativos inclusos para facilitar a leitura.
*/

#include <stdio.h>

int main(void) {
    /* --- Variáveis da Carta 1 --- */
    char estado1;            
    char codigo1[5];         
    char nome1[100];         
    int populacao1;          
    float area1;             
    float pib1;              
    int pontos1;             

    /* --- Variáveis da Carta 2 --- */
    char estado2;
    char codigo2[5];
    char nome2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    /* Instruções iniciais */
    printf("Cadastro de Cartas - Super Trunfo (2 cartas)\n");
    printf("Informe os dados solicitados para cada carta.\n\n");

    /* -------- Carta 1 -------- */
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01): ");
    scanf(" %4s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %99[^\n]", nome1);

    printf("População (número inteiro): ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("\n");

    /* -------- Carta 2 -------- */
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: B02): ");
    scanf(" %4s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %99[^\n]", nome2);

    printf("População (número inteiro): ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    /* -------- Saída -------- */
    printf("\n----- Resultado: Cartas cadastradas -----\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    printf("\nFim do programa.\n");

    return 0;
}
