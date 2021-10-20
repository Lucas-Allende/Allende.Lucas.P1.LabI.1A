#ifndef MARCA_H_INCLUDED
#define MARCA_H_INCLUDED




typedef struct{

    int idMarca;
    char descripcion[];
}eMarca;


#endif // MARCA_H_INCLUDED

void mostrarMarca(eMarca aMarca);

int mostrarMarcas(eMarca lista[], int tam);
