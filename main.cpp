#include <iostream>
#include "funciones.h"
#include <stdlib.h>
#include <time.h>
#include "rlutil.h"

using namespace std;


int main()
{
    setlocale(LC_ALL,"spanish");
    srand(time(NULL));
    const int TAM=6;
    int dados[TAM]= {};
    int opcion=1;
    rlutil::setColor(rlutil::MAGENTA);
    rlutil::setBackgroundColor(rlutil::GREY);
    while (opcion!=0){

        mostrarMenu();

        cin>>opcion;
        switch (opcion){
        case 1:
            cargarDadoManual(dados, TAM);
            break;
        case 2:
            cargarDadoAleatorio(dados, TAM);
            break;
        case 3:
            mostrarValorDados(dados, TAM);
            break;
        case 4:
            escalera(dados, TAM);
            break;
        case 5:
            sexteto(dados, TAM);
            break;
        case 6:
            suma(dados, TAM);
            break;

        case 0:
            cout<<"Saliendo del programa..."<<endl;
            break;

        default:
            cout<<"Ingrese una opcion correcta."<<endl;
            system("pause");
            break;
        }

    }


    return 0;
}


