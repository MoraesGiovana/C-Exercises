//Esse e um codigo que ira receber um nome e imprimir as 4 primeiras letras desse nome
#include <stdio.h>
int main()
{
    printf("Voce deseja testar que exercicios com nomes?\n");
    printf("1. imprimir as 4 primeiras letras do nome\n");
    printf("2. imprimir as letras em posicoees impar do nome\n");
    char nome[20];
    int ex = scanf("%d",&ex);
    scanf("%s",nome);
    switch(ex)
    {
        case 1:
            for(int i = 0; i<4;i++){
                printf("%c",nome[i]);
            }
        break;

        case 2:
            for(int i = 0; i < 6 ; i++){
                if(1 == i % 2){
                    printf("%c",nome[i]);
                }
//nao terminei
            }
        break;
        default :
        printf ("Valor invalido!\n");
    }

}
/*Forma de ler e imprimir um nome, nao e preciso E comercial e nem de for, o nome e String
    char nome[10];
    scanf("%s",nome);
    printf("%s",nome);*/