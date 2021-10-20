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

void mostrarMarca(eMarca aMarca)
{
    {
    printf("  %d    %s\n" , aMarca.idMarca, aMarca.descripcion);
    }
}

////
int mostrarMarcas(eMarca lista[], int tam)
{
int todoOk=0;
int flag=1;

    if(lista !=NULL && tam > 0){
    system("cls");
    printf("---------------------------------------------------------\n");
    printf("    ***Listado de Marcas  ***\n");
    printf("   Id        Marca        Descripcion  \n");
    printf("---------------------------------------------------------\n");
        for(int i=0; i < tam; i++){

                mostrarMarca(lista[i]);
                flag = 0;
                printf("\n\n");

        }
        if(flag==1)
        {
            printf("No hay marcas para mostrar");
        }
        todoOk= 1;
    }
return todoOk;
}
