#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Declaração das váriaveis:
    int palpite;
    int repeticoes;
    int i;

    // Sorteio dos dados:
    srand(time(NULL));
    int dado1 = 1 + (rand() % 6);
    int dado2 = 1 + (rand() % 6);

    // Soma do sorteio dos dois dados.
    int soma = dado2 + dado1;

    
    printf("Digite quantas vezes quer repetir: \n");
    scanf("%d", &repeticoes);

    for( i=0 ; i < repeticoes ; i = i + 1){

        printf("Digite seu palpite: \n");
        scanf("%d", &palpite);


        if (palpite == soma) {
            printf("Você acertou o palpite. \n");
            break;
        }
        else {
            printf("Você errou o palpite. \n");
        }
    }

    printf("A soma era %d \n", soma);

    return 0;
}
