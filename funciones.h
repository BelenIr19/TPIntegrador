#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>


using namespace std;

///Declaraciones

void cargarDadoManual (int dado[], int TAM);
void mostrarValorDados(int dado[], int TAM);
void puntajes(int dado[], int TAM);
void escalera (int dado[], int TAM);
void sexteto(int dado[], int TAM);
void suma(int dado[], int TAM);



/// Definiciones

void cargarDadoManual (int dado[], int TAM)
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
        cout<<"Elemento "<<i+1<<" del vector: "<<dado[i]<<endl;
    }
    system("pause");
}

void escalera (int dado[], int TAM)
{
    int esc, numesc;
    int puntaje=0, contdif=0;
    for (esc=0; esc<6; esc++)
    {
        if (esc ==0)
        {
            numesc=dado[esc];
            contdif++;
        }
        else if (dado[esc]!=numesc)
        {
            numesc=dado[esc];
            contdif++;
        }

        if (contdif==6){

            cout << "Escalera!" <<endl;
        }

    }

}

void sexteto(int dado[], int TAM){
 int sext, numdd;
    int puntaje=0, contig=0;
    for (sext=0; sext<6; sext++)
    {
        if (sext ==0)
        {
            numdd=dado[sext];
            contig++;
        }
        else if (dado[sext]==numdd)
        {
            numdd=dado[sext];
            contig++;
        }

        if (contig==6){

            cout << "Sexteto de "<< numdd <<endl;
        }

    }


}

void suma(int dado[], int TAM){

    int sum, numsum;
    int puntaje=0, contdif=0;
    for (sum=0; sum<6; sum++)
    {
        if (sum ==0)
        {
            numsum=dado[sum];
            contdif++;
        }
        else if (dado[sum]!=numsum)
        {
            numsum=dado[sum];
            contdif++;
        }

        if (contdif!=6 && contdif!=0){

            cout << "SUMA" <<endl;
        }

    }
}



#endif // FUNCIONES_H_INCLUDED
