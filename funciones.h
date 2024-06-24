#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "rlutil.h"



using namespace std;

///Declaraciones

void mostrarMenu();
void cargarDadoManual(int dado[], int TAM);
void cargarDadoAleatorio(int dado[], int TAM);
void mostrarValorDados(int dado[], int TAM);
void cargarVectorRepetidos(int dado[], int TAM);
int Cuenta(int dados[], int TAM, int num);
void Elimina(int dados[], int TAM, int num);
int puntaje (int dados[], int TAM);
bool escalera(int dados[], int TAM);




/// Definiciones

void mostrarMenu()
{

    system("cls");
    cout<<" ---- Escalera o Cien ---- "<<endl;
    cout<<" 1 - Cargar Dado Manual "<<endl;
    cout<<" 2 - Cargar Dado Aleatorio "<<endl;
    cout<<" 3 - Mostrar Dado "<<endl;
    cout<<" 4 - Mostrar Puntaje" << endl;
    cout<<" 0 - Salir "<<endl;
    cout<<" Ingrese la opcion deseada: "<<endl;
}


void cargarDadoAleatorio(int dado[], int TAM)
{
    int i;
    for (i=0; i<TAM ; i++ )
    {
        dado[i]=rand()%6+1;
    }
    cout<<"Dado correctamente cargado con numeros aleatorios..."<<endl;

}


void cargarDadoManual(int dado[], int TAM)
{
    int i;
    for (i=0; i<TAM ; i++ )
    {
        cout<<"Ingrese el valor del dado numero "<<i+1<<": ";
        cin>>dado[i];
    }
    cout<<"Dado correctamente cargado..."<<endl;
}

void mostrarValorDados(int dado[], int TAM)
{

    int i;
    for (i=0; i<TAM ; i++ )
    {
        cout<<"Elemento "<<i+1<<" del dado: "<<dado[i]<<endl;
    }
    system("pause");
}

int Cuenta(int dados[], int TAM, int num)
{
    //cout << "ingresa a cuenta"<<endl;

    int x=0;
    int l, j;
    int tam=6;
    int rep[tam] {};
    for(j=0; j<TAM; j++)
    {
        if (num==dados[j])
        {
            /// acumulador de cuantas veces se repitio
            x++;
            /// numero analizado
            l=dados[j];

            //cout <<"carga rep con x"<<endl;
            rep[num]=x;
        }
    }
    cout << "El numero "<<l<<" se repite "<<x<<" veces." << endl;
    //cout << "rep: "<<rep[num]<<endl;
    return x;
}




/// erased tha numbers that have already been analysed
void Elimina(int dados[], int TAM, int num)
{
    //cout << "ingresa a elimina"<<endl;

    int i;
    for (i=0; i<TAM; i++)
    {
        if (num==dados[i])
        {
            dados[i]=0;
        }
    }
}


void cargarVectorRepetidos(int dado[], int TAM)
{

    const int tam=6;
    int rep[tam] {};
    int i, num;
    for (i=0; i<tam; i++)
    {
        num=dado[i];
        int res;
        if (num!=0)
        {
            res=Cuenta(dado, tam, num);
            rep[i]=res;
            Elimina(dado, tam, num);
        }
    }

    //cout << "Muestra vector repetidos"<<endl;

    for (i=0; i<tam; i++)
    {
        // cout << "Valor de posicion "<<i+1<< " es : "<<rep[i]<<endl;
    }
}

int puntaje (int dados[], int TAM)
{
    int stair=escalera(dados, TAM);
    if (stair==true)
    {

        cout <<"Escalera! Ha ganado la partida. "<< endl;
    }

return 0;
}




bool escalera(int dados[], int TAM)
{
    cargarVectorRepetidos(dados, TAM);
    int i;
    int esca=0;
    int rep[TAM]{};
    for (i=0; i<TAM; i++)
    {

        if (rep[i]==1)
            esca++;
    }

    if (esca==6)
    {
        return true;
    }
    else
    {
        return false;
    }

    return false;
}





#endif // FUNCIONES_H_INCLUDED
