
#include <iostream>
using namespace std;
struct nodo {    
    int id;
    nodo *sig;
};

nodo *cab, *aux, *aux2;

int registrar(){
    aux = ((struct nodo *) malloc(sizeof(struct nodo)));
    if(!cab){
        cab = aux;
        cab->id = 1;
        cab->sig = NULL;
    }
    else {
        aux->id = cab->id+1;
        aux->sig = cab;
        cab = aux;
    }
    aux = NULL;
    free(aux);
}
int mostrar(){
    for(aux=cab; aux!=NULL; aux = aux->sig)
        cout<<"------------------------------"<<endl<<aux->id<<endl;
}
int main(){
        int opcion=0;
    do {
        cout<<"Menu"<<endl<<"1. Registrar"<<endl<<"2. Mostrar"<<endl<<"5. Salir"<<endl;
        cin>>opcion;
        switch (opcion)
        {
        case 1: registrar(); break;
        case 2: mostrar(); break;
        }
    } while (opcion!=5);
    cout<<"Bye";
}
