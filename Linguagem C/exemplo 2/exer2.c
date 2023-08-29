#include <stdio.h>

float volume(){
    float base, largura, altura, result;

    printf("Informe a Base: ");
    scanf("%f", &base);

    printf("Informe a Largura: ");
    scanf("%f", &largura);

    printf("Informe a Altura: ");
    scanf("%f", &altura);

    result = base * largura * altura;
    return result;
}

float peso(){
    float peso, constante, vol;
    vol = volume();

    constante = 25;
    peso = vol * constante;

    if(peso <= 500){
        printf("Tera que utilizar o guindaste G1");

    } else if (peso > 500 && peso <= 1500){
        printf("Tera que utilizar o guindaste G2");

    } else{
        printf("Tera que utilizar o guindaste G3");
    }
    
    return 0;
}


int main(){
    peso();

    return 0;
}