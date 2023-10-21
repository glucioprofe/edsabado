
//Push: Meter datos 
//Pop: Sacar datos 
#include <iostream>
using namespace std;
struct nodo {
    int value;
    nodo *sig;
};

nodo *top, *aux, *top_pila2;

int push(){
    aux = ((struct nodo *) malloc(sizeof(struct nodo)));
    if(!top){
        top = aux;
        top->value = 1;
        top->sig = NULL;
    }
    else {
        aux->value = top->value+1;
        aux->sig = top;
        top = aux;
    }
    aux = NULL;
    free(aux);
}
int mostrar(){
    for(aux=top; aux!=NULL; aux = aux->sig)
        cout<<"- "<<aux->value<<endl;
}
int pop(){
    int opcion;
    mostrar();
    cout<<"Digite el valor del nodo a eliminar: ";
    cin >> opcion;    
    while(top->value != opcion && top!=NULL){
        if(top_pila2==NULL){
            top_pila2 = top;
            top = top->sig;
            top_pila2->sig = NULL;
        }
        else {
            aux = top->sig;
            top->sig = top_pila2;
            top_pila2 = top;
            top = aux;
            aux = NULL;
            free(aux);
        }
    }
    //Aqui elimino
    if(top!=NULL){
        aux = top;
        top = top->sig;
        free(aux);
    }
    while(top_pila2!=NULL){
        aux = top_pila2->sig;
        top_pila2->sig = top;
        top = top_pila2;
        top_pila2 = aux;
        aux = NULL;
        free(aux);
    }


}
int main(){
        int opcion=0;
    do {
        cout<<"Menu"<<endl<<"1. Registrar"<<endl<<"2. Mostrar"<<endl<<"3. Eliminar"<<endl<<"5. Salir"<<endl;
        cin>>opcion;
        switch (opcion)
        {
        case 1: push(); break;
        case 2: mostrar(); break;
        case 3: pop(); break; //Pop() de busqueda
        }
    } while (opcion!=5);
    cout<<"Bye";
}
