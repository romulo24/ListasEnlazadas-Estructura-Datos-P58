/*
* Estrucrutra de Datos.
* Autor: Estudiante Torres LLivipuma Romulo Jesus <rtorresll@est.ups.edu.ec>
* Universidad Politecnica Salesiana
* Fecha: 11-06-2021
* Listas Enlazadas
*/
#include <iostream>
using namespace std;
struct nodo{

    int dato;
    struct nodo *enlace;

};
typedef struct nodo *lista_simple ;

void menu(){
    cout<<"\n\t\tSimple Linked List\n\n";
    cout<<" 1. insert          "<<endl;
    cout<<" 2. Print Simple List" <<endl;
    cout<<" 3.Search Element"<<endl;
    cout<<" 4. Exit "<<endl;
    cout<<" \n Enter an option: ";
}

void insertar(lista_simple &nuevo_nodo,int valor){
    lista_simple nodo1;
    nodo1=new(struct nodo);
    nodo1->dato=valor;
    nodo1->enlace=nuevo_nodo;
    nuevo_nodo=nodo1;
}
void imprimir(lista_simple lista){
    while (lista!=NULL) {
        cout<<lista->dato<<endl;
        lista=lista->enlace;

    }
}
void buscarElemento(lista_simple lista,int valor){
    lista_simple lista_buscar;
    lista_buscar=lista;
    int i=1,band=0;
    while (lista_buscar!=NULL){
        if(lista_buscar->dato==valor)
        {
            cout<<endl<<"Found in position " <<i<<endl;
            band=1;

        }
        lista_buscar=lista_buscar->enlace;

        i++;
    }
    if(band==0){
        cout<<"\n\n Value not found...!"<<endl;

    }
}
int main()
{

    lista_simple lista=NULL;
    int opcion;//variables

    int valor;
    do{
        menu();
        cin>>opcion;

        switch (opcion) {
        case 1:
            cout<<"\n Number to Enter: ";cin>>valor;

            insertar(lista,valor);
            break;
        case 2:
            cout<<"\n\n Simple list elements \n\n";

            imprimir(lista);
            break;
        case 3:
            cout<<"\n Value to look for: ";cin>>valor;

            buscarElemento(lista,valor);
            break;

        }
    }while (opcion!=4);
    return 0;

}

