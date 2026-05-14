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
  float superPoder1;

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
  float superPoder2;

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

  //Calculos do Super Poder
  superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

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

  //Cauculo do Super Poder
  superPoder2 = (float)populacao2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

  //--------------------------------------------
  // SAIDA DE DADOS (EXIBIÇAO)
  //--------------------------------------------
  printf("\n======================================\n");

  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

  printf("\n"); // Linha em branco para separar as cartas visualmente

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

  //======================================
  //COMPARAÇÃO DAS CARTAS
  //======================================
  //Para todos os atributos, Carta1 vence se for MAIOR (resultado = 1).

  int venceuPop = populacao1 > populacao2;
  int venceuArea = area1 > area2;
  int venceuPIB = pib1 > pib2;
  int venceuPontos = pontosTuristicos1 > pontosTuristicos2;
  int venceuDensidade = densidadePopulacional1 < densidadePopulacional2; // O menor Vence (RESULTADO = 0)
  int venceuPIBCapita = pibPerCapita1 > pibPerCapita2;
  int venceuSuperPoder = superPoder1 > superPoder2;

  // ==========================================
  // SAÍDA DE DADOS (Exibição dos Resultados)
  // ==========================================
  printf("\n=======================================\n");
  printf("         COMPARAÇÃO DE CARTAS          \n");
  printf("=======================================\n\n");

  // A fórmula (2 - resultado) exibe 1 quando o resultado é 1, e exibe 2 quando o resultado é 0.
  printf("População: Carta %d venceu (%d)\n", 2 - venceuPop, venceuPop);
  printf("Área: Carta %d venceu (%d)\n", 2 - venceuArea, venceuArea);
  printf("PIB: Carta %d venceu (%d)\n", 2 - venceuPIB, venceuPIB);
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", 2 - venceuPontos, venceuPontos);
  printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - venceuDensidade, venceuDensidade);
  printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - venceuPIBCapita, venceuPIBCapita);
  printf("Super Poder: Carta %d venceu (%d)\n", 2 - venceuSuperPoder, venceuSuperPoder);

  
  return 0;

}