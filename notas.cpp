/**
 *  
 * Programa control de IMC (5)
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
    pacientes *sig;
};

pacientes *cab, *aux, *aux2;

int registrar(){
    aux = (struct pacientes *) malloc(sizeof(struct pacientes));
    aux->sig = NULL;
    cout<<"Registro de Paciente"<<endl;
    cout<<"Nombre Paciente: ";
    cin>> aux->nombres;
    cout<<"Estatura en cms del Paciente: ";
    cin>> aux->estatura;
    cout<<"Peso en Kg del Paciente: ";
    cin>> aux->peso;
    if(!cab){
        cab = aux;
        aux = NULL;
        free(aux);
    } else{
        aux2 = cab;
        while (aux2->sig != NULL){
            aux2 = aux2->sig;
        }
        aux2->sig = aux;
        aux2 = aux = NULL;
        free(aux);
        free(aux2);
    }
};
int mostrar(){
    int cont = 1;
    for(aux=cab; aux!=NULL; aux = aux->sig){

        cout<<"------------------------------"<<endl<<cont++<<". Nombre Paciente: "<<aux->nombres<<endl<<"Estatura en cms: "<<aux->estatura<<endl<<"Peso en Kg: "<<aux->peso<<endl<<endl;

    }
};
int imc(){};

int main(){
    int opcion=0;
    do {
        cout<<"Menu"<<endl<<"1. Registrar"<<endl<<"2. Mostrar"<<endl<<"3. IMC"<<endl<<"5. Salir"<<endl;
        cin>>opcion;
        switch (opcion)
        {
        case 1: registrar(); break;
        case 2: mostrar(); break;
        case 3: imc(); break;        
        }
    } while (opcion!=5);

}
