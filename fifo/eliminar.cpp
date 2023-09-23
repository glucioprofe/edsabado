#include <iostream>
using namespace std;
struct nodo {    
    int id;
    nodo *sig;
};

nodo *cab, *aux, *aux2, *cola;

int registrar(){
    aux = (struct nodo *) malloc(sizeof(struct nodo));
    aux->sig = NULL;
    if(!cab){
        cola = cab = aux;
        cab->id = 1;         
    } else {
        aux->id = cola->id + 1;
        cola->sig = aux;
        cola = aux;
        aux = NULL;
        free(aux);
    }
};
int mostrar(){
    for(aux=cab; aux!=NULL; aux = aux->sig){
        cout<<"------------------------------"<<endl<<aux->id<<endl;
    }
};
int eliminar(){
    int opc =  0;
    int band = 0; //Representa no encontrado
    cout<<"Digite el id del nodo a eliminar"<<endl;
    cin >> opc;
    aux = cab;
    cout<<" Buscando ..."<<opc<<endl;
    while((band==0)&&(aux!=NULL)) {
        cout<<".. Procesando Id..."<<aux->id<<endl;
        if(aux->id == opc){
            band = 1; // Representa que ya lo encontro            
        } else {
            aux = aux->sig;
        }
    }
    if(aux!=NULL){       
        aux2 = cab;
        while(aux2->sig!=aux){
            aux2 = aux2->sig;
        }
        aux2->sig = aux->sig;
        free(aux);
        aux2 = NULL;
        free(aux2);
        cout<<"NODO ELIMINADO."<<endl;
    } else{
        cout<<"PAILAS EL NODO NO EXISTE."<<endl;
    }
};
int main(){
    int opcion=0;
    do {
        cout<<"Menu"<<endl<<"1. Registrar"<<endl<<"2. Mostrar"<<endl<<"3. Eliminar"<<endl<<"5. Salir"<<endl;
        cin>>opcion;
        switch (opcion)
        {
        case 1: registrar(); break;
        case 2: mostrar(); break;
        case 3: eliminar(); break;        
        }
    } while (opcion!=5);
    cout<<"Bye";

}