#include <stdio.h>

int main() {

	// Estrutura da carta
	
	char estado;  // Uma letra de A a H (Representa um dos oito estados).
	char codigo[5];  // A letra do estado seguida do número de 01, a 04 (ex: A01, B03).
	char cidade[50];  // O nome da cidade.
	unsigned  long int populacao1, populacao2;  // O número de habitantes da cidade.
	float area1, area2; // Área da cidade em quilometros quadrados.
	float pib1, pib2;  // O produto interno bruto da cidade.
	int pontos_turisticos1, pontos_turisticos2;  // A quantidade de pontos turísticos na cidade.
	char buffer[100];  // Buffer para armazenar a string lida.
	float densidade_populacional1, densidade_populacional2;  // Densidade_populacional = populacao / area.
	float pib_per_capita1 = (float) populacao1 / pib1;  // PIB per capita = pib / populacao.
	float pib_per_capita2 = (float) populacao2 / pib2;  // PIB per capita = pib / populacao.
	float SuperPoder1, SuperPoder2;  // SuperPoder = (populacao + area + pib + pontos_turisticos + pib_per_capita +  densidade_populacional invertida para comparação).
	int carta1 = {"populacao,area,pib,pontos_turisticos,pib_per_capita,densidade_populacional,SuperPoder"};
    int carta2 = {"populacao,area,pib,pontos_turistios,pib_per_capita,densidade_populacional,SuperPoder"};
    char *resultado[2] = {"Carta 2 venceu (0)", "Carta 1 venceu (1)"};

	// Cadastro da Carta 1

    printf("Carta 1: \n");
	
	printf("Digite a letra do estado: \n");
	scanf(" %c",&estado);

	printf("Digite o código da carta: \n");
	scanf("%s", codigo);

	fgets(cidade, 50, stdin);
	printf("Digite o nome da cidade: \n");
	scanf("%[^\n]s", cidade);
	//scanf("%s", cidade);
	//scanf("%[^\n]s", buffer);
	//strcpy(cidade, buffer);
	//cidade[strcspn(cidade, "\n")] = 0;
	
	printf("Digite a população: \n");
	scanf("%lu", &populacao1);
	
	printf("Digite a área(em km²): \n");
	scanf("%f", &area1);
	
	printf("Digite o PIB: \n");
	scanf("%f", &pib1);

	printf("Digite o numero de pontos turísticos: \n");
	scanf("%d", &pontos_turisticos1);

	// Calculo da densidade populacional e do PIB per capita

	densidade_populacional1 = populacao1 / area1;

	pib_per_capita1 = populacao1  / pib1;

	// Calculo do Super Poder

	SuperPoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);

	// Comparação das cartas

	(populacao1 > populacao2);
	( area1 > area2);
	( pib1 > pib2);
	(pontos_turisticos1 > pontos_turisticos2);
	(pib_per_capita1 > pib_per_capita2);
	(1 / densidade_populacional1 < (1 / densidade_populacional2));
	( SuperPoder1 > SuperPoder2);

	// Imprimir a carta 1

	printf("Carta 1 \n - Estado: %c\n - Código: %s\n - Cidade: %s\n ", estado, codigo, cidade);
	printf("- População: %lu\n - Área: %f km²\n - PIB: %f bilhões de reais\n", populacao1, area1, pib1);
	printf("- Pontos turísticos: %d\n - Desidade populacional: %.2f hab/km²\n - PIB per capita: %.2f reais/hab\n", pontos_turisticos1, densidade_populacional1, pib_per_capita1);

	printf("Super Poder: %.2f\n", SuperPoder1);



	// Cadastro da Carta 2

    printf("Carta 2: \n");
	
	printf("Digite a letra do estado: \n");
	scanf(" %c", &estado);
	
	printf("Digite o código da carta: \n");
	scanf("%s", codigo);
	
	fgets(cidade, 50, stdin);
	printf("Digite o nome da cidade: \n");
	scanf("%[^\n]s", cidade);
	//scanf("%s", cidade);
	//scanf("%[^\n]s", buffer);
	//strcpy(cidade, buffer);
	//cidade[strcspn(cidade, "\n")] = 0;
	
	printf("Digite a população: \n");
	scanf("%lu", &populacao2);
	
	printf("Digite a área (em km²): \n");
	scanf("%f", &area2);

	printf("Digite o PIB (em bilhões): \n");
	scanf("%f", &pib2);
	
	printf("Digite o número de pontos turísticos: \n");
	scanf("%d", &pontos_turisticos2);

	// calculo da densidade populacional e do PIB per capita

	densidade_populacional2 = populacao2 / area2;

	pib_per_capita2 = populacao2 / pib2;

	// Calculo do Super Poder

	SuperPoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

	// Comparar as cartas 

	(populacao1 > populacao2);
	( area1 > area2);
	( pib1 > pib2);
	(pontos_turisticos1 > pontos_turisticos2);
	(pib_per_capita1 > pib_per_capita2);
	(1 / densidade_populacional1 < (1 / densidade_populacional2));
	( SuperPoder1 > SuperPoder2);

	// Imprimir a carta 2

	printf("Carta 2 \n - Estado: %c\n - Código: %s\n - Cidade: %s\n", estado, codigo, cidade);
	printf("-População: %lu\n - Área: %f km²\n - PIB: %f bilhões de reais\n", populacao2, area2, pib2);
	printf("-Pontos turísticos: %d\n - Desidade populacional: %.2f hab/km²\n -PIB per capita: %.2f Reais/hab\n", pontos_turisticos2, densidade_populacional2, pib_per_capita2);

	printf("Super Poder: %.2f\n", SuperPoder2);

	// Resultado da comparação

	printf("Comparação das cartas: \n");
    printf("População: %s\n", resultado[populacao1 > populacao2]);
    printf("Área: %s\n", resultado[area1 > area2]);
    printf("PIB: %s\n", resultado[pib1 > pib2]);
    printf("Pontos Turísticos: %s\n", resultado[pontos_turisticos1 > pontos_turisticos2]);
    printf("PIB per capita: %s\n", resultado[pib_per_capita1 > pib_per_capita2]);
    printf("Densidade Populacional: %s\n", resultado[densidade_populacional1 < densidade_populacional2]);
    printf("Super Poder: %s\n", resultado[SuperPoder1 > SuperPoder2]);

	return 0;
}