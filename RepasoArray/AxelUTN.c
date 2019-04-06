#include <stdio.h>
#include <stdint.h>

float sumar(float numeroX, float numeroY)
{
    float resultado;
    resultado = numeroX+numeroY;
    return resultado;
}
float restar(float numeroX, float numeroY)
{
    float resultado;
    resultado = numeroX-numeroY;
    return resultado;
}
float dividir(float numeroX, float numeroY)
{
    float resultado;
    if(numeroY == 0)
    {
        printf("\n\nNo se puede dividir por '0'\n\n");
    }
    else
    {
        resultado = numeroX/numeroY;
    }
    return resultado;
}
float multiplicar(float numeroX, float numeroY)
{
    float resultado;
    resultado = numeroX*numeroY;
    return resultado;
}
unsigned long factorial(int numero)
{
    int fact=1;
    int i;
    if(numero == 0)
    {
        printf("\n\nEl operando no puede ser '0'\n\n");
    }
    else
    {
        for(i=1;i<=numero;i++)
        fact=fact*i;
    }
        return fact;
}
int getData(int min, int max, int* dato, int intentos, char* tipoDato, char* mensaje, char* eMensaje)
{
    int aux;
    int contador;
    int ok = 0;

    printf("%s %s entre: %d y %d : ", mensaje, tipoDato, min, max);
    scanf("%d", &aux);

    while((aux<min || aux>max) && contador < intentos)
    {
        contador++;
        //fflush(stdin);

        if(contador == intentos)
        {
            break;
        }
        printf("%s %d y %d.\n\n", eMensaje, min, max);
        printf("%s %s entre: %d y %d : ", mensaje, tipoDato, min, max);
        scanf("%d", &aux);
    }
    if(contador < intentos)
    {
        *dato = aux;
        ok = 1;
    }
    return ok;
}
int getInt(char* mensaje)
{
    int aux;
    printf("%s",mensaje);
    scanf("%d",&aux);
    return aux;
}

float getFloat(char* mensaje)
{
    float aux;
    printf("%s",mensaje);
    scanf("%f",&aux);
    return aux;

}

char getChar(char* mensaje)
{
    fflush(stdin);
    char aux;
    printf("%s",mensaje);
    scanf("%c",&aux);
    return aux;
}
int dameEdad(int *edad, char *mensaje)
{
    int sePudo=0;
    int aux;
    printf(mensaje);
    sePudo=scanf("%d", &aux);
    if(sePudo==1)
    {
        *edad=aux;
    }
    return sePudo;
}
int dameEdadDos(int *edad, char *mensaje)
{
    int sePudo=1;
    char cadenaCargada[20];
    printf(mensaje);
    scanf("%s", cadenaCargada);

    //*edad=atoi(cadenaCargada);//atoi si se puede transforma una cadena en entero.

    return sePudo;
}
int dameEdadTres(int *edad, char *mensaje)
{
    int sePudo=0;
    int aux;
    char cadenaCargada[20];
    printf(mensaje);
    scanf("%s", cadenaCargada);
    for(int i = 0; i<20; i++)
    {
        if(cadenaCargada[i] < '0' || cadenaCargada[i]> '9')
        {
            sePudo = 0;
        }
        else
        {
            sePudo = 1;
        }
    }
    return sePudo;
}
