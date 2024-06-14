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
void puntajes(int dado[], int TAM);
bool escalera (int dado[], int TAM);
bool sexteto(int dado[], int TAM);
bool suma(int dado[], int TAM);



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

bool escalera (int dado[], int TAM)
{
    int esc, numesc;
    int contdif=0;
    for (esc=0; esc<6; esc++)
    {
        if (esc ==0)
        {
            numesc=dado[esc];
            contdif=1;

        }
        else if (esc!=0)

        {
            contdif=contdif+1;
        }

        if (contdif==6)
        {
            return true;
        }
        else
        {


            return false;

        }

        return false;
    }
}
    bool sexteto(int dado[], int TAM)
    {
        int sext, numdd;
        int contig=0;
        for (sext=0; sext<6; sext++)
        {
            if (sext==0)
            {
                numdd=dado[sext];
                contig++;
            }
            else if (dado[sext]==numdd)
            {
                numdd=dado[sext];
                contig++;
            }

            if (contig==6)
            {
                return true;
            }
            else
            {

                return false;
            }

        }


        return false;
    }

    bool suma(int dado[], int TAM)
    {

        int sum, numsum;
        int contig=0;
        for (sum=0; sum<6; sum++)
        {
            if (sum ==0)
            {
                numsum=dado[sum];
                contig++;
            }
            else if (dado[sum]!=numsum)
            {
                numsum=dado[sum];
                contig++;
            }
        }
        if (contig>1 && contig<6)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void puntajes(int dado[], int TAM)
    {

        bool esEscalera = escalera(dado, TAM);

        cout << "Este es el valor de esEscalera" << esEscalera << endl;

        if (esEscalera)
        {
            cout << "Escalera!" <<endl;

        }

        bool esSuma = suma(dado, TAM);

        if (esSuma)
        {
            cout << "Suma!" <<endl;

        }

        bool esSexteto = sexteto(dado, TAM);

        if (esSexteto==1)
        {

            cout << "Sexteto!" <<endl;
        }

    }


#endif // FUNCIONES_H_INCLUDED
