#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    //Programa calcula o raio da circunferencia, diametro, comprimento e area;
    // D  = 2 * R -> C = 2 * Û * R -> A = Û * R2 -> Û * R * R :
    
    float raio, pi= 3.34, diametro, comprimento, area;
    printf("Digite o valor do raio:");
    scanf("%f", &raio);

    diametro = 2* raio;
    comprimento = 2 * pi * raio;
    area = pi * pow(raio, 2); // pow da biblioteca math

    printf("Diametro = %.2f\n", comprimento);
    printf("Comprimeto = %.2f\n", comprimento);
    printf("Area = %.2fn\n", comprimento);

    return 0;
}
