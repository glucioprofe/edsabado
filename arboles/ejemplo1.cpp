#include <iostream>

using namespace std;

struct nodo {
    int valor; 
    nodo *izq;
    nodo *der;
};

nodo *raiz, *aux;
int posicionar(nodo *raiztemporal){
    if(aux->valor < raiztemporal->valor){
        if(raiztemporal->izq != NULL){
            posicionar(raiztemporal->izq);
        } else {
            raiztemporal->izq = aux;
            aux = NULL;
            free(aux);
        }
    }
    else if(aux->valor > raiztemporal->valor){
        if(raiztemporal->der != NULL){
            posicionar(raiztemporal->der);
        } else {
            raiztemporal->der = aux;
            aux = NULL;
            free(aux);
        }
    }
    return 0;
}
int registrar(){
    aux = (struct nodo *)malloc(sizeof(struct nodo));
    aux->izq = aux->der = NULL;
    cout<<"Valor para nodo: ";
    cin >> aux->valor;
    if(!raiz) {
        raiz = aux;
        aux = NULL;
        free(aux);        
    } else {
        posicionar(raiz);
    }
};
int recorrer(nodo *item){
    cout<<"Valor: "<<item->valor<<endl;
    if(item->izq!=NULL){
        recorrer(item->izq);
    }
    if(item->der!=NULL){
        recorrer(item->der);
    }
    return 0;
};

int main(){
    int opc=0;
    do{
        cout<<"1. Registrar Nodo"<<endl;
        cout<<"2. Recorrer árbol"<<endl;
        cout<<"3. Salir"<<endl;
        cin>>opc;
        switch (opc)
        {
            case 1: registrar(); break;
            case 2: recorrer(raiz); break;
        }
    }while(opc!=3);
}