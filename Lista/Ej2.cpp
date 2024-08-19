#include <iostream>
#include "Lista.h"
using namespace std;

/*
Implementar una función que recibe una lista de números enteros y un número entero “n” y
que modifique la lista borrando todos los elementos de la lista que tengan el número “n”.
Imprimir la lista antes de hacer el llamado a la función y luego del llamado a la función para
mostrar que la lista original cambió. ej: lista: 1->2->3->4->5->3->7->8->3->10 con n=3 debe
pasar con la función a 1->2->4->5->7->8.
*/

void modificarLista(Lista<int> &lista, int &n, int p){
    for (int i = 0; i < n; i++){
        if(lista.getDato(i) == p){
            lista.remover(i);
            i--;
            n--;
        }
    }
}

int main(){
    Lista <int> Lista1;
    int n, d, p;

    cout << "Ingrese tamanio de la lista" << endl;
    cin >> n;

    for(int i=0; i<n; i++){
        cout << "Ingrese dato de la lista " << i << ": "<< endl;
        cin >> d;
        Lista1.insertarUltimo(d);
    }

    cout << "Lista anterior: ";
    Lista1.print();

    cout << "Ingrese el numero a borrar" << endl;
    cin >> p;

    modificarLista(Lista1, n, p);


    cout << "Lista nueva: ";
    Lista1.print();

    return 0;
}