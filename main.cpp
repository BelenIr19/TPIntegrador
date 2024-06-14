#include <iostream>
#include "funciones.h"
#include <stdlib.h>
#include <time.h>
#include "rlutil.h"
#include "colors.h"

using namespace std;


int main()
{
    rlutil::setColor(rlutil::GREY);
    rlutil::setBackgroundColor(rlutil::LIGHTMAGENTA);
    srand(time(NULL));
    const int TAM=6;
    int dados[TAM]= {};
    int opcion=1;
    while (opcion!=0)
    {
       /// cout << RED     <<BG_ROSE<< "This text is RED!      " << RESET << endl;
        ///system("pause");


        mostrarMenu();

        cin>>opcion;
        switch (opcion)
        {
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
            puntajes(dados, TAM);
            system("pause");

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


