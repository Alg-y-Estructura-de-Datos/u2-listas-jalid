#include <iostream>
#include "Lista.h"
using namespace std;

/*
Implementar una función que intercambie los elementos entre 2 listas de números enteros que
recibe como parámetros. Si los tamaños de las listas son distintos, igual debe cambiar los datos
y cambiarían los tamaños de cada lista. Ejemplo sea lista1= 15->1->8->35->40->25->12 y lista2=
3->4->912->45->66 al ejecutar la función quedarían lista1= 3->4->912->45->66 y lista2=15->1->8-
>35->40->25->12.
*/

void swapListas(Lista<int> &lista1, Lista<int> &lista2){
    Lista<int> aux1, aux2;

    for (int i = 0; i < lista1.getTamanio(); i++){
        aux1.insertarUltimo(lista1.getDato(i));
    }

    for (int i = 0; i < lista2.getTamanio(); i++){
        aux2.insertarUltimo(lista2.getDato(i));
    }
    
    lista1.vaciar();
    lista2.vaciar();

    for (int i = 0; i < aux2.getTamanio(); i++){
        lista1.insertarUltimo(aux2.getDato(i));
    }
      for (int i = 0; i < aux1.getTamanio(); i++){
        lista2.insertarUltimo(aux1.getDato(i));
    }
}

int main(){

    Lista<int> lista1;
    Lista<int> lista2;

    int d1, d2, n1, n2;

    
    cout << "Ingrese tamanio de la lista 1" << endl;
    cin >> n1;

    cout << "Ingrese tamanio de la lista 2" << endl;
    cin >> n2;

    for(int i = 0; i < n1; i++){
        cout << "Ingrese dato de la lista 1 / " << i << ": "<< endl;
        cin >> d1;
        lista1.insertarUltimo(d1);
    }

    for(int i = 0; i < n2; i++){
        cout << "Ingrese dato de la lista 2 / " << i << ": "<< endl;
        cin >> d2;
        lista2.insertarUltimo(d2);
    }

    cout << "Sin intercambiar " << endl;
    lista1.print();
    lista2.print();

    swapListas(lista1, lista2);

    cout << "Con intercambio lista 1" << endl;
    lista1.print();
    cout << "Con intercambio lista 2" << endl;
    lista2.print();

    return 0;
}