#ifndef AUTO_H_INCLUDED
#define AUTO_H_INCLUDED

typedef struct{

    int idAuto;
    char idMarca[20];
    char idColor[20];
    char caja;
    int isEmpty;
}eAuto;

#endif // AUTO_H_INCLUDED

int inicializarAuto(eAuto lista[], int tam);

////
int buscarLibre(eAuto list[], int tam);

/////////
int altaAuto(eAuto lista[], int tam, int idAuto[], char idMarca[], char caja);

///
int buscarAutoPorId(eAuto lista[], int tam, int id);

//////
int modificarAuto(eAuto lista[], int tam);

////
void mostrarAuto(eAuto aAuto);

//
int mostrarAutos(eAuto lista[], int tam);

//
int bajarAuto(eAuto lista[], int tam);


