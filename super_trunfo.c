#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// Estrutura da carta
	
	char estado;  // Uma letra de A a H (Representa um dos oito estados).
	char codigo;  // A letra do estado seguida do número de 01, a 04 (ex: A01, B03).
	char cidade[4];  // O nome da cidade.
	int populacao;  // O número de habitantes da cidade.
	float area;  // Área da cidade em quilometros quadrados.
	float pib;  // O produto interno bruto da cidade.
	int pontos_turisticos;  // A quantidade de pontos turísticos na cidade.
	
	// Cadrastro da Carta 1

    prinft("Carta 1\n");
	
	printf("Digite a letra do estado: ");
	scanf("Estado: %c\n", &estado);
	
	printf("Digite o código da carta: ");
	scanf("Código: %s\n", &codigo);
	
	printf("Digite o nome da cidade: ");
	scanf("Cidade: %s\n", cidade);
	
	printf("Digite a população: ");
	scanf("População:%d\n", &populacao);
	
	printf("Digite a área (em km2): ");
	scanf("area:%e\n", area);
	
	printf("Digite o PIB (em bilhões): ");
	scanf("PIB: %.2f\n", &pib);
	
	printf("Digite o número de pontos_turísticos: ");
	scanf("Pontos Turísticos: %d\n", &pontos_turisticos);
	
	// Cadastro da Carta 2

    prinft("carta 2\n");
	
	printf("Digite a letra do estado: ");
	scanf("Estado: %c\n", &estado);
	
	printf("Digite o código da carta: ");
	scanf("Código: %d\n", &codigo);
	
	printf("Digite o nome da cidade: ");
	scanf("Cidade: %s\n", cidade);
	
	printf("Digite a população: ");
	scanf("População: %d\n", &populacao);
	
	printf("Digite a área (em km2): ");
	scanf("Área: %.2f\n", &area);
	
	printf("Digite o PIB (em bilhões): ");
	scanf("PIB: %.2f\n", &pib);
	
	printf("Digite o número de pontos turísticos: ");
	scanf("Pontos Turísticos: %d\n", &pontos_turisticos);
	
	return 0;
}