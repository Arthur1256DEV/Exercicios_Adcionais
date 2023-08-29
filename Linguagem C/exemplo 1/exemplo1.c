#include <stdio.h>

struct alunos
{
    char nome[25]; /*A informação*/
    struct alunos *prox; /*struct prox com ponteiro para a própria struct alunos*/
};
typedef struct alunos Alunos;

Alunos* inicializa (void){ //Inicializando a lista como nula (Uma das formas de se inicializar)
    return NULL;
}

//A utilização de ponteiros é indicada nos casos onde é preciso conhecer o tipo da variável que está sendo utilizada

//int *ptr; /* sendo um ponteiro do tipo inteiro*/
//float *ptr; /* sendo um ponteiro do tipo ponto flutuante*/
//char *ptr; /* sendo um ponteiro do tipo caracteres*/

int main(){
    int *p;
    p = (int *) malloc(sizeof(int)); //Nescessário informar o tipo de dado, o sizeof permite informr quantos bytes o tipo de elemento criado terá na memória

//Inicializando o ponto inicial na memória do computador
    Alunos *start; //Informando a criação de um ponteiro chamado start
    start = malloc (sizeof(Alunos)); //Alocando na memória a lista alunos
    start -> prox = NULL; //Informando que o inicio irá ter uma seta chamada próxima que vai receberá um valor nulo

    if (!p){
        printf("Memoria Insuficiente");
    }else{
        printf("Memoria Alocada");
    }

    return 0;
}

