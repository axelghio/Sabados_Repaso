#include <stdio.h>
#include <stdlib.h>

int main()
{/*
    int miEdad;
    while(pedirEdad(&miEdad)==0)
    {
        //nada.
    }
    printf("\nSu edad es: %d\n\n",miEdad);*/
    int sepudo;
    float res;
    sepudo = dividir(5,2,&res);
    if(sepudo==1)
    {
        printf("\nEl resultado es: %f",res);
    }
    else
    {
        printf("no se puede");
    }
    return 0;
}
