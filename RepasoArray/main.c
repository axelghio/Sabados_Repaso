#include <stdio.h>
#include <stdlib.h>


int main()
{
    int sePudo=0;
    int LaEdad;
    if(dameEdadTres(&LaEdad,"dame tu edad ")==1)
    {
        printf("La edad es: %d", LaEdad);
    }
    else
    {
        printf("No se pudo.\n");
    }
    return 0;
}
