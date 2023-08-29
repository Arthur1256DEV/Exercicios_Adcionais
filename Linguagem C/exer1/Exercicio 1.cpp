#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
	float projetos[10];
	int i;
	
	struct {
		int numProject;
		float valor;
		char tipoDespesa; 		
	} fatura;
	
	for (i=0; i < 10; i++){
		projetos[i] = 0.0;
	}
	
	printf("Informe o Numero do Projeto: ");
	scanf("%d", &fatura.numProject);
	
	while (fatura.numProject != -1){
	
	printf("Informe o Valor Que Deseja Colocar: ");
	scanf("%f", &fatura.valor);
	
	printf("Informe o Tipo da Despesa (P)Positiva (N)Negativa: ");
	scanf("%s", &fatura.tipoDespesa);
	
	if (fatura.tipoDespesa == 'p' || fatura.tipoDespesa == 'P'){
		
		projetos[fatura.numProject] = projetos[fatura.numProject] + fatura.valor;
		
	} else {
		
		if (fatura.tipoDespesa == 'n' || fatura.tipoDespesa == 'N'){
			projetos[fatura.numProject] = projetos[fatura.numProject] - fatura.valor;
		}
		
		else {
			printf("Tipo Inválido !!");
		}
	}
	
	printf("\n\nDigite o numero do projeto: ");
	scanf("%d", &fatura.numProject);
	
	}
	
	for (i=0; i < 10; i++){
		
		printf("\nSaldo do projeto %d = %.2f",i, projetos[i]);
		
	}
	return 0;
}
