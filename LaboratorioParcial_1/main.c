#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "fecha.h"
#include "marca.h"
#include "color.h"
#include "auto.h"
#include "servicio.h"
#include "trabajo.h"
#include "menuDeOpciones.h"

#define TAM 5



int main()
{
    char seguir = 's';
    int nextIdMarca = 1000;
    int nextIdAuto = 1;
    eAuto lista[TAM];
    eMarca listaMarcas[TAM];



    if(!inicializarAuto(lista, TAM))
    {
        printf("Ocurrio un problema al inicializar los autos");
    }



    do
    {
        switch(menuOpciones())
        {
        case 1:
            if(altaAuto(lista, TAM, nextIdAuto, lista->idMarca, lista->caja ))
            {
                printf("Alta exitosa \n");
                nextIdAuto++;
            }
            else
            {
                printf("Hubo un problema al realizar el alta");
            }
            break;
        case 2:
            if(modificarAuto(lista, TAM))
            {
                printf("modificacion exitosa!!!\n");
            }
            else
            {
               printf("Hubo un problema al modificar\n");
            }
            break;
        case 3:
            if(bajarAuto(lista, TAM))
            {
                printf("Baja exitosa!! \n");
            }
            else
            {
                printf("Ocurrio un problema al realizar la baja\n");
            }
            break;
        case 4:
            if(mostrarAutos(lista, TAM))
            {
                printf("Listado exitoso \n");
            }
            else
            {
                printf("Ocurrio un problema al mostrar");
            }
            break;
        case 5:
            if(mostrarMarcas(listaMarcas, TAM))
            {
                printf("Listado exitoso \n");
            }
            else
            {
                printf("Ocurrio un problema al mostrar");
            }
            break;
        case 6:
            printf("Listar Colores\n");
            break;
        case 7:
            printf("Listar Servicios\n");
            break;
        case 8:
            printf("Alta Trabajo\n");
            break;
        case 9:
            printf("Listar Trabajos\n");
            break;
        case 10:
            seguir = 'n';
            break;
        default:
            printf("Opcion invalida \n\n");
            break;
        }
        system("pause");

    }
    while(seguir == 's');


    return 0;
}




