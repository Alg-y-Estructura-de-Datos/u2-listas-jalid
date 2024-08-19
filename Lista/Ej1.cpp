#include <iostream>
#include "Lista.h"

using namespace std;

void printLista(Lista<int> &lista, int p){
    int tamanio = lista.getTamanio();

    if(p >= tamanio || p < 0){
        cout << "Ingrese una posición correcta";
        return;
    }

    for (int i = p; i < tamanio; i++)
    {
        cout << lista.getDato(i) << "->";
    }
    cout << "NULL" << endl;
}

int main(){
    Lista <int> Lista1;
    int n, d, p;

    p = 5;

    cout << "Ingrese tamanio de la lista" << endl;
    cin >> n;

    for(int i=0; i < n; i++){
        cout << "Ingrese los datos " << i << " : " << endl;
        cin >> d;
        Lista1.insertarUltimo(d);
    }

    printLista(Lista1, p);

    return 0;
}