#include <stdio.h>
#include <stdlib.h>

struct bandas
{
    char nomeBanda[150];
    char tipoDeMusica[150];
    int numeroIntegrantes;
    int posicaoRank;
};

struct bandas Bandas[5];
   
int main()
{
    int i;

    for(i = 0; i < 5; i++){

    printf("\nInforme o nome da banda: ");
    scanf("%s", &Bandas[i].nomeBanda);

    printf("\nInforme tipo de musica tocada: ");
    scanf("%s", &Bandas[i].tipoDeMusica);

    printf("\nInforme o numero de integrantes: ");
    scanf("%d", &Bandas[i].numeroIntegrantes);

    printf("\nInforme o numero de posicao do ranking: ");
    scanf("%d", &Bandas[i].posicaoRank);

    printf("\n\n=====================================\n\n");
    }

    for ( i = 0; i < 5; i++){
        printf("\n\n===================OUTRO=================\n\n");
        printf("\n\nBandas Nome: %s", Bandas[i].nomeBanda);
        printf("\n\n=====================================\n\n");
        printf("\n\nBandas Tipo de Musica: %s", Bandas[i].tipoDeMusica);
        printf("\n\n=====================================\n\n");
        printf("\n\nBandas Numero de Integrantes: %d", Bandas[i].numeroIntegrantes);
        printf("\n\n=====================================\n\n");
        printf("\n\nBandas Rank dela: %d", Bandas[i].posicaoRank);
        printf("\n\n==================OUTRO===================\n\n");
    }
    

    return 0;
}
