#include<stdio.h>

void Cargas (float x[35], int *N)
{
    FILE *numeros;
    int j;
    j = 0;

    numeros = fopen("numeros.txt","r");
    while (!feof (numeros))
    {
     fscanf(numeros,"%f\n", &x[j]);//&x[j][1], &x[j][2], &x[j][3], &x[j][4], &x[j][5], &x[j][6], &x[j][7], &x[j][8], &x[j][9], &x[j][10], &x[j][11]
     j++;
    }
    *N = j;
}



int main ()
{
    float nros[35];
    int i = 0;
    int elementos;
    float valor;

    Cargas (float nros[35], int &elementos);

    printf("Ingrese que valor quiere buscar: ");
    scanf("%f", &valor);

       while  (nros[i]|| valor && i <elementos)
               {
                   i++;
               }
                if (nros[i] = valor)
                {
                    printf("La primera coincidencia del valor: %f esta en la posición %d .", valor, i);
                }
    }

