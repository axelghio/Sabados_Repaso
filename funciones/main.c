#include <stdio.h>
#include <stdlib.h>
//1er pedinumeros y mostrar
//2do funcion sacar promedio (float(int suma, int cant)).
//3ro funcion sacar aprobacion (int notaMinima).

int pidoNota();//esto es el prototipo.

float sacarPromedio(int sumaNotas, int cantidadNotas);

/** \brief
 *  esta funcion retorna 1 si aprobo la materia.
 *  retorna 0 si el alumno no aprobo la materia.
 * \param notaMinima int
 *  la nota minima para aprobar la materia.
 * \param nota int
 *   nota que se saco el alumno.
 * \return int
 *  0 para no aprobo.
 *  1 para abrobar.
 */
int sacarAprobacion(int notaMinima, int nota);

/** \brief
 *  CONSIGNA.
 *  ingresar la nota de 5 alumnos (entre 0 y 10).
 *  informar cuantos aprobaron.
 *  el promedio de notas de todos.
 *  el promedio de notas de los que no aprobaron.
 */
 int funcionClase1Repaso();
//int claseUnoRepaso();
int main()
{
    funcionClase1Repaso();
}

//En la funcion procesa la informacion pero no muestra nada por consola.
//solo lo returna en variable.
int pidoNota()//Implementacion.
{
    //declaramos variable/variables
    int nota;
    //proceso de validacion.
    {
       do{//hacer.
        //pedir numero.
        fflush(stdin);
        printf("Ingrese una nota: ");
        scanf("%d",&nota);

    }while(nota< 0 || nota>10);//hasta que miNumero este adentro del 0 y el 10;
    }
    return nota;//retornamos el numero.
}
float sacarPromedio(int sumaNotas, int cantidadNotas)
{
    return (float)sumaNotas/cantidadNotas;
}
int sacarAprobacion(int notaMinima, int nota)
{
    int retorno;
    if(nota>=notaMinima)
    {
        retorno=1;
    }
    else
    {
        retorno=0;
    }
    return retorno;
}
int funcionClase1Repaso()
{
    int notaIngresada;
    float promedio;
    float promedioDesaprobados;

    int cantidadNotas = 0;
    int sumaNotas=0;
    int sumaNotasDesaprobados=0;
    int cantidadAprobados = 0;
    int cantidadDesaprobados = 0;

    int i;
    for(i=0;i<5;i++)
    {
        notaIngresada = pidoNota();//notaIngresada es la nota que me manda la funcion pido nota
        sumaNotas = notaIngresada + sumaNotas;
        cantidadNotas++;
        int estaAprobado;
        estaAprobado = sacarAprobacion(6, notaIngresada);
        if(estaAprobado==1)
        {
            cantidadAprobados++;
        }
        else
        {
            sumaNotasDesaprobados = notaIngresada + sumaNotasDesaprobados;
            cantidadDesaprobados++;
        }
    }
    promedio = sacarPromedio(sumaNotas,cantidadNotas);
    promedioDesaprobados = sacarPromedio(sumaNotasDesaprobados, cantidadDesaprobados);

    printf("La cantidad de aprobados son: %d\n", cantidadAprobados);
    printf("El promedio de todas las notas es: '%f'\n", promedio);
    printf("El promedio de las notas desaprobadas es: %f\n", promedioDesaprobados);
    return 0;
}
