#include <iostream>
#include "funciones.h"

using namespace std;


int main()
{
    const int TAM=6;
    int dados[TAM]= {};
    int opcion=1;
    while (opcion!=0){

        cout << "Ingrese la opcion correspondiente: " << endl;

        cin>>opcion;
        switch (opcion){
        case 1:
            cargarDadoManual(dados, TAM);
            break;
        case 2:
            mostrarValorDados(dados, TAM);
            break;
        case 3:
            escalera(dados, TAM);
            break;
        case 4:
            sexteto(dados, TAM);
            break;
        case 5:
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


