#include <stdio.h>

int main() {

  //Variaveis exclusivas para a Carta 1
  char estado1;
  char codigo1[4];
  char nomeCidade1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidadePopulacional1;
  float pibPerCapita1;
  
  //Variaveis exclusivas para a Carta 2
  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;
  
  //----------------------------------------------
  // ENTRADA DE DADOS: CARTA 1
  //----------------------------------------------
  printf("--- Casdatro da Carta 1 ---\n");

  printf("Estado (Letra de A a H): ");
  scanf(" %c", &estado1);

  printf("Codigo da Carta (ex: A01)");
  scanf("%s", codigo1);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade1);

  printf("Populaçao: ");
  scanf("%lu", &populacao1);

  printf("Area (em km²): ");
  scanf("%f", &area1);

  printf("PIB (digite apenas o numero, ex: 69928): ");
  scanf("%f", &pib1);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos1);

  //Calculos
  densidadePopulacional1 = (float)populacao1 / area1;
  pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1;

  //------------------------------------------------
  //ENTRADA DE DADOS: CARTA 2
  //------------------------------------------------
  printf("--- Cadastro da Carta 2 ---\n");

  printf("Estado (Letra de A a H): ");
  scanf(" %c", &estado2);
    
  printf("Código da Carta (ex: B02): ");
  scanf("%s", codigo2);
    
  printf("Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade2);
    
  printf("População: ");
  scanf("%lu", &populacao2);
    
  printf("Área (em km²): ");
  scanf("%f", &area2);
    
   printf("PIB (digite apenas o número, ex: 30050): ");
  scanf("%f", &pib2);
    
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos2);

  //Calculos
  densidadePopulacional2 = (float)populacao2 / area2;
  pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;

  // COMPARAÇÃO DAS CARTAS (Lógica com if / else)
  // Regra: A carta com a maior população vence.
    
    printf("\n====================================================\n");
    printf("        COMPARAÇÃO DE CARTAS (Atributo: População)    \n");
    printf("\n====================================================\n");

    // Exibindo os valores de forma clara para o usuário
    printf("Carta 1 - %s (%c): %lu habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu habitantes\n", nomeCidade2, estado2, populacao2);
    
    printf("\n"); // Linha em branco para separar o resultado

    // Estrutura de decisão para definir a vencedora
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Houve um empate entre as cidades!\n");
    }

  
  return 0;

}