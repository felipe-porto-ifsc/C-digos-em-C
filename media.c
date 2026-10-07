#include <stdio.h>

float media(int n1, int n2)
{
    float media = ( n1 + n2) / 2;
    printf("%f", media);

    return media;
}


int main ()
{
    int n1;
    int n2;

    scanf("%d", &n1);
    scanf("%d", &n2);

    media (n1, n2);



    return 0;
}
#include <stdio.h>

float celsius_for_fahrenheit(float celsius){
    float fahrenheit = ((celsius * 9 / 5) + 32);
    return fahrenheit;
}

int main ()
{
    float celsius, resultado;
    scanf("%f", &celsius);

    resultado = celsius_for_fahrenheit(celsius);
    printf("%.2f \n", resultado);

    return 0;
}

#include <stdio.h>
#include <math.h>

    float hipotenusa(float cateto_a, float cateto_o) {
        float hipotenusa = sqrt((cateto_a * cateto_a) + (cateto_o * cateto_o));
        return hipotenusa;
    }

int main () 
{
    float cateto_a, cateto_o;

    scanf("%f", &cateto_a);
    scanf("%f", &cateto_o);

    float resultado = hipotenusa(cateto_a, cateto_o);

    printf("%2.f\n", resultado);

    return 0;
}

#include <stdio.h>

float maior_3n(float num1, float num2, float num3){
    float maior;
    if (num1 > num2 && num1 > num3) {
        maior = num1;
    }
    else if (num2 > num3) {
        maior = num2;
    }
    else {
        maior = num3;
    }
    return maior;
    
}

int main ()
{
    float num1, num2, num3;

    printf("Digite o primeiro número: \n");
    scanf("%f", &num1);

    printf("Digite o terceiro número: \n");
    scanf("%f", &num2);

    printf("Digite o segundo número: \n");
    scanf("%f", &num3);

    printf("Resultado: ");
    float resultado = maior_3n(num1, num2, num3);

    printf("%.2f\n", resultado);

    return 0;
}
