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
	
	// Cadrastro da Carta 1

    printf("Carta 1\n");
	
	printf("Digite a letra do estado: ");
	scanf("%c", &estado);

	printf("Digite o código da carta: ");
	scanf("%s", codigo);
	
	printf("Digite o nome da cidade: ");
	scanf("%s", cidade);
	
	printf("Digite a população: ");
	scanf("%d", &populacao);
	
	printf("Digite a área (em km2): ");
	scanf("%f", &area);
	
	printf("Digite o PIB (em bilhões): ");
	scanf("%f", &pib);
	
	printf("Digite o número de pontos_turísticos: ");
	scanf("%d", &pontos_turisticos);
	
	// Cadastro da Carta 2

    printf("carta 2\n");
	
	printf("Digite a letra do estado: ");
	scanf("%c", &estado);
	
	printf("Digite o código da carta: ");
	scanf("%s", codigo);
	
	printf("Digite o nome da cidade: ");
	scanf("%s", cidade);
	
	printf("Digite a população: ");
	scanf("%d", &populacao);
	
	printf("Digite a área (em km2): ");
	scanf("%f", &area);
	
	printf("Digite o PIB (em bilhões): ");
	scanf("%f", &pib);
	
	printf("Digite o número de pontos turísticos: ");
	scanf("%d", &pontos_turisticos);
	
	return 0;
}