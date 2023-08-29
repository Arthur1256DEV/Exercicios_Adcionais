#include <iostream>
#include <math.h>

int soma(int number1, int number2){
	return number1 + number2;
}

double notavel(double number1, double number2){
	return (number1 * number2) * pow((number1 * number2), 2);
}

int quadradoFNum(int number1){
	return pow(number1, 2);
}

float raiz(float number1, float number2){
	return sqrt((pow(number1, 2) + pow(number2, 2)));
}

float seno(float number1, float number2){
	return sin((number1 - number2));
}

int modulo(int number1){
	return abs(number1);
}

int main(int argc, char** argv) {
	char opcao;
	int number1, number2;
	double resultado;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &number1);
	
	printf("Informe o segundo numero: ");
	scanf("%d", &number2);
	
	printf("\nInforme o que deseja fazer: \n");
	
	printf("(a) A soma dos numeros \n");
	printf("(b) O produto do primeiro numero pelo quadrado do segundo\n");
	printf("(c) O quadrado do primeiro numero\n");
	printf("(d) A raiz quadrada da soma dos quadrados\n");
	printf("(e) O seno da diferença do primeiro numero pelo segundo\n");
	printf("(f) O modulo do primeiro numero\n");

	printf("\nInforme aqui, qual opcao deseja: ");
	scanf("%s", &opcao);
	
	switch(opcao){
		case 'a':
			resultado = soma(number1, number2);
			printf("O resultado da soma foi: %lf", resultado);
			break;
			
		case 'b':
			printf("claro");
			break;
			
		case 'c':
			printf("claro");
			break;
			
		case 'd':
			printf("Oi");
			break;
			
		case 'e':
			printf("claro");
			break;
			
		case 'f':
			printf("claro");
			break;
			
		default:
			printf("\t Informe uma letra correta!\n\n");
	}
	return 0;
}
