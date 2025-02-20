#include <stdio.h>

int main() {
	
	// Estrutura da carta
	
	char estado;  // Uma letra de A a H (Representa um dos oito estados).
	char codigo[5];  // A letra do estado seguida do número de 01, a 04 (ex: A01, B03).
	char cidade[50];  // O nome da cidade.
	int populacao;  // O número de habitantes da cidade.
	float area;  // Área da cidade em quilometros quadrados.
	float pib;  // O produto interno bruto da cidade.
	int pontos_turisticos;  // A quantidade de pontos turísticos na cidade.
	char buffer[100];  // Buffer para armazenar a string lida.
	
	// Cadrastro da Carta 1

    printf("Carta 1\n");
	
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
	scanf("%d", &populacao);
	
	printf("Digite a área (em km2): \n");
	scanf("%f", &area);
	
	printf("Digite o PIB (em bilhões): \n");
	scanf("%f", &pib);
	
	printf("Digite o número de pontos_turísticos: \n");
	scanf("%d", &pontos_turisticos);

	// Imprimir a carta 1

	printf("Carta 1 \n - Estado: %c\n - Código: %s\n - Cidade: %s\n - População: %d\n", estado, codigo, cidade, populacao);
	printf("Área: %f\n km2 - PIB: %f\n bilhões - Pontos turísticos: %d\n", area, pib, pontos_turisticos);
	
	// Cadastro da Carta 2

    printf("carta 2\n");
	
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
	scanf("%d", &populacao);
	
	printf("Digite a área (em km2): \n");
	scanf("%f", &area);
	
	printf("Digite o PIB (em bilhões): \n");
	scanf("%f", &pib);
	
	printf("Digite o número de pontos turísticos: \n");
	scanf("%d", &pontos_turisticos);

	// Imprimir a carta 2

	printf("Carta 2 \n - Estado: %c\n - Código: %s\n - Cidade: %s\n n - População: %d\n", estado, codigo, cidade, populacao);
	printf("Área: %f\n km2 - PIB: %f\n bilhões - Pontos turísticos: %d\n", area, pib, pontos_turisticos);

	return 0;
}