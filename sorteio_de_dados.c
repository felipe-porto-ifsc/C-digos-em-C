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
    int soma = dado1 + dado2;

    // Números de repetições.
    printf("Digite quantas vezes quer repetir: \n");
    scanf("%d", &repeticoes);

    // Looping dos palpites.
    for( i=0 ; i < repeticoes ; i = i + 1){

        // Palpite:
        printf("Digite seu palpite: \n");
        scanf("%d", &palpite);

        // Verificação do palpite:
        if (palpite == soma) {
            // Se acertou, acaba o código.
            printf("Você acertou o palpite. \n");
            break;
        }
        else {
            // Se errou, tenta mais uma vez ou encerra.
            printf("Você errou o palpite. \n");
        }
    }

    // Mostrando o resultado para o usuàrio:
    printf("A soma era %d \n", soma);

    return 0;
}
