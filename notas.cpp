/**
 *  
 * Programa control de IMC
 * 
 * DESCRIPCION:
 * Diseñar un programa que capture los datos de pacientes:
 *    -  Nombre
 *    -  Estatura
 *    -  Peso KG
 * 
 * FUNCIONES:
 * Mostrar pacientes
 * Determinar los pacientes que tiene tendecia a sobrepeso y los que estan
 * en obesidad
 * Generar un mensaje invitandolos a una charla de vida sana 
 * 
 * */

#include <iostream>
using namespace std;
struct pacientes {
    char nombres[100];
    float estatura;
    float peso;
};

pacientes *cab, *aux, *aux2;

int registrar(){};
int mostrar(){};
int imc(){};

int main(){
    int opcion=0;
    do {
        cout<<"Menu"<<endl<<"1. Registrar"<<endl<<"2. Mostrar"<<endl<<"3. IMC"<<"5. Salir"<<endl;
        cin>>opcion;
        switch (opcion)
        {
        case 1: registrar(); break;
        case 2: mostrar(); break;
        case 3: imc(); break;        
        }
    } while (opcion!=5);

}
