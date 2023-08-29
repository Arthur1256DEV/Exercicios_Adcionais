#include <stdio.h>
#include <stdlib.h>
#include <math.h>
		
float CalculaArea(float largura, float altura){
		return largura * altura;
	}
	
float Lampada(int tipoComodo, float metragem){
		float quantidade;
		int potencia;
		
		switch(tipoComodo){
			case 0:
				potencia = 12;
				break;
				
			case 1:
				potencia = 15;
				break;
				
			case 2:
				potencia = 18;
				break;
				
			case 3:
				potencia = 20;
				break;
				
			case 4:
				potencia = 22;
				break;
				
			default:
				potencia = 0;
		}
		quantidade = metragem * potencia / 60;
		return quantidade;
	}	

int main(){

float nlampadas, tamanho;
	
	struct {
		
		float larg, alt;
		int tipo;

	} casa;
	
	printf ("\n\nDigite o tipo de comodo (0 ate 4): ");
	scanf("%d", &casa.tipo);
	
	while (casa.tipo != -1){
		
		printf ("\n\nInforme a largura do comodo: ");
		scanf("%f", &casa.larg);
		
		printf ("\n\nInforme a altura do comodo: ");
		scanf("%f", &casa.alt);
		
		if (casa.larg > 0 && casa.alt > 0){
			
			tamanho = CalculaArea(casa.larg, casa.alt);
			nlampadas = Lampada(casa.tipo, tamanho);
			
		} else {
			printf("Insira as Informações Corretamente!");
		}
		
		printf("\n\nPela Metragem de seu como voce ira precisa de %.0f lampadas.", ceil(nlampadas));
		printf("\n\nDigite o tipo de comodo (0 ate 4): ");
		scanf("%d", &casa.tipo);
	}
	return 0;
}
