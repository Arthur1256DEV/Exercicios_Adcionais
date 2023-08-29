#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number;
	int i, result;
	
	printf("Informe o número que deseja saber a tabuada de 0 a 9: ");
	scanf("%d", &number);
	
	for(i=9; i>0; i--){
		
		result = number * i;
		printf("\n resultado da tabuada de: %d * %d = %d", number, i, result);	
	}
	return 0;
}
