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


int inicializarAuto(eAuto lista[], int tam)
{
    int todoOk = 0;
        if(lista !=NULL && tam > 0)
        {
            for(int i=0; i<tam; i++)
            {
                lista[i].isEmpty = 1;
            }
           todoOk = 1;
        }
    return todoOk;
}



int buscarLibre(eAuto lista[], int tam)
{
    int libre = -1;
        if(lista != NULL && tam > 0)
        {
            for(int i=0; i < tam; i++)
            {
                if(lista[i].isEmpty)
                {
                    libre = i;
                    break;
                }
            }
        return libre;
        }
}




int altaAuto(eAuto lista[], int tam, int idAuto[], char idMarca[], char caja)
{
    int todoOk = 0;
    int indice;
    eAuto auxAuto;

      if(lista != NULL && tam > 0 && idAuto != NULL && idMarca != NULL && caja !=NULL)
      {
          indice = buscarLibre(lista, tam);
            if(indice == -1)
            {
                printf("No hay lugar en el sistema \n");
            }
            else
            {
                auxAuto.idAuto = idAuto;

                printf("Ingrese marca del vehiculo \n");
                fflush(stdin);
                gets(auxAuto.idMarca);
                while(auxAuto.idMarca != "")


                printf("Ingrese color del vehiculo \n");
                fflush(stdin);
                gets(auxAuto.idColor);


                printf("Ingresar m si su caja es manual o a si su caja es automatica \n");
                fflush(stdin);
                scanf("%c", &auxAuto.caja);


                auxAuto.isEmpty = 0;

                lista[indice] = auxAuto;
                todoOk = 1;
            }

      }
    return todoOk;
}



//buscar auto por id

int buscarAutoPorId(eAuto lista[], int tam, int id)
{
    int indice= -1;
        if(lista !=NULL && tam>0)
        {
            for(int i=0; i<tam; i++)
            {
                if(!lista[i].isEmpty && lista[i].idAuto == id )
                {
                indice = i;
                break;
                }
            }
        }
    return indice;
}

//
void mostrarAuto(eAuto aAuto)
{
    printf("   %d         %s         %s            %c  \n", aAuto.idAuto
                                                ,aAuto.idMarca
                                                ,aAuto.idColor
                                                ,aAuto.caja);
}


//mostrar autos
int mostrarAutos(eAuto lista[], int tam)
{
int todoOk=0;
int flag=1;

    if(lista !=NULL && tam > 0){
    system("cls");
    printf("---------------------------------------------------------\n");
    printf("    ***Listado de Autos  ***\n");
    printf("   Id        Marca        Color            Tipo caja  \n");
    printf("---------------------------------------------------------\n");
        for(int i=0; i < tam; i++){

            if(lista[i].isEmpty == 0){
                mostrarAuto(lista[i]);
                flag = 0;
                printf("\n\n");
            }
        }
        if(flag==1)
        {
            printf("No hay autos para mostrar");
        }
        todoOk= 1;
    }
return todoOk;
}


////// modificar auto
 int modificarAuto(eAuto lista[], int tam)
{
    int todoOk = 0;
    int id;
    int indice;
    char confirmar;
    char auxColor[20];
    char auxModelo[20];

        if(lista !=NULL && tam > 0)
        {
            system("cls");
            printf("     ***Modificar Auto***    \n\n");
            printf("Ingrese id ");
            scanf("%d", &id);

            indice = buscarAutoPorId(lista, tam, id);
                if(indice == -1)
                {
                    printf("No existe un empleado con el id %d \n", id);
                }
                else
                {
                    mostrarAuto(lista[indice]);

                    printf("Confirma modificacion?: ");
                    fflush(stdin);
                    scanf("%c", &confirmar);
                    if(confirmar == 's')
                    {
                        switch(menuModificacion())
                        {
                        case 1:
                            printf("Ingrese nuevo color ");
                            fflush(stdin);
                            gets(auxColor);
                            strcpy(lista[indice].idColor, auxColor);
                            break;
                        case 2:
                            printf("Ingrese nuevo modelo ");
                            fflush(stdin);
                            gets(auxModelo);
                            strcpy(lista[indice].idMarca, auxModelo);
                            break;
                        default:
                            printf("Opcion invalida!!!\n\n");
                            break;
                        }
                    todoOk = 1;
                    }
                    else
                    {
                        printf("Se ha cancelado la modificacion \n");
                    }
                }
        }
        return todoOk;
}


//baja auto

int bajarAuto(eAuto lista[], int tam)
{
    int todoOk=0;
    int indice;
    int id;
    char confirmar;
         if(lista !=NULL && tam > 0)
        {
            system("cls");
            printf("    ***Baja Auto***  \n\n");
            printf("Ingrese ID: ");
            scanf("%d", &id);

            indice = buscarAutoPorId(lista, tam, id);
            if(indice == -1)
            {
                printf("No existe un auto con el ID %d \n", id);
            }
            else
            {
               mostrarAuto(lista[indice]);
                printf("Confirma la baja?: ");
                fflush(stdin);
                scanf("%c",&confirmar);
                if(confirmar == 's')
                {
                    lista[indice].isEmpty = 1;
                    todoOk = 1;
                }
                else
                {
                    printf("Se ha cancelado la baja \n");
                }
            }
        }
    return todoOk;
}




