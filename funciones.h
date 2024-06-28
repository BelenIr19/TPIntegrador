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
//
int cargarVectorRepetidos(int dado[], int TAM);
int Cuenta(int dados[], int TAM, int num);
void Elimina(int dados[], int TAM, int num);
//


int combinacion (int dado[], int rep [], int TAM);
bool escalera(int rep[], int TAM);
bool suma(int rep[], int TAM);
bool sexteto(int rep[], int TAM);
bool sextetoSeis(int dado[], int TAM);
void totalCombinaciones (int dado[], int rep[], int TAM);

int puntajeSuma (int dado[], int TAM);
int puntajeEscalera (int dado[],int TAM);
int puntajeSexteto (int dado[], int TAM);
int puntajeSextetoSeis (int dado[], int TAM);







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

    //bpDado(dado, TAM);

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
    //bpDado(dado, TAM);
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
    // cout << "El numero "<<l<<" se repite "<<x<<" veces." << endl;
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

int cargarVectorRepetidos(int dado[], int TAM)
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

        }
    }

        totalCombinaciones(dado, rep, tam);
        Elimina(dado, tam, num);


  //totalCombinaciones(dado, rep, tam);

    /*cout << "Muestra vector repetidos"<<endl;

    for (i=0; i<tam; i++)
    {
         cout << "Valor de posicion "<<i+1<< " es : "<<rep[i]<<endl;
    }*/
    return 0;
}

int combinacion (int dado [], int rep[], int TAM)
{

    //cout <<"ingresa a escalera"<<endl;

    escalera(rep, TAM);

    // cout <<"ingresa a suma"<<endl;
    if (suma(rep, TAM)){
        puntajeSuma(dado, TAM);
    }

    //cout <<"ingresa a sexteto"<<endl;
    if (sexteto(rep, TAM)){
        puntajeSexteto(dado, TAM);
    }

    //cout <<"ingresa a sexteto de 6"<<endl;

    return 0;
}

bool escalera(int rep[], int TAM)
{

    int i;
    int acu=0;
    for (i=0; i<TAM; i++)
    {

        if (rep[i]==1)
        {

            acu=acu+1;
            // cout <<"acumula esc"<< endl;

        }
    }

    //cout << "valor de acu en esc: "<<acu<<endl;

    if (acu==6)
    {

        cout <<"Escalera! Ha ganado la partida. "<< endl;
        return true;

    }
    else
    {
        return false;
    }
    return false;
}

bool suma(int rep[], int TAM)
{

    int i;
    int acu=0;
    for (i=0; i<TAM; i++)
    {

        if (rep[i]==1)
        {

            acu=acu+1;
            //cout <<"acumula suma"<< endl;

        }
    }

    //cout << "valor de acu en suma: "<<acu<<endl;

    if (acu!=6&&acu!=0)
    {

        cout <<"Suma!"<< endl;

        return true;

    }
    else
    {
        return false;
    }
    return false;

}

bool sexteto(int rep[], int TAM)
{
    int i;
    int acu=0;
    for (i=0; i<TAM; i++)
    {

        if (rep[i]==6)
        {

            acu=acu+1;
            //cout <<"acumula sexteto"<< endl;

        }
    }

    //cout << "valor de acu en sexteto: "<<acu<<endl;

    if (acu==6)
    {

        cout <<"Sexteto!"<< endl;
        return true;
    }
    else
    {
        return false;
    }
    return false;
}

bool sextetoSeis(int dado[], int TAM)
{
    int i;
    int acu=0;
    for (i=0; i<TAM; i++)
    {

        if (dado[i]==6)
        {

            acu=acu+1;
        }
        //cout <<"acu sext 6 "<< acu << endl;
    }

    if (acu==6)
    {

        //cout <<"Sexteto de seis!"<< endl;
        return true;

    }
    else
    {
        return false;
    }
    return false;

}

void totalCombinaciones (int dado[], int rep[], int TAM)
{

    bool six=sextetoSeis(dado, TAM);

    if (six==true)
    {
        cout <<"Sexteto de seis!"<< endl;
        puntajeSextetoSeis(dado,TAM);
    }
    else
    {
        combinacion(dado, rep, TAM);
    }
}
int puntajeSuma (int dado[], int TAM)
{

    int i;
    int acuSuma=0;
    for (i=0; i<TAM; i++){

        acuSuma=acuSuma+dado[i];
    }

    cout << "Puntaje Suma: "<<acuSuma<<endl;
    return 0;
}

int puntajeEscalera (int dado[], int TAM)
{

}

int puntajeSexteto (int dado[], int TAM)
{
    int i, num, total;
    for (i=0; i<1; i++){
        num=dado[i];
    }
    //cout <<"num "<<num<<endl;
    total=num*10;
    //cout <<"total "<<total<<endl;
    cout << "Puntaje Sexteto de "<<num<< ": "<<total<<endl;

}

int puntajeSextetoSeis (int dado[],int TAM)
{

}




#endif // FUNCIONES_H_INCLUDED
